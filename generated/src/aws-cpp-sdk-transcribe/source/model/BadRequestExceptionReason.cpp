/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/transcribe/model/BadRequestExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {
namespace BadRequestExceptionReasonMapper {

static const int audioTooLong_HASH = HashingUtils::HashString("audioTooLong");
static const int audioTooShort_HASH = HashingUtils::HashString("audioTooShort");
static const int unsupportedAudioFormat_HASH = HashingUtils::HashString("unsupportedAudioFormat");
static const int unsupportedChannelCount_HASH = HashingUtils::HashString("unsupportedChannelCount");
static const int invalidAudio_HASH = HashingUtils::HashString("invalidAudio");
static const int audioFileTooLarge_HASH = HashingUtils::HashString("audioFileTooLarge");
static const int mediaDownloadFailed_HASH = HashingUtils::HashString("mediaDownloadFailed");

BadRequestExceptionReason GetBadRequestExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == audioTooLong_HASH) {
    return BadRequestExceptionReason::audioTooLong;
  } else if (hashCode == audioTooShort_HASH) {
    return BadRequestExceptionReason::audioTooShort;
  } else if (hashCode == unsupportedAudioFormat_HASH) {
    return BadRequestExceptionReason::unsupportedAudioFormat;
  } else if (hashCode == unsupportedChannelCount_HASH) {
    return BadRequestExceptionReason::unsupportedChannelCount;
  } else if (hashCode == invalidAudio_HASH) {
    return BadRequestExceptionReason::invalidAudio;
  } else if (hashCode == audioFileTooLarge_HASH) {
    return BadRequestExceptionReason::audioFileTooLarge;
  } else if (hashCode == mediaDownloadFailed_HASH) {
    return BadRequestExceptionReason::mediaDownloadFailed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BadRequestExceptionReason>(hashCode);
  }

  return BadRequestExceptionReason::NOT_SET;
}

Aws::String GetNameForBadRequestExceptionReason(BadRequestExceptionReason enumValue) {
  switch (enumValue) {
    case BadRequestExceptionReason::NOT_SET:
      return {};
    case BadRequestExceptionReason::audioTooLong:
      return "audioTooLong";
    case BadRequestExceptionReason::audioTooShort:
      return "audioTooShort";
    case BadRequestExceptionReason::unsupportedAudioFormat:
      return "unsupportedAudioFormat";
    case BadRequestExceptionReason::unsupportedChannelCount:
      return "unsupportedChannelCount";
    case BadRequestExceptionReason::invalidAudio:
      return "invalidAudio";
    case BadRequestExceptionReason::audioFileTooLarge:
      return "audioFileTooLarge";
    case BadRequestExceptionReason::mediaDownloadFailed:
      return "mediaDownloadFailed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BadRequestExceptionReasonMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
