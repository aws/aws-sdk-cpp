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
  enum class CmafTimedMetadataId3Frame
  {
    NOT_SET,
    NONE,
    PRIV,
    TDRL
  };

namespace CmafTimedMetadataId3FrameMapper
{
AWS_MEDIALIVE_API CmafTimedMetadataId3Frame GetCmafTimedMetadataId3FrameForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCmafTimedMetadataId3Frame(CmafTimedMetadataId3Frame value);
} // namespace CmafTimedMetadataId3FrameMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
