/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/TableRecordExpirationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace TableRecordExpirationStatusMapper {

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

TableRecordExpirationStatus GetTableRecordExpirationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabled_HASH) {
    return TableRecordExpirationStatus::enabled;
  } else if (hashCode == disabled_HASH) {
    return TableRecordExpirationStatus::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TableRecordExpirationStatus>(hashCode);
  }

  return TableRecordExpirationStatus::NOT_SET;
}

Aws::String GetNameForTableRecordExpirationStatus(TableRecordExpirationStatus enumValue) {
  switch (enumValue) {
    case TableRecordExpirationStatus::NOT_SET:
      return {};
    case TableRecordExpirationStatus::enabled:
      return "enabled";
    case TableRecordExpirationStatus::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TableRecordExpirationStatusMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
