/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/CapabilityFailureReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace CapabilityFailureReasonMapper {

static const int KMS_KEY_INSUFFICIENT_PERMISSION_HASH = HashingUtils::HashString("KMS_KEY_INSUFFICIENT_PERMISSION");

CapabilityFailureReason GetCapabilityFailureReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KMS_KEY_INSUFFICIENT_PERMISSION_HASH) {
    return CapabilityFailureReason::KMS_KEY_INSUFFICIENT_PERMISSION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapabilityFailureReason>(hashCode);
  }

  return CapabilityFailureReason::NOT_SET;
}

Aws::String GetNameForCapabilityFailureReason(CapabilityFailureReason enumValue) {
  switch (enumValue) {
    case CapabilityFailureReason::NOT_SET:
      return {};
    case CapabilityFailureReason::KMS_KEY_INSUFFICIENT_PERMISSION:
      return "KMS_KEY_INSUFFICIENT_PERMISSION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapabilityFailureReasonMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
