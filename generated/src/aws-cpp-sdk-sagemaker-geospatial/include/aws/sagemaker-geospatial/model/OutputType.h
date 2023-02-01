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
  enum class OutputType
  {
    NOT_SET,
    INT32,
    FLOAT32,
    INT16,
    FLOAT64,
    UINT16
  };

namespace OutputTypeMapper
{
AWS_SAGEMAKERGEOSPATIAL_API OutputType GetOutputTypeForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForOutputType(OutputType value);
} // namespace OutputTypeMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
