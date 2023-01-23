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
  enum class FeatureType
  {
    NOT_SET,
    Integral,
    Fractional,
    String
  };

namespace FeatureTypeMapper
{
AWS_SAGEMAKER_API FeatureType GetFeatureTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFeatureType(FeatureType value);
} // namespace FeatureTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
