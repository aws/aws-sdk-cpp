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
  enum class LineageType
  {
    NOT_SET,
    TrialComponent,
    Artifact,
    Context,
    Action
  };

namespace LineageTypeMapper
{
AWS_SAGEMAKER_API LineageType GetLineageTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForLineageType(LineageType value);
} // namespace LineageTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
