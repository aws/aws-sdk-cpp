/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{
  enum class FailureHandlingPolicy
  {
    NOT_SET,
    ROLLBACK_ON_FAILURE,
    DO_NOTHING
  };

namespace FailureHandlingPolicyMapper
{
AWS_SAGEMAKEREDGEMANAGER_API FailureHandlingPolicy GetFailureHandlingPolicyForName(const Aws::String& name);

AWS_SAGEMAKEREDGEMANAGER_API Aws::String GetNameForFailureHandlingPolicy(FailureHandlingPolicy value);
} // namespace FailureHandlingPolicyMapper
} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
