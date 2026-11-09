/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/DestinationEndpointConnectionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace DestinationEndpointConnectionStateMapper {

static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");
static const int CONNECTING_HASH = HashingUtils::HashString("CONNECTING");
static const int DISCONNECTING_HASH = HashingUtils::HashString("DISCONNECTING");

DestinationEndpointConnectionState GetDestinationEndpointConnectionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONNECTED_HASH) {
    return DestinationEndpointConnectionState::CONNECTED;
  } else if (hashCode == DISCONNECTED_HASH) {
    return DestinationEndpointConnectionState::DISCONNECTED;
  } else if (hashCode == CONNECTING_HASH) {
    return DestinationEndpointConnectionState::CONNECTING;
  } else if (hashCode == DISCONNECTING_HASH) {
    return DestinationEndpointConnectionState::DISCONNECTING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DestinationEndpointConnectionState>(hashCode);
  }

  return DestinationEndpointConnectionState::NOT_SET;
}

Aws::String GetNameForDestinationEndpointConnectionState(DestinationEndpointConnectionState enumValue) {
  switch (enumValue) {
    case DestinationEndpointConnectionState::NOT_SET:
      return {};
    case DestinationEndpointConnectionState::CONNECTED:
      return "CONNECTED";
    case DestinationEndpointConnectionState::DISCONNECTED:
      return "DISCONNECTED";
    case DestinationEndpointConnectionState::CONNECTING:
      return "CONNECTING";
    case DestinationEndpointConnectionState::DISCONNECTING:
      return "DISCONNECTING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DestinationEndpointConnectionStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
