/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/VerificationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace VerificationTypeMapper {

static const int BUSINESS_VERIFICATION_HASH = HashingUtils::HashString("BUSINESS_VERIFICATION");
static const int REGISTRANT_VERIFICATION_HASH = HashingUtils::HashString("REGISTRANT_VERIFICATION");

VerificationType GetVerificationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BUSINESS_VERIFICATION_HASH) {
    return VerificationType::BUSINESS_VERIFICATION;
  } else if (hashCode == REGISTRANT_VERIFICATION_HASH) {
    return VerificationType::REGISTRANT_VERIFICATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VerificationType>(hashCode);
  }

  return VerificationType::NOT_SET;
}

Aws::String GetNameForVerificationType(VerificationType enumValue) {
  switch (enumValue) {
    case VerificationType::NOT_SET:
      return {};
    case VerificationType::BUSINESS_VERIFICATION:
      return "BUSINESS_VERIFICATION";
    case VerificationType::REGISTRANT_VERIFICATION:
      return "REGISTRANT_VERIFICATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VerificationTypeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
