/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/HandshakeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace HandshakeTypeMapper {

static const int START_SERVICE_PERIOD_HASH = HashingUtils::HashString("START_SERVICE_PERIOD");
static const int REVOKE_SERVICE_PERIOD_HASH = HashingUtils::HashString("REVOKE_SERVICE_PERIOD");
static const int PROGRAM_MANAGEMENT_ACCOUNT_HASH = HashingUtils::HashString("PROGRAM_MANAGEMENT_ACCOUNT");

HandshakeType GetHandshakeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == START_SERVICE_PERIOD_HASH) {
    return HandshakeType::START_SERVICE_PERIOD;
  } else if (hashCode == REVOKE_SERVICE_PERIOD_HASH) {
    return HandshakeType::REVOKE_SERVICE_PERIOD;
  } else if (hashCode == PROGRAM_MANAGEMENT_ACCOUNT_HASH) {
    return HandshakeType::PROGRAM_MANAGEMENT_ACCOUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HandshakeType>(hashCode);
  }

  return HandshakeType::NOT_SET;
}

Aws::String GetNameForHandshakeType(HandshakeType enumValue) {
  switch (enumValue) {
    case HandshakeType::NOT_SET:
      return {};
    case HandshakeType::START_SERVICE_PERIOD:
      return "START_SERVICE_PERIOD";
    case HandshakeType::REVOKE_SERVICE_PERIOD:
      return "REVOKE_SERVICE_PERIOD";
    case HandshakeType::PROGRAM_MANAGEMENT_ACCOUNT:
      return "PROGRAM_MANAGEMENT_ACCOUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HandshakeTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
