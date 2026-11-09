/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/DestinationEndpointRegistrationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace DestinationEndpointRegistrationStateMapper {

static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
static const int REGISTERING_HASH = HashingUtils::HashString("REGISTERING");
static const int DEREGISTERING_HASH = HashingUtils::HashString("DEREGISTERING");
static const int REGISTRATION_FAILED_HASH = HashingUtils::HashString("REGISTRATION_FAILED");

DestinationEndpointRegistrationState GetDestinationEndpointRegistrationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REGISTERED_HASH) {
    return DestinationEndpointRegistrationState::REGISTERED;
  } else if (hashCode == REGISTERING_HASH) {
    return DestinationEndpointRegistrationState::REGISTERING;
  } else if (hashCode == DEREGISTERING_HASH) {
    return DestinationEndpointRegistrationState::DEREGISTERING;
  } else if (hashCode == REGISTRATION_FAILED_HASH) {
    return DestinationEndpointRegistrationState::REGISTRATION_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DestinationEndpointRegistrationState>(hashCode);
  }

  return DestinationEndpointRegistrationState::NOT_SET;
}

Aws::String GetNameForDestinationEndpointRegistrationState(DestinationEndpointRegistrationState enumValue) {
  switch (enumValue) {
    case DestinationEndpointRegistrationState::NOT_SET:
      return {};
    case DestinationEndpointRegistrationState::REGISTERED:
      return "REGISTERED";
    case DestinationEndpointRegistrationState::REGISTERING:
      return "REGISTERING";
    case DestinationEndpointRegistrationState::DEREGISTERING:
      return "DEREGISTERING";
    case DestinationEndpointRegistrationState::REGISTRATION_FAILED:
      return "REGISTRATION_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DestinationEndpointRegistrationStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
