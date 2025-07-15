/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Vectors
{
namespace Model
{
  enum class DataType
  {
    NOT_SET,
    float32
  };

namespace DataTypeMapper
{
AWS_S3VECTORS_API DataType GetDataTypeForName(const Aws::String& name);

AWS_S3VECTORS_API Aws::String GetNameForDataType(DataType value);
} // namespace DataTypeMapper
} // namespace Model
} // namespace S3Vectors
} // namespace Aws
