/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchmemory/model/BatchGetEventErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
namespace BatchGetEventErrorCodeMapper {

static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
static const int THROTTLING_HASH = HashingUtils::HashString("THROTTLING");
static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("INTERNAL_SERVER");

BatchGetEventErrorCode GetBatchGetEventErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESOURCE_NOT_FOUND_HASH) {
    return BatchGetEventErrorCode::RESOURCE_NOT_FOUND;
  } else if (hashCode == THROTTLING_HASH) {
    return BatchGetEventErrorCode::THROTTLING;
  } else if (hashCode == ACCESS_DENIED_HASH) {
    return BatchGetEventErrorCode::ACCESS_DENIED;
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return BatchGetEventErrorCode::INTERNAL_SERVER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchGetEventErrorCode>(hashCode);
  }

  return BatchGetEventErrorCode::NOT_SET;
}

Aws::String GetNameForBatchGetEventErrorCode(BatchGetEventErrorCode enumValue) {
  switch (enumValue) {
    case BatchGetEventErrorCode::NOT_SET:
      return {};
    case BatchGetEventErrorCode::RESOURCE_NOT_FOUND:
      return "RESOURCE_NOT_FOUND";
    case BatchGetEventErrorCode::THROTTLING:
      return "THROTTLING";
    case BatchGetEventErrorCode::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case BatchGetEventErrorCode::INTERNAL_SERVER:
      return "INTERNAL_SERVER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchGetEventErrorCodeMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
