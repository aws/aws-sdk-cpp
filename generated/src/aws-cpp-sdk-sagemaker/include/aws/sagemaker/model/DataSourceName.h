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
  enum class DataSourceName
  {
    NOT_SET,
    SalesforceGenie,
    Snowflake
  };

namespace DataSourceNameMapper
{
AWS_SAGEMAKER_API DataSourceName GetDataSourceNameForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDataSourceName(DataSourceName value);
} // namespace DataSourceNameMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
