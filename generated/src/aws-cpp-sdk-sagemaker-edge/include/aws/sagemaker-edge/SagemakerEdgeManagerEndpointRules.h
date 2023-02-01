/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>

namespace Aws
{
namespace SagemakerEdgeManager
{
class SagemakerEdgeManagerEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace SagemakerEdgeManager
} // namespace Aws
