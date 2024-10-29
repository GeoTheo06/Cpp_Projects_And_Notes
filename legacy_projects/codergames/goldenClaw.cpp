#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

int main() {
  std::ifstream infile("input.txt");
  std::vector<std::string> inputs;
  std::string line;

  // Read the entire input from the file until EOF
  while (std::getline(infile, line)) {
    if (!line.empty()) {
      inputs.push_back(line);
    }
  }

  infile.close();  // Close the input file

  size_t idx = 0;
  while (idx + 2 < inputs.size()) {
    // Read m
    int m = std::stoi(inputs[idx++]);
    // Read initial configuration
    std::vector<int> initial;
    std::istringstream iss_initial(inputs[idx++]);
    int num;
    while (iss_initial >> num) {
      initial.push_back(num);
    }
    // Read target configuration
    std::vector<int> target;
    std::istringstream iss_target(inputs[idx++]);
    while (iss_target >> num) {
      target.push_back(num);
    }

    int n = initial.size();

    // Compute level starts
    std::vector<int> level_start;
    int total_nodes = 0;
    int level = 0;
    while (total_nodes < n) {
      level_start.push_back(total_nodes);
      total_nodes += level + 1;
      level++;
    }

    // Build parent indices
    std::vector<int> parent(n, -1);
    parent[0] = -1;  // Root has no parent
    for (size_t l = 1; l < level_start.size(); ++l) {
      int start = level_start[l];
      int end = (l + 1 < level_start.size()) ? level_start[l + 1] : n;
      int parent_start = level_start[l - 1];
      for (int p = 0; p < end - start; ++p) {
        int i = start + p;
        if (p == 0) {
          parent[i] = parent_start + p;  // Leftmost node
        } else {
          parent[i] = parent_start + p - 1;
        }
      }
    }

    // Compute rotations
    std::vector<int> rotations(n, 0);
    std::vector<int> cumulative_rotation(n, 0);

    int half_m = m / 2;

    for (int i = 0; i < n; ++i) {
      int cumulative_parent = 0;
      if (parent[i] != -1) {
        cumulative_parent =
            cumulative_rotation[parent[i]] + rotations[parent[i]];
      }
      int rotation = target[i] - initial[i] - cumulative_parent;
      // Adjust rotation to minimal absolute value
      if (rotation > half_m) {
        rotation -= m;
      } else if (rotation < -half_m) {
        rotation += m;
      }
      rotations[i] = rotation;
      cumulative_rotation[i] = cumulative_parent;
    }

    // Output the rotations
    std::cout << "[";
    for (int i = 0; i < n; ++i) {
      std::cout << rotations[i];
      if (i != n - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
  }

  // Output the country
  std::cout << "Greece" << std::endl;

  return 0;
}
