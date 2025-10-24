﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class Protocol {
  NOT_SET,
  zixi_push,
  rtp_fec,
  rtp,
  zixi_pull,
  rist,
  st2110_jpegxs,
  cdi,
  srt_listener,
  srt_caller,
  fujitsu_qos,
  udp,
  ndi_speed_hq
};

namespace ProtocolMapper {
AWS_MEDIACONNECT_API Protocol GetProtocolForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForProtocol(Protocol value);
}  // namespace ProtocolMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
