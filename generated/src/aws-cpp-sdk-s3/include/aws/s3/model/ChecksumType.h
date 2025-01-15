/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3
{
namespace Model
{
  enum class ChecksumType
  {
    NOT_SET,
    COMPOSITE,
    FULL_OBJECT
  };

namespace ChecksumTypeMapper
{
AWS_S3_API ChecksumType GetChecksumTypeForName(const Aws::String& name);

AWS_S3_API Aws::String GetNameForChecksumType(ChecksumType value);
} // namespace ChecksumTypeMapper
} // namespace Model
} // namespace S3
} // namespace Aws
