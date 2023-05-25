/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class StreamingInstanceType
  {
    NOT_SET,
    g4dn_xlarge,
    g4dn_2xlarge,
    g4dn_4xlarge,
    g4dn_8xlarge,
    g4dn_12xlarge,
    g4dn_16xlarge,
    g3_4xlarge,
    g3s_xlarge,
    g5_xlarge,
    g5_2xlarge,
    g5_4xlarge,
    g5_8xlarge,
    g5_16xlarge
  };

namespace StreamingInstanceTypeMapper
{
AWS_NIMBLESTUDIO_API StreamingInstanceType GetStreamingInstanceTypeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStreamingInstanceType(StreamingInstanceType value);
} // namespace StreamingInstanceTypeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
