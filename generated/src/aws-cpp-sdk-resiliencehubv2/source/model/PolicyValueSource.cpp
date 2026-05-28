/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/PolicyValueSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace PolicyValueSourceMapper {

static const int SELF_HASH = HashingUtils::HashString("SELF");
static const int CROSS_ACCOUNT_HASH = HashingUtils::HashString("CROSS_ACCOUNT");

PolicyValueSource GetPolicyValueSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SELF_HASH) {
    return PolicyValueSource::SELF;
  } else if (hashCode == CROSS_ACCOUNT_HASH) {
    return PolicyValueSource::CROSS_ACCOUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyValueSource>(hashCode);
  }

  return PolicyValueSource::NOT_SET;
}

Aws::String GetNameForPolicyValueSource(PolicyValueSource enumValue) {
  switch (enumValue) {
    case PolicyValueSource::NOT_SET:
      return {};
    case PolicyValueSource::SELF:
      return "SELF";
    case PolicyValueSource::CROSS_ACCOUNT:
      return "CROSS_ACCOUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyValueSourceMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
