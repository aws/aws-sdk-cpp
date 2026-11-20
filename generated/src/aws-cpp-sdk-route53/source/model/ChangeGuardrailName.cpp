/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/ChangeGuardrailName.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace ChangeGuardrailNameMapper {

static const int NS_FORMAT_CHECK_HASH = HashingUtils::HashString("NS_FORMAT_CHECK");
static const int NS_DELEGATION_AUTHORITY_CHECK_HASH = HashingUtils::HashString("NS_DELEGATION_AUTHORITY_CHECK");
static const int NS_OCCLUSION_CHECK_HASH = HashingUtils::HashString("NS_OCCLUSION_CHECK");
static const int ALIAS_TARGET_CHECK_HASH = HashingUtils::HashString("ALIAS_TARGET_CHECK");
static const int ACTIVE_RECORD_CHECK_HASH = HashingUtils::HashString("ACTIVE_RECORD_CHECK");
static const int ACTIVE_DELEGATION_CHECK_HASH = HashingUtils::HashString("ACTIVE_DELEGATION_CHECK");

ChangeGuardrailName GetChangeGuardrailNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NS_FORMAT_CHECK_HASH) {
    return ChangeGuardrailName::NS_FORMAT_CHECK;
  } else if (hashCode == NS_DELEGATION_AUTHORITY_CHECK_HASH) {
    return ChangeGuardrailName::NS_DELEGATION_AUTHORITY_CHECK;
  } else if (hashCode == NS_OCCLUSION_CHECK_HASH) {
    return ChangeGuardrailName::NS_OCCLUSION_CHECK;
  } else if (hashCode == ALIAS_TARGET_CHECK_HASH) {
    return ChangeGuardrailName::ALIAS_TARGET_CHECK;
  } else if (hashCode == ACTIVE_RECORD_CHECK_HASH) {
    return ChangeGuardrailName::ACTIVE_RECORD_CHECK;
  } else if (hashCode == ACTIVE_DELEGATION_CHECK_HASH) {
    return ChangeGuardrailName::ACTIVE_DELEGATION_CHECK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChangeGuardrailName>(hashCode);
  }

  return ChangeGuardrailName::NOT_SET;
}

Aws::String GetNameForChangeGuardrailName(ChangeGuardrailName enumValue) {
  switch (enumValue) {
    case ChangeGuardrailName::NOT_SET:
      return {};
    case ChangeGuardrailName::NS_FORMAT_CHECK:
      return "NS_FORMAT_CHECK";
    case ChangeGuardrailName::NS_DELEGATION_AUTHORITY_CHECK:
      return "NS_DELEGATION_AUTHORITY_CHECK";
    case ChangeGuardrailName::NS_OCCLUSION_CHECK:
      return "NS_OCCLUSION_CHECK";
    case ChangeGuardrailName::ALIAS_TARGET_CHECK:
      return "ALIAS_TARGET_CHECK";
    case ChangeGuardrailName::ACTIVE_RECORD_CHECK:
      return "ACTIVE_RECORD_CHECK";
    case ChangeGuardrailName::ACTIVE_DELEGATION_CHECK:
      return "ACTIVE_DELEGATION_CHECK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChangeGuardrailNameMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
