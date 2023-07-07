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
  enum class ThumbnailType
  {
    NOT_SET,
    UNSPECIFIED,
    CURRENT_ACTIVE
  };

namespace ThumbnailTypeMapper
{
AWS_MEDIALIVE_API ThumbnailType GetThumbnailTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForThumbnailType(ThumbnailType value);
} // namespace ThumbnailTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
