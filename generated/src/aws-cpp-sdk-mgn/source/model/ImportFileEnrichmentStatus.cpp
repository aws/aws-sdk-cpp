/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/ImportFileEnrichmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace ImportFileEnrichmentStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int STARTED_HASH = HashingUtils::HashString("STARTED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int SUCCEEDED_WITH_WARNINGS_HASH = HashingUtils::HashString("SUCCEEDED_WITH_WARNINGS");

ImportFileEnrichmentStatus GetImportFileEnrichmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ImportFileEnrichmentStatus::PENDING;
  } else if (hashCode == STARTED_HASH) {
    return ImportFileEnrichmentStatus::STARTED;
  } else if (hashCode == FAILED_HASH) {
    return ImportFileEnrichmentStatus::FAILED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ImportFileEnrichmentStatus::SUCCEEDED;
  } else if (hashCode == SUCCEEDED_WITH_WARNINGS_HASH) {
    return ImportFileEnrichmentStatus::SUCCEEDED_WITH_WARNINGS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImportFileEnrichmentStatus>(hashCode);
  }

  return ImportFileEnrichmentStatus::NOT_SET;
}

Aws::String GetNameForImportFileEnrichmentStatus(ImportFileEnrichmentStatus enumValue) {
  switch (enumValue) {
    case ImportFileEnrichmentStatus::NOT_SET:
      return {};
    case ImportFileEnrichmentStatus::PENDING:
      return "PENDING";
    case ImportFileEnrichmentStatus::STARTED:
      return "STARTED";
    case ImportFileEnrichmentStatus::FAILED:
      return "FAILED";
    case ImportFileEnrichmentStatus::SUCCEEDED:
      return "SUCCEEDED";
    case ImportFileEnrichmentStatus::SUCCEEDED_WITH_WARNINGS:
      return "SUCCEEDED_WITH_WARNINGS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImportFileEnrichmentStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
