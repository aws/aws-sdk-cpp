/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/ResourceNotFoundExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace ResourceNotFoundExceptionReasonMapper {

static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");

ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESOURCE_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::RESOURCE_NOT_FOUND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceNotFoundExceptionReason>(hashCode);
  }

  return ResourceNotFoundExceptionReason::NOT_SET;
}

Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason enumValue) {
  switch (enumValue) {
    case ResourceNotFoundExceptionReason::NOT_SET:
      return {};
    case ResourceNotFoundExceptionReason::RESOURCE_NOT_FOUND:
      return "RESOURCE_NOT_FOUND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceNotFoundExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
