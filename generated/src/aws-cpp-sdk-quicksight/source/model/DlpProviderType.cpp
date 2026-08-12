/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DlpProviderType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DlpProviderTypeMapper {

static const int MICROSOFT_PURVIEW_HASH = HashingUtils::HashString("MICROSOFT_PURVIEW");

DlpProviderType GetDlpProviderTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MICROSOFT_PURVIEW_HASH) {
    return DlpProviderType::MICROSOFT_PURVIEW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DlpProviderType>(hashCode);
  }

  return DlpProviderType::NOT_SET;
}

Aws::String GetNameForDlpProviderType(DlpProviderType enumValue) {
  switch (enumValue) {
    case DlpProviderType::NOT_SET:
      return {};
    case DlpProviderType::MICROSOFT_PURVIEW:
      return "MICROSOFT_PURVIEW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DlpProviderTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
