/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/model/IdentityFilterKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {
namespace IdentityFilterKeyMapper {

static const int IDENTITY_NAME_CONTAINS_HASH = HashingUtils::HashString("IDENTITY_NAME_CONTAINS");
static const int IDENTITY_TYPE_HASH = HashingUtils::HashString("IDENTITY_TYPE");
static const int VERIFICATION_STATUS_HASH = HashingUtils::HashString("VERIFICATION_STATUS");

IdentityFilterKey GetIdentityFilterKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IDENTITY_NAME_CONTAINS_HASH) {
    return IdentityFilterKey::IDENTITY_NAME_CONTAINS;
  } else if (hashCode == IDENTITY_TYPE_HASH) {
    return IdentityFilterKey::IDENTITY_TYPE;
  } else if (hashCode == VERIFICATION_STATUS_HASH) {
    return IdentityFilterKey::VERIFICATION_STATUS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IdentityFilterKey>(hashCode);
  }

  return IdentityFilterKey::NOT_SET;
}

Aws::String GetNameForIdentityFilterKey(IdentityFilterKey enumValue) {
  switch (enumValue) {
    case IdentityFilterKey::NOT_SET:
      return {};
    case IdentityFilterKey::IDENTITY_NAME_CONTAINS:
      return "IDENTITY_NAME_CONTAINS";
    case IdentityFilterKey::IDENTITY_TYPE:
      return "IDENTITY_TYPE";
    case IdentityFilterKey::VERIFICATION_STATUS:
      return "VERIFICATION_STATUS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IdentityFilterKeyMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
