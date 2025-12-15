/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/service-quotas/model/RequestType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ServiceQuotas {
namespace Model {
namespace RequestTypeMapper {

static const int AutomaticManagement_HASH = HashingUtils::HashString("AutomaticManagement");

RequestType GetRequestTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AutomaticManagement_HASH) {
    return RequestType::AutomaticManagement;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RequestType>(hashCode);
  }

  return RequestType::NOT_SET;
}

Aws::String GetNameForRequestType(RequestType enumValue) {
  switch (enumValue) {
    case RequestType::NOT_SET:
      return {};
    case RequestType::AutomaticManagement:
      return "AutomaticManagement";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RequestTypeMapper
}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
