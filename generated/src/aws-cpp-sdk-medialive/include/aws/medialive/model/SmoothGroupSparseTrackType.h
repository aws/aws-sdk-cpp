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
  enum class SmoothGroupSparseTrackType
  {
    NOT_SET,
    NONE,
    SCTE_35,
    SCTE_35_WITHOUT_SEGMENTATION
  };

namespace SmoothGroupSparseTrackTypeMapper
{
AWS_MEDIALIVE_API SmoothGroupSparseTrackType GetSmoothGroupSparseTrackTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSmoothGroupSparseTrackType(SmoothGroupSparseTrackType value);
} // namespace SmoothGroupSparseTrackTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
