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
  enum class CrossAccountFilterOption
  {
    NOT_SET,
    SameAccount,
    CrossAccount
  };

namespace CrossAccountFilterOptionMapper
{
AWS_SAGEMAKER_API CrossAccountFilterOption GetCrossAccountFilterOptionForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCrossAccountFilterOption(CrossAccountFilterOption value);
} // namespace CrossAccountFilterOptionMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
