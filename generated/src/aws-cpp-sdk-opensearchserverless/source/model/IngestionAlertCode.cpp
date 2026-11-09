/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/model/IngestionAlertCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
namespace IngestionAlertCodeMapper {

static const int SOURCE_ACCESS_DENIED_HASH = HashingUtils::HashString("SOURCE_ACCESS_DENIED");
static const int SOURCE_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("SOURCE_RESOURCE_NOT_FOUND");
static const int DESTINATION_ACCESS_DENIED_HASH = HashingUtils::HashString("DESTINATION_ACCESS_DENIED");
static const int DESTINATION_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("DESTINATION_RESOURCE_NOT_FOUND");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");

IngestionAlertCode GetIngestionAlertCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SOURCE_ACCESS_DENIED_HASH) {
    return IngestionAlertCode::SOURCE_ACCESS_DENIED;
  } else if (hashCode == SOURCE_RESOURCE_NOT_FOUND_HASH) {
    return IngestionAlertCode::SOURCE_RESOURCE_NOT_FOUND;
  } else if (hashCode == DESTINATION_ACCESS_DENIED_HASH) {
    return IngestionAlertCode::DESTINATION_ACCESS_DENIED;
  } else if (hashCode == DESTINATION_RESOURCE_NOT_FOUND_HASH) {
    return IngestionAlertCode::DESTINATION_RESOURCE_NOT_FOUND;
  } else if (hashCode == INTERNAL_SERVER_ERROR_HASH) {
    return IngestionAlertCode::INTERNAL_SERVER_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IngestionAlertCode>(hashCode);
  }

  return IngestionAlertCode::NOT_SET;
}

Aws::String GetNameForIngestionAlertCode(IngestionAlertCode enumValue) {
  switch (enumValue) {
    case IngestionAlertCode::NOT_SET:
      return {};
    case IngestionAlertCode::SOURCE_ACCESS_DENIED:
      return "SOURCE_ACCESS_DENIED";
    case IngestionAlertCode::SOURCE_RESOURCE_NOT_FOUND:
      return "SOURCE_RESOURCE_NOT_FOUND";
    case IngestionAlertCode::DESTINATION_ACCESS_DENIED:
      return "DESTINATION_ACCESS_DENIED";
    case IngestionAlertCode::DESTINATION_RESOURCE_NOT_FOUND:
      return "DESTINATION_RESOURCE_NOT_FOUND";
    case IngestionAlertCode::INTERNAL_SERVER_ERROR:
      return "INTERNAL_SERVER_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IngestionAlertCodeMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
