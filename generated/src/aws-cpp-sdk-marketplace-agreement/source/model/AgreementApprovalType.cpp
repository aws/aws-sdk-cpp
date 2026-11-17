/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/AgreementApprovalType.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace AgreementApprovalTypeMapper {

static const int BUYER_AGREEMENT_APPROVAL_HASH = HashingUtils::HashString("BUYER_AGREEMENT_APPROVAL");

AgreementApprovalType GetAgreementApprovalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BUYER_AGREEMENT_APPROVAL_HASH) {
    return AgreementApprovalType::BUYER_AGREEMENT_APPROVAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgreementApprovalType>(hashCode);
  }

  return AgreementApprovalType::NOT_SET;
}

Aws::String GetNameForAgreementApprovalType(AgreementApprovalType enumValue) {
  switch (enumValue) {
    case AgreementApprovalType::NOT_SET:
      return {};
    case AgreementApprovalType::BUYER_AGREEMENT_APPROVAL:
      return "BUYER_AGREEMENT_APPROVAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgreementApprovalTypeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
