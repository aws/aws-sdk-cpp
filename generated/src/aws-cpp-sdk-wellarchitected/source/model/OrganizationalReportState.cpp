/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/OrganizationalReportState.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace OrganizationalReportStateMapper {

static const int DISCOVERING_HASH = HashingUtils::HashString("DISCOVERING");
static const int SNAPSHOTTING_HASH = HashingUtils::HashString("SNAPSHOTTING");
static const int AGGREGATING_HASH = HashingUtils::HashString("AGGREGATING");
static const int COMPRESSING_HASH = HashingUtils::HashString("COMPRESSING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

OrganizationalReportState GetOrganizationalReportStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISCOVERING_HASH) {
    return OrganizationalReportState::DISCOVERING;
  } else if (hashCode == SNAPSHOTTING_HASH) {
    return OrganizationalReportState::SNAPSHOTTING;
  } else if (hashCode == AGGREGATING_HASH) {
    return OrganizationalReportState::AGGREGATING;
  } else if (hashCode == COMPRESSING_HASH) {
    return OrganizationalReportState::COMPRESSING;
  } else if (hashCode == COMPLETED_HASH) {
    return OrganizationalReportState::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return OrganizationalReportState::FAILED;
  } else if (hashCode == DELETING_HASH) {
    return OrganizationalReportState::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationalReportState>(hashCode);
  }

  return OrganizationalReportState::NOT_SET;
}

Aws::String GetNameForOrganizationalReportState(OrganizationalReportState enumValue) {
  switch (enumValue) {
    case OrganizationalReportState::NOT_SET:
      return {};
    case OrganizationalReportState::DISCOVERING:
      return "DISCOVERING";
    case OrganizationalReportState::SNAPSHOTTING:
      return "SNAPSHOTTING";
    case OrganizationalReportState::AGGREGATING:
      return "AGGREGATING";
    case OrganizationalReportState::COMPRESSING:
      return "COMPRESSING";
    case OrganizationalReportState::COMPLETED:
      return "COMPLETED";
    case OrganizationalReportState::FAILED:
      return "FAILED";
    case OrganizationalReportState::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationalReportStateMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
