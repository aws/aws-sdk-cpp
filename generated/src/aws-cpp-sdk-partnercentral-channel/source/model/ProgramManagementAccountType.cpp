/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ProgramManagementAccountTypeMapper {

static const int RESALE_BILLING_TRANSFER_HASH = HashingUtils::HashString("RESALE_BILLING_TRANSFER");
static const int MANAGED_SERVICES_HASH = HashingUtils::HashString("MANAGED_SERVICES");

ProgramManagementAccountType GetProgramManagementAccountTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESALE_BILLING_TRANSFER_HASH) {
    return ProgramManagementAccountType::RESALE_BILLING_TRANSFER;
  } else if (hashCode == MANAGED_SERVICES_HASH) {
    return ProgramManagementAccountType::MANAGED_SERVICES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProgramManagementAccountType>(hashCode);
  }

  return ProgramManagementAccountType::NOT_SET;
}

Aws::String GetNameForProgramManagementAccountType(ProgramManagementAccountType enumValue) {
  switch (enumValue) {
    case ProgramManagementAccountType::NOT_SET:
      return {};
    case ProgramManagementAccountType::RESALE_BILLING_TRANSFER:
      return "RESALE_BILLING_TRANSFER";
    case ProgramManagementAccountType::MANAGED_SERVICES:
      return "MANAGED_SERVICES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProgramManagementAccountTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
