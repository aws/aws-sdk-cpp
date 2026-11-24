/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/IdpAuthorizingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace IdpAuthorizingTypeMapper {

static const int EXTERNAL_IDP_PUBLIC_AUTH_CODE_HASH = HashingUtils::HashString("EXTERNAL_IDP_PUBLIC_AUTH_CODE");
static const int EXTERNAL_IDP_CONFIDENTIAL_AUTH_CODE_HASH = HashingUtils::HashString("EXTERNAL_IDP_CONFIDENTIAL_AUTH_CODE");
static const int QUICK_MANAGED_AUTH_CODE_HASH = HashingUtils::HashString("QUICK_MANAGED_AUTH_CODE");
static const int IDC_AUTH_CODE_HASH = HashingUtils::HashString("IDC_AUTH_CODE");

IdpAuthorizingType GetIdpAuthorizingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXTERNAL_IDP_PUBLIC_AUTH_CODE_HASH) {
    return IdpAuthorizingType::EXTERNAL_IDP_PUBLIC_AUTH_CODE;
  } else if (hashCode == EXTERNAL_IDP_CONFIDENTIAL_AUTH_CODE_HASH) {
    return IdpAuthorizingType::EXTERNAL_IDP_CONFIDENTIAL_AUTH_CODE;
  } else if (hashCode == QUICK_MANAGED_AUTH_CODE_HASH) {
    return IdpAuthorizingType::QUICK_MANAGED_AUTH_CODE;
  } else if (hashCode == IDC_AUTH_CODE_HASH) {
    return IdpAuthorizingType::IDC_AUTH_CODE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IdpAuthorizingType>(hashCode);
  }

  return IdpAuthorizingType::NOT_SET;
}

Aws::String GetNameForIdpAuthorizingType(IdpAuthorizingType enumValue) {
  switch (enumValue) {
    case IdpAuthorizingType::NOT_SET:
      return {};
    case IdpAuthorizingType::EXTERNAL_IDP_PUBLIC_AUTH_CODE:
      return "EXTERNAL_IDP_PUBLIC_AUTH_CODE";
    case IdpAuthorizingType::EXTERNAL_IDP_CONFIDENTIAL_AUTH_CODE:
      return "EXTERNAL_IDP_CONFIDENTIAL_AUTH_CODE";
    case IdpAuthorizingType::QUICK_MANAGED_AUTH_CODE:
      return "QUICK_MANAGED_AUTH_CODE";
    case IdpAuthorizingType::IDC_AUTH_CODE:
      return "IDC_AUTH_CODE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IdpAuthorizingTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
