/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/AgreementApprovalPartyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace AgreementApprovalPartyTypeMapper {

static const int REQUESTER_HASH = HashingUtils::HashString("REQUESTER");
static const int AWS_ORGANIZATION_ADMIN_HASH = HashingUtils::HashString("AWS_ORGANIZATION_ADMIN");

AgreementApprovalPartyType GetAgreementApprovalPartyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUESTER_HASH) {
    return AgreementApprovalPartyType::REQUESTER;
  } else if (hashCode == AWS_ORGANIZATION_ADMIN_HASH) {
    return AgreementApprovalPartyType::AWS_ORGANIZATION_ADMIN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgreementApprovalPartyType>(hashCode);
  }

  return AgreementApprovalPartyType::NOT_SET;
}

Aws::String GetNameForAgreementApprovalPartyType(AgreementApprovalPartyType enumValue) {
  switch (enumValue) {
    case AgreementApprovalPartyType::NOT_SET:
      return {};
    case AgreementApprovalPartyType::REQUESTER:
      return "REQUESTER";
    case AgreementApprovalPartyType::AWS_ORGANIZATION_ADMIN:
      return "AWS_ORGANIZATION_ADMIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgreementApprovalPartyTypeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
