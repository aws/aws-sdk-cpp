/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/PipelineLockingMethod.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace PipelineLockingMethodMapper {

static const int SOURCE_TIMECODE_HASH = HashingUtils::HashString("SOURCE_TIMECODE");
static const int VIDEO_ALIGNMENT_HASH = HashingUtils::HashString("VIDEO_ALIGNMENT");

PipelineLockingMethod GetPipelineLockingMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SOURCE_TIMECODE_HASH) {
    return PipelineLockingMethod::SOURCE_TIMECODE;
  } else if (hashCode == VIDEO_ALIGNMENT_HASH) {
    return PipelineLockingMethod::VIDEO_ALIGNMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PipelineLockingMethod>(hashCode);
  }

  return PipelineLockingMethod::NOT_SET;
}

Aws::String GetNameForPipelineLockingMethod(PipelineLockingMethod enumValue) {
  switch (enumValue) {
    case PipelineLockingMethod::NOT_SET:
      return {};
    case PipelineLockingMethod::SOURCE_TIMECODE:
      return "SOURCE_TIMECODE";
    case PipelineLockingMethod::VIDEO_ALIGNMENT:
      return "VIDEO_ALIGNMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PipelineLockingMethodMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
