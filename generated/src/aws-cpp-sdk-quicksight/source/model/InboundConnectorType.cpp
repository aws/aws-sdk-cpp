/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/InboundConnectorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace InboundConnectorTypeMapper {

static const int QUICK_DESKTOP_HASH = HashingUtils::HashString("QUICK_DESKTOP");

InboundConnectorType GetInboundConnectorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUICK_DESKTOP_HASH) {
    return InboundConnectorType::QUICK_DESKTOP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InboundConnectorType>(hashCode);
  }

  return InboundConnectorType::NOT_SET;
}

Aws::String GetNameForInboundConnectorType(InboundConnectorType enumValue) {
  switch (enumValue) {
    case InboundConnectorType::NOT_SET:
      return {};
    case InboundConnectorType::QUICK_DESKTOP:
      return "QUICK_DESKTOP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InboundConnectorTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
