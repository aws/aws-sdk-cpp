/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/model/IngestionFailureCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
namespace IngestionFailureCodeMapper {

static const int SOURCE_ACCESS_DENIED_HASH = HashingUtils::HashString("SOURCE_ACCESS_DENIED");
static const int SOURCE_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("SOURCE_RESOURCE_NOT_FOUND");
static const int DESTINATION_ACCESS_DENIED_HASH = HashingUtils::HashString("DESTINATION_ACCESS_DENIED");
static const int DESTINATION_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("DESTINATION_RESOURCE_NOT_FOUND");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");

IngestionFailureCode GetIngestionFailureCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SOURCE_ACCESS_DENIED_HASH) {
    return IngestionFailureCode::SOURCE_ACCESS_DENIED;
  } else if (hashCode == SOURCE_RESOURCE_NOT_FOUND_HASH) {
    return IngestionFailureCode::SOURCE_RESOURCE_NOT_FOUND;
  } else if (hashCode == DESTINATION_ACCESS_DENIED_HASH) {
    return IngestionFailureCode::DESTINATION_ACCESS_DENIED;
  } else if (hashCode == DESTINATION_RESOURCE_NOT_FOUND_HASH) {
    return IngestionFailureCode::DESTINATION_RESOURCE_NOT_FOUND;
  } else if (hashCode == INTERNAL_SERVER_ERROR_HASH) {
    return IngestionFailureCode::INTERNAL_SERVER_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IngestionFailureCode>(hashCode);
  }

  return IngestionFailureCode::NOT_SET;
}

Aws::String GetNameForIngestionFailureCode(IngestionFailureCode enumValue) {
  switch (enumValue) {
    case IngestionFailureCode::NOT_SET:
      return {};
    case IngestionFailureCode::SOURCE_ACCESS_DENIED:
      return "SOURCE_ACCESS_DENIED";
    case IngestionFailureCode::SOURCE_RESOURCE_NOT_FOUND:
      return "SOURCE_RESOURCE_NOT_FOUND";
    case IngestionFailureCode::DESTINATION_ACCESS_DENIED:
      return "DESTINATION_ACCESS_DENIED";
    case IngestionFailureCode::DESTINATION_RESOURCE_NOT_FOUND:
      return "DESTINATION_RESOURCE_NOT_FOUND";
    case IngestionFailureCode::INTERNAL_SERVER_ERROR:
      return "INTERNAL_SERVER_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IngestionFailureCodeMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
