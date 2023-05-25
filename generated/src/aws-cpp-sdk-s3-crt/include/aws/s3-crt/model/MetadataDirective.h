/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class MetadataDirective
  {
    NOT_SET,
    COPY,
    REPLACE
  };

namespace MetadataDirectiveMapper
{
AWS_S3CRT_API MetadataDirective GetMetadataDirectiveForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForMetadataDirective(MetadataDirective value);
} // namespace MetadataDirectiveMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
