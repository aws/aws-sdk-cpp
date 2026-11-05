/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/MigrationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace MigrationStateMapper {

static const int new__HASH = HashingUtils::HashString("new");
static const int planning_HASH = HashingUtils::HashString("planning");
static const int pendingReview_HASH = HashingUtils::HashString("pendingReview");
static const int queued_HASH = HashingUtils::HashString("queued");
static const int migrating_HASH = HashingUtils::HashString("migrating");
static const int succeeded_HASH = HashingUtils::HashString("succeeded");
static const int failed_HASH = HashingUtils::HashString("failed");
static const int cancelling_HASH = HashingUtils::HashString("cancelling");
static const int cancelled_HASH = HashingUtils::HashString("cancelled");

MigrationState GetMigrationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == new__HASH) {
    return MigrationState::new_;
  } else if (hashCode == planning_HASH) {
    return MigrationState::planning;
  } else if (hashCode == pendingReview_HASH) {
    return MigrationState::pendingReview;
  } else if (hashCode == queued_HASH) {
    return MigrationState::queued;
  } else if (hashCode == migrating_HASH) {
    return MigrationState::migrating;
  } else if (hashCode == succeeded_HASH) {
    return MigrationState::succeeded;
  } else if (hashCode == failed_HASH) {
    return MigrationState::failed;
  } else if (hashCode == cancelling_HASH) {
    return MigrationState::cancelling;
  } else if (hashCode == cancelled_HASH) {
    return MigrationState::cancelled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MigrationState>(hashCode);
  }

  return MigrationState::NOT_SET;
}

Aws::String GetNameForMigrationState(MigrationState enumValue) {
  switch (enumValue) {
    case MigrationState::NOT_SET:
      return {};
    case MigrationState::new_:
      return "new";
    case MigrationState::planning:
      return "planning";
    case MigrationState::pendingReview:
      return "pendingReview";
    case MigrationState::queued:
      return "queued";
    case MigrationState::migrating:
      return "migrating";
    case MigrationState::succeeded:
      return "succeeded";
    case MigrationState::failed:
      return "failed";
    case MigrationState::cancelling:
      return "cancelling";
    case MigrationState::cancelled:
      return "cancelled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MigrationStateMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
