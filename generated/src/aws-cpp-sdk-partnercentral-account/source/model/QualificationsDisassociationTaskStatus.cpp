/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/QualificationsDisassociationTaskStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace QualificationsDisassociationTaskStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");

QualificationsDisassociationTaskStatus GetQualificationsDisassociationTaskStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return QualificationsDisassociationTaskStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return QualificationsDisassociationTaskStatus::SUCCEEDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QualificationsDisassociationTaskStatus>(hashCode);
  }

  return QualificationsDisassociationTaskStatus::NOT_SET;
}

Aws::String GetNameForQualificationsDisassociationTaskStatus(QualificationsDisassociationTaskStatus enumValue) {
  switch (enumValue) {
    case QualificationsDisassociationTaskStatus::NOT_SET:
      return {};
    case QualificationsDisassociationTaskStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case QualificationsDisassociationTaskStatus::SUCCEEDED:
      return "SUCCEEDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QualificationsDisassociationTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
