/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ScopeDecision.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ScopeDecisionMapper {

static const int IN_SCOPE_HASH = HashingUtils::HashString("IN_SCOPE");
static const int SCOPED_OUT_HASH = HashingUtils::HashString("SCOPED_OUT");
static const int SCOPE_CONFLICT_HASH = HashingUtils::HashString("SCOPE_CONFLICT");

ScopeDecision GetScopeDecisionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_SCOPE_HASH) {
    return ScopeDecision::IN_SCOPE;
  } else if (hashCode == SCOPED_OUT_HASH) {
    return ScopeDecision::SCOPED_OUT;
  } else if (hashCode == SCOPE_CONFLICT_HASH) {
    return ScopeDecision::SCOPE_CONFLICT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScopeDecision>(hashCode);
  }

  return ScopeDecision::NOT_SET;
}

Aws::String GetNameForScopeDecision(ScopeDecision enumValue) {
  switch (enumValue) {
    case ScopeDecision::NOT_SET:
      return {};
    case ScopeDecision::IN_SCOPE:
      return "IN_SCOPE";
    case ScopeDecision::SCOPED_OUT:
      return "SCOPED_OUT";
    case ScopeDecision::SCOPE_CONFLICT:
      return "SCOPE_CONFLICT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScopeDecisionMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
