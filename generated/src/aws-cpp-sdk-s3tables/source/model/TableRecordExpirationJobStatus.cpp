/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/TableRecordExpirationJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace TableRecordExpirationJobStatusMapper {

static const int NotYetRun_HASH = HashingUtils::HashString("NotYetRun");
static const int Successful_HASH = HashingUtils::HashString("Successful");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Disabled_HASH = HashingUtils::HashString("Disabled");

TableRecordExpirationJobStatus GetTableRecordExpirationJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NotYetRun_HASH) {
    return TableRecordExpirationJobStatus::NotYetRun;
  } else if (hashCode == Successful_HASH) {
    return TableRecordExpirationJobStatus::Successful;
  } else if (hashCode == Failed_HASH) {
    return TableRecordExpirationJobStatus::Failed;
  } else if (hashCode == Disabled_HASH) {
    return TableRecordExpirationJobStatus::Disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TableRecordExpirationJobStatus>(hashCode);
  }

  return TableRecordExpirationJobStatus::NOT_SET;
}

Aws::String GetNameForTableRecordExpirationJobStatus(TableRecordExpirationJobStatus enumValue) {
  switch (enumValue) {
    case TableRecordExpirationJobStatus::NOT_SET:
      return {};
    case TableRecordExpirationJobStatus::NotYetRun:
      return "NotYetRun";
    case TableRecordExpirationJobStatus::Successful:
      return "Successful";
    case TableRecordExpirationJobStatus::Failed:
      return "Failed";
    case TableRecordExpirationJobStatus::Disabled:
      return "Disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TableRecordExpirationJobStatusMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
