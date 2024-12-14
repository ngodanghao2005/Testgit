1. Brief Description
This pull request contains the implementation of a policy solving the 2D Cutting Stock Problem by applying 2 heuristic methods: Bottom-Left (BL) Heuristic and First Fit Decreasing Height (FFDH) Heuristic:
- Bottom-Left Heuristic (policy_id=1): This is a heuristic method designed to solve the 2D Cutting Stock Problem, which includes effectively packing smaller rectangular items onto larger stock sheets, aiming to minimize the waste of material. By reordering the stock sheets and products in a reasonable rule, the algorithm follows a simple placement strategy to place the rectangular products so that the areas are optimized, minimizing the trim loss
- FFDH Heuristic (policy_id=2): Filling the stock sheets through the levels set by the heights of a certain number of products which have been sorted in descending order of their heights. Using FFDH can be more efficiently in managing the filling spaces for the products.
2. The implementation of the policy showing the commits of team members
- Ngô Đăng Hào (2352295): Implement Bottom-Left Heuristic
- Phạm Viết Hào (2352297): Implement FFDH Heuristic
- Nguyễn Hiếu Nhân (2352850): Research for Bottom-Left Heuristic
- Trương Phước Minh Hoàng (2352359): Research for FFDH Heuristic
3. The summarized results of the policy
- Based on 100 seeds from 0 to 99, we have calculated the average trim loss, filled ratio and running time of 2 different heuristics BL and FFDH. In addition, the best case and the worst case of each heuristic are also illustrated:
| **Policy** | **Trim Loss** | **Filled Ratio** | **Running Time** |
| :--- | :--- | :--- | :--- |
| **BL** | 0.170 | 0.127 | 53.767 | 
| **FFDH** | 0.242 | 0.204 | 0.854 | 

- Best case BL: Seed 67, Trim Loss: 0.058, Filled Ratio: 0.21, Running Time: 150.015s
- Worst case BL: Seed 66, Trim Loss: 0.889, Filled Ratio: 0.01, Running Time: 0.140s
- Best case FFDH: Seed 87, Trim Loss: 0.118, Filled Ratio: 0.25, Running Time: 2.608s
- Worst case FFDH: Seed 65, Trim Loss: 0.773, Filled Ratio: 0.01, Running Time: 0.005s
