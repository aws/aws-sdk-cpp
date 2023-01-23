/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class UdpTimedMetadataId3Frame
  {
    NOT_SET,
    NONE,
    PRIV,
    TDRL
  };

namespace UdpTimedMetadataId3FrameMapper
{
AWS_MEDIALIVE_API UdpTimedMetadataId3Frame GetUdpTimedMetadataId3FrameForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForUdpTimedMetadataId3Frame(UdpTimedMetadataId3Frame value);
} // namespace UdpTimedMetadataId3FrameMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
