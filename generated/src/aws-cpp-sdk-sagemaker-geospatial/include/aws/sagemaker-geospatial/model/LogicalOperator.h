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
  enum class LogicalOperator
  {
    NOT_SET,
    AND
  };

namespace LogicalOperatorMapper
{
AWS_SAGEMAKERGEOSPATIAL_API LogicalOperator GetLogicalOperatorForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForLogicalOperator(LogicalOperator value);
} // namespace LogicalOperatorMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
