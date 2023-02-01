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
  enum class ClarifyFeatureType
  {
    NOT_SET,
    numerical,
    categorical,
    text
  };

namespace ClarifyFeatureTypeMapper
{
AWS_SAGEMAKER_API ClarifyFeatureType GetClarifyFeatureTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClarifyFeatureType(ClarifyFeatureType value);
} // namespace ClarifyFeatureTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
