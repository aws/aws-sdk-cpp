/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class RuleEvaluationStatus
  {
    NOT_SET,
    InProgress,
    NoIssuesFound,
    IssuesFound,
    Error,
    Stopping,
    Stopped
  };

namespace RuleEvaluationStatusMapper
{
AWS_SAGEMAKER_API RuleEvaluationStatus GetRuleEvaluationStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRuleEvaluationStatus(RuleEvaluationStatus value);
} // namespace RuleEvaluationStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
