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
  enum class TagPropagation
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace TagPropagationMapper
{
AWS_SAGEMAKER_API TagPropagation GetTagPropagationForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTagPropagation(TagPropagation value);
} // namespace TagPropagationMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
