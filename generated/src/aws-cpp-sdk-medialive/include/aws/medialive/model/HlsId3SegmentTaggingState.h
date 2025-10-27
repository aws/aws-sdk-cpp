/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class HlsId3SegmentTaggingState { NOT_SET, DISABLED, ENABLED };

namespace HlsId3SegmentTaggingStateMapper {
AWS_MEDIALIVE_API HlsId3SegmentTaggingState GetHlsId3SegmentTaggingStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsId3SegmentTaggingState(HlsId3SegmentTaggingState value);
}  // namespace HlsId3SegmentTaggingStateMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
