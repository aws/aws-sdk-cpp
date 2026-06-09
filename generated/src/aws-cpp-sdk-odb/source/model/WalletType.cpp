/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/WalletType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace WalletTypeMapper {

static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");
static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");

WalletType GetWalletTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REGIONAL_HASH) {
    return WalletType::REGIONAL;
  } else if (hashCode == INSTANCE_HASH) {
    return WalletType::INSTANCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WalletType>(hashCode);
  }

  return WalletType::NOT_SET;
}

Aws::String GetNameForWalletType(WalletType enumValue) {
  switch (enumValue) {
    case WalletType::NOT_SET:
      return {};
    case WalletType::REGIONAL:
      return "REGIONAL";
    case WalletType::INSTANCE:
      return "INSTANCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WalletTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
