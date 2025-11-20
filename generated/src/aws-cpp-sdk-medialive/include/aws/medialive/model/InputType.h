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
enum class InputType {
  NOT_SET,
  UDP_PUSH,
  RTP_PUSH,
  RTMP_PUSH,
  RTMP_PULL,
  URL_PULL,
  MP4_FILE,
  MEDIACONNECT,
  INPUT_DEVICE,
  AWS_CDI,
  TS_FILE,
  SRT_CALLER,
  MULTICAST,
  SMPTE_2110_RECEIVER_GROUP,
  SDI,
  MEDIACONNECT_ROUTER
};

namespace InputTypeMapper {
AWS_MEDIALIVE_API InputType GetInputTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputType(InputType value);
}  // namespace InputTypeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
