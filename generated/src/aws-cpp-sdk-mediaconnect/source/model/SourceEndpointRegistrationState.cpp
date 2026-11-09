/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/SourceEndpointRegistrationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace SourceEndpointRegistrationStateMapper {

static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
static const int REGISTERING_HASH = HashingUtils::HashString("REGISTERING");
static const int DEREGISTERING_HASH = HashingUtils::HashString("DEREGISTERING");
static const int REGISTRATION_FAILED_HASH = HashingUtils::HashString("REGISTRATION_FAILED");

SourceEndpointRegistrationState GetSourceEndpointRegistrationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REGISTERED_HASH) {
    return SourceEndpointRegistrationState::REGISTERED;
  } else if (hashCode == REGISTERING_HASH) {
    return SourceEndpointRegistrationState::REGISTERING;
  } else if (hashCode == DEREGISTERING_HASH) {
    return SourceEndpointRegistrationState::DEREGISTERING;
  } else if (hashCode == REGISTRATION_FAILED_HASH) {
    return SourceEndpointRegistrationState::REGISTRATION_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceEndpointRegistrationState>(hashCode);
  }

  return SourceEndpointRegistrationState::NOT_SET;
}

Aws::String GetNameForSourceEndpointRegistrationState(SourceEndpointRegistrationState enumValue) {
  switch (enumValue) {
    case SourceEndpointRegistrationState::NOT_SET:
      return {};
    case SourceEndpointRegistrationState::REGISTERED:
      return "REGISTERED";
    case SourceEndpointRegistrationState::REGISTERING:
      return "REGISTERING";
    case SourceEndpointRegistrationState::DEREGISTERING:
      return "DEREGISTERING";
    case SourceEndpointRegistrationState::REGISTRATION_FAILED:
      return "REGISTRATION_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceEndpointRegistrationStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
