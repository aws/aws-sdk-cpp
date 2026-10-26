/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/SourceEndpointConnectionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace SourceEndpointConnectionStateMapper {

static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");
static const int CONNECTING_HASH = HashingUtils::HashString("CONNECTING");
static const int DISCONNECTING_HASH = HashingUtils::HashString("DISCONNECTING");

SourceEndpointConnectionState GetSourceEndpointConnectionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONNECTED_HASH) {
    return SourceEndpointConnectionState::CONNECTED;
  } else if (hashCode == DISCONNECTED_HASH) {
    return SourceEndpointConnectionState::DISCONNECTED;
  } else if (hashCode == CONNECTING_HASH) {
    return SourceEndpointConnectionState::CONNECTING;
  } else if (hashCode == DISCONNECTING_HASH) {
    return SourceEndpointConnectionState::DISCONNECTING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceEndpointConnectionState>(hashCode);
  }

  return SourceEndpointConnectionState::NOT_SET;
}

Aws::String GetNameForSourceEndpointConnectionState(SourceEndpointConnectionState enumValue) {
  switch (enumValue) {
    case SourceEndpointConnectionState::NOT_SET:
      return {};
    case SourceEndpointConnectionState::CONNECTED:
      return "CONNECTED";
    case SourceEndpointConnectionState::DISCONNECTED:
      return "DISCONNECTED";
    case SourceEndpointConnectionState::CONNECTING:
      return "CONNECTING";
    case SourceEndpointConnectionState::DISCONNECTING:
      return "DISCONNECTING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceEndpointConnectionStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
