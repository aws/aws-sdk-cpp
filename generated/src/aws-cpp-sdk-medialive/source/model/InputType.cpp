﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/InputType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace InputTypeMapper {

static const int UDP_PUSH_HASH = HashingUtils::HashString("UDP_PUSH");
static const int RTP_PUSH_HASH = HashingUtils::HashString("RTP_PUSH");
static const int RTMP_PUSH_HASH = HashingUtils::HashString("RTMP_PUSH");
static const int RTMP_PULL_HASH = HashingUtils::HashString("RTMP_PULL");
static const int URL_PULL_HASH = HashingUtils::HashString("URL_PULL");
static const int MP4_FILE_HASH = HashingUtils::HashString("MP4_FILE");
static const int MEDIACONNECT_HASH = HashingUtils::HashString("MEDIACONNECT");
static const int INPUT_DEVICE_HASH = HashingUtils::HashString("INPUT_DEVICE");
static const int AWS_CDI_HASH = HashingUtils::HashString("AWS_CDI");
static const int TS_FILE_HASH = HashingUtils::HashString("TS_FILE");
static const int SRT_CALLER_HASH = HashingUtils::HashString("SRT_CALLER");
static const int MULTICAST_HASH = HashingUtils::HashString("MULTICAST");
static const int SMPTE_2110_RECEIVER_GROUP_HASH = HashingUtils::HashString("SMPTE_2110_RECEIVER_GROUP");
static const int SDI_HASH = HashingUtils::HashString("SDI");

InputType GetInputTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UDP_PUSH_HASH) {
    return InputType::UDP_PUSH;
  } else if (hashCode == RTP_PUSH_HASH) {
    return InputType::RTP_PUSH;
  } else if (hashCode == RTMP_PUSH_HASH) {
    return InputType::RTMP_PUSH;
  } else if (hashCode == RTMP_PULL_HASH) {
    return InputType::RTMP_PULL;
  } else if (hashCode == URL_PULL_HASH) {
    return InputType::URL_PULL;
  } else if (hashCode == MP4_FILE_HASH) {
    return InputType::MP4_FILE;
  } else if (hashCode == MEDIACONNECT_HASH) {
    return InputType::MEDIACONNECT;
  } else if (hashCode == INPUT_DEVICE_HASH) {
    return InputType::INPUT_DEVICE;
  } else if (hashCode == AWS_CDI_HASH) {
    return InputType::AWS_CDI;
  } else if (hashCode == TS_FILE_HASH) {
    return InputType::TS_FILE;
  } else if (hashCode == SRT_CALLER_HASH) {
    return InputType::SRT_CALLER;
  } else if (hashCode == MULTICAST_HASH) {
    return InputType::MULTICAST;
  } else if (hashCode == SMPTE_2110_RECEIVER_GROUP_HASH) {
    return InputType::SMPTE_2110_RECEIVER_GROUP;
  } else if (hashCode == SDI_HASH) {
    return InputType::SDI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InputType>(hashCode);
  }

  return InputType::NOT_SET;
}

Aws::String GetNameForInputType(InputType enumValue) {
  switch (enumValue) {
    case InputType::NOT_SET:
      return {};
    case InputType::UDP_PUSH:
      return "UDP_PUSH";
    case InputType::RTP_PUSH:
      return "RTP_PUSH";
    case InputType::RTMP_PUSH:
      return "RTMP_PUSH";
    case InputType::RTMP_PULL:
      return "RTMP_PULL";
    case InputType::URL_PULL:
      return "URL_PULL";
    case InputType::MP4_FILE:
      return "MP4_FILE";
    case InputType::MEDIACONNECT:
      return "MEDIACONNECT";
    case InputType::INPUT_DEVICE:
      return "INPUT_DEVICE";
    case InputType::AWS_CDI:
      return "AWS_CDI";
    case InputType::TS_FILE:
      return "TS_FILE";
    case InputType::SRT_CALLER:
      return "SRT_CALLER";
    case InputType::MULTICAST:
      return "MULTICAST";
    case InputType::SMPTE_2110_RECEIVER_GROUP:
      return "SMPTE_2110_RECEIVER_GROUP";
    case InputType::SDI:
      return "SDI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InputTypeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
