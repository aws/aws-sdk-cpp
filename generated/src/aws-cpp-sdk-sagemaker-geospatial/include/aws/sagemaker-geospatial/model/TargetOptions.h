/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{
  enum class TargetOptions
  {
    NOT_SET,
    INPUT,
    OUTPUT
  };

namespace TargetOptionsMapper
{
AWS_SAGEMAKERGEOSPATIAL_API TargetOptions GetTargetOptionsForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForTargetOptions(TargetOptions value);
} // namespace TargetOptionsMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
