/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/CriticalitySourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace CriticalitySourceTypeMapper {

static const int AutomationRule_HASH = HashingUtils::HashString("AutomationRule");
static const int ResourceName_HASH = HashingUtils::HashString("ResourceName");
static const int TagInference_HASH = HashingUtils::HashString("TagInference");

CriticalitySourceType GetCriticalitySourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AutomationRule_HASH) {
    return CriticalitySourceType::AutomationRule;
  } else if (hashCode == ResourceName_HASH) {
    return CriticalitySourceType::ResourceName;
  } else if (hashCode == TagInference_HASH) {
    return CriticalitySourceType::TagInference;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CriticalitySourceType>(hashCode);
  }

  return CriticalitySourceType::NOT_SET;
}

Aws::String GetNameForCriticalitySourceType(CriticalitySourceType enumValue) {
  switch (enumValue) {
    case CriticalitySourceType::NOT_SET:
      return {};
    case CriticalitySourceType::AutomationRule:
      return "AutomationRule";
    case CriticalitySourceType::ResourceName:
      return "ResourceName";
    case CriticalitySourceType::TagInference:
      return "TagInference";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CriticalitySourceTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
