/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterInputTransitEncryptionKeyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterInputTransitEncryptionKeyTypeMapper {

static const int SECRETS_MANAGER_HASH = HashingUtils::HashString("SECRETS_MANAGER");
static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");

RouterInputTransitEncryptionKeyType GetRouterInputTransitEncryptionKeyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SECRETS_MANAGER_HASH) {
    return RouterInputTransitEncryptionKeyType::SECRETS_MANAGER;
  } else if (hashCode == AUTOMATIC_HASH) {
    return RouterInputTransitEncryptionKeyType::AUTOMATIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterInputTransitEncryptionKeyType>(hashCode);
  }

  return RouterInputTransitEncryptionKeyType::NOT_SET;
}

Aws::String GetNameForRouterInputTransitEncryptionKeyType(RouterInputTransitEncryptionKeyType enumValue) {
  switch (enumValue) {
    case RouterInputTransitEncryptionKeyType::NOT_SET:
      return {};
    case RouterInputTransitEncryptionKeyType::SECRETS_MANAGER:
      return "SECRETS_MANAGER";
    case RouterInputTransitEncryptionKeyType::AUTOMATIC:
      return "AUTOMATIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterInputTransitEncryptionKeyTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
