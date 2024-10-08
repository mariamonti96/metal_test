#pragma once
#include <simd/simd.h>

using namespace simd;

struct VertexData
{
    float4 position;
    float2 textureCoordinate;
};

struct TransformationData
{
    float4x4 modelMatrix;
    float4x4 viewMatrix;
    float4x4 perspectiveMatrix;
};
