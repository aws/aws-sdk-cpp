/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/vpc-lattice/model/PayerResponsibilityScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {
namespace PayerResponsibilityScopeMapper {

static const int ResourceGatewayCharges_HASH = HashingUtils::HashString("ResourceGatewayCharges");

PayerResponsibilityScope GetPayerResponsibilityScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ResourceGatewayCharges_HASH) {
    return PayerResponsibilityScope::ResourceGatewayCharges;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PayerResponsibilityScope>(hashCode);
  }

  return PayerResponsibilityScope::NOT_SET;
}

Aws::String GetNameForPayerResponsibilityScope(PayerResponsibilityScope enumValue) {
  switch (enumValue) {
    case PayerResponsibilityScope::NOT_SET:
      return {};
    case PayerResponsibilityScope::ResourceGatewayCharges:
      return "ResourceGatewayCharges";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PayerResponsibilityScopeMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
