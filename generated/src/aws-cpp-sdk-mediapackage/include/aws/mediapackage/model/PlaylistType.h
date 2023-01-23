/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{
  enum class PlaylistType
  {
    NOT_SET,
    NONE,
    EVENT,
    VOD
  };

namespace PlaylistTypeMapper
{
AWS_MEDIAPACKAGE_API PlaylistType GetPlaylistTypeForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForPlaylistType(PlaylistType value);
} // namespace PlaylistTypeMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
