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
  enum class HlsOutputSelection
  {
    NOT_SET,
    MANIFESTS_AND_SEGMENTS,
    SEGMENTS_ONLY,
    VARIANT_MANIFESTS_AND_SEGMENTS
  };

namespace HlsOutputSelectionMapper
{
AWS_MEDIALIVE_API HlsOutputSelection GetHlsOutputSelectionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsOutputSelection(HlsOutputSelection value);
} // namespace HlsOutputSelectionMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
