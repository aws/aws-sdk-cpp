/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/vpc-lattice/model/PayerResponsibilityPayer.h>

using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {
namespace PayerResponsibilityPayerMapper {

static const int VpcEndpointAccount_HASH = HashingUtils::HashString("VpcEndpointAccount");
static const int ResourceGatewayAccount_HASH = HashingUtils::HashString("ResourceGatewayAccount");

PayerResponsibilityPayer GetPayerResponsibilityPayerForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VpcEndpointAccount_HASH) {
    return PayerResponsibilityPayer::VpcEndpointAccount;
  } else if (hashCode == ResourceGatewayAccount_HASH) {
    return PayerResponsibilityPayer::ResourceGatewayAccount;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PayerResponsibilityPayer>(hashCode);
  }

  return PayerResponsibilityPayer::NOT_SET;
}

Aws::String GetNameForPayerResponsibilityPayer(PayerResponsibilityPayer enumValue) {
  switch (enumValue) {
    case PayerResponsibilityPayer::NOT_SET:
      return {};
    case PayerResponsibilityPayer::VpcEndpointAccount:
      return "VpcEndpointAccount";
    case PayerResponsibilityPayer::ResourceGatewayAccount:
      return "ResourceGatewayAccount";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PayerResponsibilityPayerMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
