/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class S3OutputFormat
  {
    NOT_SET,
    json,
    plain,
    w3c
  };

namespace S3OutputFormatMapper
{
AWS_PIPES_API S3OutputFormat GetS3OutputFormatForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForS3OutputFormat(S3OutputFormat value);
} // namespace S3OutputFormatMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
