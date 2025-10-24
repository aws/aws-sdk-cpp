﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/polly/model/OutputFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {
namespace OutputFormatMapper {

static const int json_HASH = HashingUtils::HashString("json");
static const int mp3_HASH = HashingUtils::HashString("mp3");
static const int ogg_opus_HASH = HashingUtils::HashString("ogg_opus");
static const int ogg_vorbis_HASH = HashingUtils::HashString("ogg_vorbis");
static const int pcm_HASH = HashingUtils::HashString("pcm");

OutputFormat GetOutputFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == json_HASH) {
    return OutputFormat::json;
  } else if (hashCode == mp3_HASH) {
    return OutputFormat::mp3;
  } else if (hashCode == ogg_opus_HASH) {
    return OutputFormat::ogg_opus;
  } else if (hashCode == ogg_vorbis_HASH) {
    return OutputFormat::ogg_vorbis;
  } else if (hashCode == pcm_HASH) {
    return OutputFormat::pcm;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutputFormat>(hashCode);
  }

  return OutputFormat::NOT_SET;
}

Aws::String GetNameForOutputFormat(OutputFormat enumValue) {
  switch (enumValue) {
    case OutputFormat::NOT_SET:
      return {};
    case OutputFormat::json:
      return "json";
    case OutputFormat::mp3:
      return "mp3";
    case OutputFormat::ogg_opus:
      return "ogg_opus";
    case OutputFormat::ogg_vorbis:
      return "ogg_vorbis";
    case OutputFormat::pcm:
      return "pcm";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutputFormatMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
