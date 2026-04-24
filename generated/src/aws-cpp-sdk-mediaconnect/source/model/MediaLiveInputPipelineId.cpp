/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/MediaLiveInputPipelineId.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace MediaLiveInputPipelineIdMapper {

static const int PIPELINE_0_HASH = HashingUtils::HashString("PIPELINE_0");
static const int PIPELINE_1_HASH = HashingUtils::HashString("PIPELINE_1");

MediaLiveInputPipelineId GetMediaLiveInputPipelineIdForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PIPELINE_0_HASH) {
    return MediaLiveInputPipelineId::PIPELINE_0;
  } else if (hashCode == PIPELINE_1_HASH) {
    return MediaLiveInputPipelineId::PIPELINE_1;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MediaLiveInputPipelineId>(hashCode);
  }

  return MediaLiveInputPipelineId::NOT_SET;
}

Aws::String GetNameForMediaLiveInputPipelineId(MediaLiveInputPipelineId enumValue) {
  switch (enumValue) {
    case MediaLiveInputPipelineId::NOT_SET:
      return {};
    case MediaLiveInputPipelineId::PIPELINE_0:
      return "PIPELINE_0";
    case MediaLiveInputPipelineId::PIPELINE_1:
      return "PIPELINE_1";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MediaLiveInputPipelineIdMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
