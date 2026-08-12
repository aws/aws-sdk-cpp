/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/ContextType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace ContextTypeMapper {

static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");

ContextType GetContextTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPLICATION_HASH) {
    return ContextType::APPLICATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContextType>(hashCode);
  }

  return ContextType::NOT_SET;
}

Aws::String GetNameForContextType(ContextType enumValue) {
  switch (enumValue) {
    case ContextType::NOT_SET:
      return {};
    case ContextType::APPLICATION:
      return "APPLICATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContextTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
