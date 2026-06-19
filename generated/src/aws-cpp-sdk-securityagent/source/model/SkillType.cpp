/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/SkillType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace SkillTypeMapper {

static const int FINDING_PERSONALIZATION_HASH = HashingUtils::HashString("FINDING_PERSONALIZATION");
static const int LOGIN_OPTIMIZATION_HASH = HashingUtils::HashString("LOGIN_OPTIMIZATION");

SkillType GetSkillTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FINDING_PERSONALIZATION_HASH) {
    return SkillType::FINDING_PERSONALIZATION;
  } else if (hashCode == LOGIN_OPTIMIZATION_HASH) {
    return SkillType::LOGIN_OPTIMIZATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SkillType>(hashCode);
  }

  return SkillType::NOT_SET;
}

Aws::String GetNameForSkillType(SkillType enumValue) {
  switch (enumValue) {
    case SkillType::NOT_SET:
      return {};
    case SkillType::FINDING_PERSONALIZATION:
      return "FINDING_PERSONALIZATION";
    case SkillType::LOGIN_OPTIMIZATION:
      return "LOGIN_OPTIMIZATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SkillTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
