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
  enum class HlsDiscontinuityTags
  {
    NOT_SET,
    INSERT,
    NEVER_INSERT
  };

namespace HlsDiscontinuityTagsMapper
{
AWS_MEDIALIVE_API HlsDiscontinuityTags GetHlsDiscontinuityTagsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsDiscontinuityTags(HlsDiscontinuityTags value);
} // namespace HlsDiscontinuityTagsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
