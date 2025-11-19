/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterInputProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterInputProtocolMapper {

static const int RTP_HASH = HashingUtils::HashString("RTP");
static const int RIST_HASH = HashingUtils::HashString("RIST");
static const int SRT_CALLER_HASH = HashingUtils::HashString("SRT_CALLER");
static const int SRT_LISTENER_HASH = HashingUtils::HashString("SRT_LISTENER");

RouterInputProtocol GetRouterInputProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RTP_HASH) {
    return RouterInputProtocol::RTP;
  } else if (hashCode == RIST_HASH) {
    return RouterInputProtocol::RIST;
  } else if (hashCode == SRT_CALLER_HASH) {
    return RouterInputProtocol::SRT_CALLER;
  } else if (hashCode == SRT_LISTENER_HASH) {
    return RouterInputProtocol::SRT_LISTENER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterInputProtocol>(hashCode);
  }

  return RouterInputProtocol::NOT_SET;
}

Aws::String GetNameForRouterInputProtocol(RouterInputProtocol enumValue) {
  switch (enumValue) {
    case RouterInputProtocol::NOT_SET:
      return {};
    case RouterInputProtocol::RTP:
      return "RTP";
    case RouterInputProtocol::RIST:
      return "RIST";
    case RouterInputProtocol::SRT_CALLER:
      return "SRT_CALLER";
    case RouterInputProtocol::SRT_LISTENER:
      return "SRT_LISTENER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterInputProtocolMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
