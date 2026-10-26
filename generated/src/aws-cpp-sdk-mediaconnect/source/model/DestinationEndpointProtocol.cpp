/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/DestinationEndpointProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace DestinationEndpointProtocolMapper {

static const int RTP_HASH = HashingUtils::HashString("RTP");
static const int RIST_HASH = HashingUtils::HashString("RIST");
static const int SRT_CALLER_HASH = HashingUtils::HashString("SRT_CALLER");
static const int SRT_LISTENER_HASH = HashingUtils::HashString("SRT_LISTENER");

DestinationEndpointProtocol GetDestinationEndpointProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RTP_HASH) {
    return DestinationEndpointProtocol::RTP;
  } else if (hashCode == RIST_HASH) {
    return DestinationEndpointProtocol::RIST;
  } else if (hashCode == SRT_CALLER_HASH) {
    return DestinationEndpointProtocol::SRT_CALLER;
  } else if (hashCode == SRT_LISTENER_HASH) {
    return DestinationEndpointProtocol::SRT_LISTENER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DestinationEndpointProtocol>(hashCode);
  }

  return DestinationEndpointProtocol::NOT_SET;
}

Aws::String GetNameForDestinationEndpointProtocol(DestinationEndpointProtocol enumValue) {
  switch (enumValue) {
    case DestinationEndpointProtocol::NOT_SET:
      return {};
    case DestinationEndpointProtocol::RTP:
      return "RTP";
    case DestinationEndpointProtocol::RIST:
      return "RIST";
    case DestinationEndpointProtocol::SRT_CALLER:
      return "SRT_CALLER";
    case DestinationEndpointProtocol::SRT_LISTENER:
      return "SRT_LISTENER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DestinationEndpointProtocolMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
