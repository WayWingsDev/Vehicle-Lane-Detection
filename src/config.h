#ifndef VLD_CONFIG_H_
#define VLD_CONFIG_H_

#define GAUSSIANSIZE 25

//由于镜头变形等造成误差
#define ANGLE_SAME_AT_LEASE          0.21 //两线相近，判断角度是否一样
#define ANGLE_PARALLEL_AT_LEASE      0.12 //两线相离一定距离，判断是否平行
#define ANGLE_CODIRECTIONAL_AT_LEASE 0.12 //两线同方向，用于与 lane_theta_ 判断
#define ANGLE_NEAR_RADIAN_90_MIN     1.7707963267948966
#define ANGLE_NEAR_RADIAN_90_MAX     1.3707963267948966

#define LLN_CONNECT_SPACE_DISTANCE_AT_LEAST 1
#define LLN_CONNECT_ANGLE_DISTANCE_AT_LEAST 1

#define LANE_EQUATION_CONSTANT_TERMS_SIZE 4

#define SCORE_MAX 40
//#define IS_DEBUG

#endif // VLD_CONFIG_H_