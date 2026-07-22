/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/QualificationsAssociationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace QualificationsAssociationStatusMapper {

static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");
static const int NOT_ASSOCIATED_HASH = HashingUtils::HashString("NOT_ASSOCIATED");

QualificationsAssociationStatus GetQualificationsAssociationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSOCIATED_HASH) {
    return QualificationsAssociationStatus::ASSOCIATED;
  } else if (hashCode == NOT_ASSOCIATED_HASH) {
    return QualificationsAssociationStatus::NOT_ASSOCIATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QualificationsAssociationStatus>(hashCode);
  }

  return QualificationsAssociationStatus::NOT_SET;
}

Aws::String GetNameForQualificationsAssociationStatus(QualificationsAssociationStatus enumValue) {
  switch (enumValue) {
    case QualificationsAssociationStatus::NOT_SET:
      return {};
    case QualificationsAssociationStatus::ASSOCIATED:
      return "ASSOCIATED";
    case QualificationsAssociationStatus::NOT_ASSOCIATED:
      return "NOT_ASSOCIATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QualificationsAssociationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
