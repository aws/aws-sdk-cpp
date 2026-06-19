/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/GitLabTokenType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace GitLabTokenTypeMapper {

static const int PERSONAL_HASH = HashingUtils::HashString("PERSONAL");
static const int GROUP_HASH = HashingUtils::HashString("GROUP");

GitLabTokenType GetGitLabTokenTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PERSONAL_HASH) {
    return GitLabTokenType::PERSONAL;
  } else if (hashCode == GROUP_HASH) {
    return GitLabTokenType::GROUP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GitLabTokenType>(hashCode);
  }

  return GitLabTokenType::NOT_SET;
}

Aws::String GetNameForGitLabTokenType(GitLabTokenType enumValue) {
  switch (enumValue) {
    case GitLabTokenType::NOT_SET:
      return {};
    case GitLabTokenType::PERSONAL:
      return "PERSONAL";
    case GitLabTokenType::GROUP:
      return "GROUP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GitLabTokenTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
