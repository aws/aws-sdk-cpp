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
  enum class SseType
  {
    NOT_SET,
    AES256,
    aws_kms
  };

namespace SseTypeMapper
{
AWS_S3VECTORS_API SseType GetSseTypeForName(const Aws::String& name);

AWS_S3VECTORS_API Aws::String GetNameForSseType(SseType value);
} // namespace SseTypeMapper
} // namespace Model
} // namespace S3Vectors
} // namespace Aws
