/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/polly/model/AudioFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {
namespace AudioFormatMapper {

static const int wav_HASH = HashingUtils::HashString("wav");
static const int flac_HASH = HashingUtils::HashString("flac");
static const int ogg_vorbis_HASH = HashingUtils::HashString("ogg_vorbis");
static const int mp3_HASH = HashingUtils::HashString("mp3");

AudioFormat GetAudioFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == wav_HASH) {
    return AudioFormat::wav;
  } else if (hashCode == flac_HASH) {
    return AudioFormat::flac;
  } else if (hashCode == ogg_vorbis_HASH) {
    return AudioFormat::ogg_vorbis;
  } else if (hashCode == mp3_HASH) {
    return AudioFormat::mp3;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AudioFormat>(hashCode);
  }

  return AudioFormat::NOT_SET;
}

Aws::String GetNameForAudioFormat(AudioFormat enumValue) {
  switch (enumValue) {
    case AudioFormat::NOT_SET:
      return {};
    case AudioFormat::wav:
      return "wav";
    case AudioFormat::flac:
      return "flac";
    case AudioFormat::ogg_vorbis:
      return "ogg_vorbis";
    case AudioFormat::mp3:
      return "mp3";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AudioFormatMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
