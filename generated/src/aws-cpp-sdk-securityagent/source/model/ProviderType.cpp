/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ProviderType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ProviderTypeMapper {

static const int SOURCE_CODE_HASH = HashingUtils::HashString("SOURCE_CODE");
static const int DOCUMENTATION_HASH = HashingUtils::HashString("DOCUMENTATION");
static const int ISSUE_TRACKING_HASH = HashingUtils::HashString("ISSUE_TRACKING");

ProviderType GetProviderTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SOURCE_CODE_HASH) {
    return ProviderType::SOURCE_CODE;
  } else if (hashCode == DOCUMENTATION_HASH) {
    return ProviderType::DOCUMENTATION;
  } else if (hashCode == ISSUE_TRACKING_HASH) {
    return ProviderType::ISSUE_TRACKING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProviderType>(hashCode);
  }

  return ProviderType::NOT_SET;
}

Aws::String GetNameForProviderType(ProviderType enumValue) {
  switch (enumValue) {
    case ProviderType::NOT_SET:
      return {};
    case ProviderType::SOURCE_CODE:
      return "SOURCE_CODE";
    case ProviderType::DOCUMENTATION:
      return "DOCUMENTATION";
    case ProviderType::ISSUE_TRACKING:
      return "ISSUE_TRACKING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProviderTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
