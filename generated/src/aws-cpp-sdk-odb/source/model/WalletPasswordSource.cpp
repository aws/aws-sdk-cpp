/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/WalletPasswordSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace WalletPasswordSourceMapper {

static const int CUSTOMER_MANAGED_AWS_SECRET_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_AWS_SECRET");
static const int API_REQUEST_PARAMETER_HASH = HashingUtils::HashString("API_REQUEST_PARAMETER");

WalletPasswordSource GetWalletPasswordSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_MANAGED_AWS_SECRET_HASH) {
    return WalletPasswordSource::CUSTOMER_MANAGED_AWS_SECRET;
  } else if (hashCode == API_REQUEST_PARAMETER_HASH) {
    return WalletPasswordSource::API_REQUEST_PARAMETER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WalletPasswordSource>(hashCode);
  }

  return WalletPasswordSource::NOT_SET;
}

Aws::String GetNameForWalletPasswordSource(WalletPasswordSource enumValue) {
  switch (enumValue) {
    case WalletPasswordSource::NOT_SET:
      return {};
    case WalletPasswordSource::CUSTOMER_MANAGED_AWS_SECRET:
      return "CUSTOMER_MANAGED_AWS_SECRET";
    case WalletPasswordSource::API_REQUEST_PARAMETER:
      return "API_REQUEST_PARAMETER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WalletPasswordSourceMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
