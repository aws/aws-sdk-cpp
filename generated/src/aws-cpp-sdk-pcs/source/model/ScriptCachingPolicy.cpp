/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/model/ScriptCachingPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {
namespace ScriptCachingPolicyMapper {

static const int CACHE_ONCE_HASH = HashingUtils::HashString("CACHE_ONCE");
static const int REFRESH_ON_REBOOT_HASH = HashingUtils::HashString("REFRESH_ON_REBOOT");

ScriptCachingPolicy GetScriptCachingPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CACHE_ONCE_HASH) {
    return ScriptCachingPolicy::CACHE_ONCE;
  } else if (hashCode == REFRESH_ON_REBOOT_HASH) {
    return ScriptCachingPolicy::REFRESH_ON_REBOOT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScriptCachingPolicy>(hashCode);
  }

  return ScriptCachingPolicy::NOT_SET;
}

Aws::String GetNameForScriptCachingPolicy(ScriptCachingPolicy enumValue) {
  switch (enumValue) {
    case ScriptCachingPolicy::NOT_SET:
      return {};
    case ScriptCachingPolicy::CACHE_ONCE:
      return "CACHE_ONCE";
    case ScriptCachingPolicy::REFRESH_ON_REBOOT:
      return "REFRESH_ON_REBOOT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScriptCachingPolicyMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
