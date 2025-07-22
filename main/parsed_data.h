#ifndef PARSED_DATA_H
#define PARSED_DATA_H

#include <string>
#include <vector>

// 代表一个项目的数据结构
struct ProjectData {
    std::string projectName; // 项目名称 (例如: "bp")
    double weight;           // 重量 (例如: 60)
    std::vector<int> reps;   // 每组的次数 (例如: [10, 10, 9, 8])
};

// 代表一个日期下所有项目的数据结构
struct DailyData {
    std::string date; // 日期 (例如: "0721")
    std::vector<ProjectData> projects;
};

#endif // PARSED_DATA_H