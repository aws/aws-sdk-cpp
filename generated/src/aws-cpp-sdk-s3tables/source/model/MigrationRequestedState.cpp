/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/MigrationRequestedState.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace MigrationRequestedStateMapper {

static const int queued_HASH = HashingUtils::HashString("queued");
static const int cancelled_HASH = HashingUtils::HashString("cancelled");

MigrationRequestedState GetMigrationRequestedStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == queued_HASH) {
    return MigrationRequestedState::queued;
  } else if (hashCode == cancelled_HASH) {
    return MigrationRequestedState::cancelled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MigrationRequestedState>(hashCode);
  }

  return MigrationRequestedState::NOT_SET;
}

Aws::String GetNameForMigrationRequestedState(MigrationRequestedState enumValue) {
  switch (enumValue) {
    case MigrationRequestedState::NOT_SET:
      return {};
    case MigrationRequestedState::queued:
      return "queued";
    case MigrationRequestedState::cancelled:
      return "cancelled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MigrationRequestedStateMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
