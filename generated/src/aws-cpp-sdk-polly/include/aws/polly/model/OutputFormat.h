/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Polly
{
namespace Model
{
  enum class OutputFormat
  {
    NOT_SET,
    json,
    mp3,
    ogg_vorbis,
    pcm
  };

namespace OutputFormatMapper
{
AWS_POLLY_API OutputFormat GetOutputFormatForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForOutputFormat(OutputFormat value);
} // namespace OutputFormatMapper
} // namespace Model
} // namespace Polly
} // namespace Aws
