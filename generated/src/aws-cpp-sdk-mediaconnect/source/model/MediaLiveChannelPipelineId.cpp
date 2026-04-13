/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/MediaLiveChannelPipelineId.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace MediaLiveChannelPipelineIdMapper {

static const int PIPELINE_0_HASH = HashingUtils::HashString("PIPELINE_0");
static const int PIPELINE_1_HASH = HashingUtils::HashString("PIPELINE_1");

MediaLiveChannelPipelineId GetMediaLiveChannelPipelineIdForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PIPELINE_0_HASH) {
    return MediaLiveChannelPipelineId::PIPELINE_0;
  } else if (hashCode == PIPELINE_1_HASH) {
    return MediaLiveChannelPipelineId::PIPELINE_1;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MediaLiveChannelPipelineId>(hashCode);
  }

  return MediaLiveChannelPipelineId::NOT_SET;
}

Aws::String GetNameForMediaLiveChannelPipelineId(MediaLiveChannelPipelineId enumValue) {
  switch (enumValue) {
    case MediaLiveChannelPipelineId::NOT_SET:
      return {};
    case MediaLiveChannelPipelineId::PIPELINE_0:
      return "PIPELINE_0";
    case MediaLiveChannelPipelineId::PIPELINE_1:
      return "PIPELINE_1";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MediaLiveChannelPipelineIdMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
