/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/QualificationsAssociationTaskStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace QualificationsAssociationTaskStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");

QualificationsAssociationTaskStatus GetQualificationsAssociationTaskStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return QualificationsAssociationTaskStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return QualificationsAssociationTaskStatus::SUCCEEDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QualificationsAssociationTaskStatus>(hashCode);
  }

  return QualificationsAssociationTaskStatus::NOT_SET;
}

Aws::String GetNameForQualificationsAssociationTaskStatus(QualificationsAssociationTaskStatus enumValue) {
  switch (enumValue) {
    case QualificationsAssociationTaskStatus::NOT_SET:
      return {};
    case QualificationsAssociationTaskStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case QualificationsAssociationTaskStatus::SUCCEEDED:
      return "SUCCEEDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QualificationsAssociationTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
