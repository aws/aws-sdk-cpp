/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/ConnectionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace ConnectionTypeMapper {

static const int OPPORTUNITY_COLLABORATION_HASH = HashingUtils::HashString("OPPORTUNITY_COLLABORATION");
static const int SUBSIDIARY_HASH = HashingUtils::HashString("SUBSIDIARY");

ConnectionType GetConnectionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPPORTUNITY_COLLABORATION_HASH) {
    return ConnectionType::OPPORTUNITY_COLLABORATION;
  } else if (hashCode == SUBSIDIARY_HASH) {
    return ConnectionType::SUBSIDIARY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectionType>(hashCode);
  }

  return ConnectionType::NOT_SET;
}

Aws::String GetNameForConnectionType(ConnectionType enumValue) {
  switch (enumValue) {
    case ConnectionType::NOT_SET:
      return {};
    case ConnectionType::OPPORTUNITY_COLLABORATION:
      return "OPPORTUNITY_COLLABORATION";
    case ConnectionType::SUBSIDIARY:
      return "SUBSIDIARY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectionTypeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
