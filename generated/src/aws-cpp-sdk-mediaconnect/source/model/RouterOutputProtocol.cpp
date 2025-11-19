/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterOutputProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterOutputProtocolMapper {

static const int RTP_HASH = HashingUtils::HashString("RTP");
static const int RIST_HASH = HashingUtils::HashString("RIST");
static const int SRT_CALLER_HASH = HashingUtils::HashString("SRT_CALLER");
static const int SRT_LISTENER_HASH = HashingUtils::HashString("SRT_LISTENER");

RouterOutputProtocol GetRouterOutputProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RTP_HASH) {
    return RouterOutputProtocol::RTP;
  } else if (hashCode == RIST_HASH) {
    return RouterOutputProtocol::RIST;
  } else if (hashCode == SRT_CALLER_HASH) {
    return RouterOutputProtocol::SRT_CALLER;
  } else if (hashCode == SRT_LISTENER_HASH) {
    return RouterOutputProtocol::SRT_LISTENER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterOutputProtocol>(hashCode);
  }

  return RouterOutputProtocol::NOT_SET;
}

Aws::String GetNameForRouterOutputProtocol(RouterOutputProtocol enumValue) {
  switch (enumValue) {
    case RouterOutputProtocol::NOT_SET:
      return {};
    case RouterOutputProtocol::RTP:
      return "RTP";
    case RouterOutputProtocol::RIST:
      return "RIST";
    case RouterOutputProtocol::SRT_CALLER:
      return "SRT_CALLER";
    case RouterOutputProtocol::SRT_LISTENER:
      return "SRT_LISTENER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterOutputProtocolMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
