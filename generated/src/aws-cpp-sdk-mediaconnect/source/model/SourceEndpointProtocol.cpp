/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/SourceEndpointProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace SourceEndpointProtocolMapper {

static const int RTP_HASH = HashingUtils::HashString("RTP");
static const int RIST_HASH = HashingUtils::HashString("RIST");
static const int SRT_CALLER_HASH = HashingUtils::HashString("SRT_CALLER");
static const int SRT_LISTENER_HASH = HashingUtils::HashString("SRT_LISTENER");

SourceEndpointProtocol GetSourceEndpointProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RTP_HASH) {
    return SourceEndpointProtocol::RTP;
  } else if (hashCode == RIST_HASH) {
    return SourceEndpointProtocol::RIST;
  } else if (hashCode == SRT_CALLER_HASH) {
    return SourceEndpointProtocol::SRT_CALLER;
  } else if (hashCode == SRT_LISTENER_HASH) {
    return SourceEndpointProtocol::SRT_LISTENER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceEndpointProtocol>(hashCode);
  }

  return SourceEndpointProtocol::NOT_SET;
}

Aws::String GetNameForSourceEndpointProtocol(SourceEndpointProtocol enumValue) {
  switch (enumValue) {
    case SourceEndpointProtocol::NOT_SET:
      return {};
    case SourceEndpointProtocol::RTP:
      return "RTP";
    case SourceEndpointProtocol::RIST:
      return "RIST";
    case SourceEndpointProtocol::SRT_CALLER:
      return "SRT_CALLER";
    case SourceEndpointProtocol::SRT_LISTENER:
      return "SRT_LISTENER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceEndpointProtocolMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
