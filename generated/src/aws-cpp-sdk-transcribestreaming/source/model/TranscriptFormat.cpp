/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/transcribestreaming/model/TranscriptFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace TranscribeStreamingService {
namespace Model {
namespace TranscriptFormatMapper {

static const int spoken_HASH = HashingUtils::HashString("spoken");
static const int written_HASH = HashingUtils::HashString("written");

TranscriptFormat GetTranscriptFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == spoken_HASH) {
    return TranscriptFormat::spoken;
  } else if (hashCode == written_HASH) {
    return TranscriptFormat::written;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TranscriptFormat>(hashCode);
  }

  return TranscriptFormat::NOT_SET;
}

Aws::String GetNameForTranscriptFormat(TranscriptFormat enumValue) {
  switch (enumValue) {
    case TranscriptFormat::NOT_SET:
      return {};
    case TranscriptFormat::spoken:
      return "spoken";
    case TranscriptFormat::written:
      return "written";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TranscriptFormatMapper
}  // namespace Model
}  // namespace TranscribeStreamingService
}  // namespace Aws
