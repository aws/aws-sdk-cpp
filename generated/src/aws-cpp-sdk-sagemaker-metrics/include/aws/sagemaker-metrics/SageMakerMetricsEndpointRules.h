/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>

namespace Aws
{
namespace SageMakerMetrics
{
class SageMakerMetricsEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace SageMakerMetrics
} // namespace Aws
