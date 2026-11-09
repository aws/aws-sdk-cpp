/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/MigrationFailureCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace MigrationFailureCodeMapper {

static const int rolePermissions_HASH = HashingUtils::HashString("rolePermissions");
static const int sourcePermissions_HASH = HashingUtils::HashString("sourcePermissions");
static const int destinationPermissions_HASH = HashingUtils::HashString("destinationPermissions");
static const int resourceNotFound_HASH = HashingUtils::HashString("resourceNotFound");
static const int sourceNotSupported_HASH = HashingUtils::HashString("sourceNotSupported");
static const int objectMigrationReport_HASH = HashingUtils::HashString("objectMigrationReport");
static const int objectCompatibilityReport_HASH = HashingUtils::HashString("objectCompatibilityReport");
static const int tableCompatibilityReport_HASH = HashingUtils::HashString("tableCompatibilityReport");
static const int internalError_HASH = HashingUtils::HashString("internalError");
static const int reportBucketNotSupported_HASH = HashingUtils::HashString("reportBucketNotSupported");

MigrationFailureCode GetMigrationFailureCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == rolePermissions_HASH) {
    return MigrationFailureCode::rolePermissions;
  } else if (hashCode == sourcePermissions_HASH) {
    return MigrationFailureCode::sourcePermissions;
  } else if (hashCode == destinationPermissions_HASH) {
    return MigrationFailureCode::destinationPermissions;
  } else if (hashCode == resourceNotFound_HASH) {
    return MigrationFailureCode::resourceNotFound;
  } else if (hashCode == sourceNotSupported_HASH) {
    return MigrationFailureCode::sourceNotSupported;
  } else if (hashCode == objectMigrationReport_HASH) {
    return MigrationFailureCode::objectMigrationReport;
  } else if (hashCode == objectCompatibilityReport_HASH) {
    return MigrationFailureCode::objectCompatibilityReport;
  } else if (hashCode == tableCompatibilityReport_HASH) {
    return MigrationFailureCode::tableCompatibilityReport;
  } else if (hashCode == internalError_HASH) {
    return MigrationFailureCode::internalError;
  } else if (hashCode == reportBucketNotSupported_HASH) {
    return MigrationFailureCode::reportBucketNotSupported;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MigrationFailureCode>(hashCode);
  }

  return MigrationFailureCode::NOT_SET;
}

Aws::String GetNameForMigrationFailureCode(MigrationFailureCode enumValue) {
  switch (enumValue) {
    case MigrationFailureCode::NOT_SET:
      return {};
    case MigrationFailureCode::rolePermissions:
      return "rolePermissions";
    case MigrationFailureCode::sourcePermissions:
      return "sourcePermissions";
    case MigrationFailureCode::destinationPermissions:
      return "destinationPermissions";
    case MigrationFailureCode::resourceNotFound:
      return "resourceNotFound";
    case MigrationFailureCode::sourceNotSupported:
      return "sourceNotSupported";
    case MigrationFailureCode::objectMigrationReport:
      return "objectMigrationReport";
    case MigrationFailureCode::objectCompatibilityReport:
      return "objectCompatibilityReport";
    case MigrationFailureCode::tableCompatibilityReport:
      return "tableCompatibilityReport";
    case MigrationFailureCode::internalError:
      return "internalError";
    case MigrationFailureCode::reportBucketNotSupported:
      return "reportBucketNotSupported";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MigrationFailureCodeMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
