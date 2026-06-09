/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/AssertionSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace AssertionSourceMapper {

static const int AI_GENERATED_HASH = HashingUtils::HashString("AI_GENERATED");
static const int USER_HASH = HashingUtils::HashString("USER");

AssertionSource GetAssertionSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AI_GENERATED_HASH) {
    return AssertionSource::AI_GENERATED;
  } else if (hashCode == USER_HASH) {
    return AssertionSource::USER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssertionSource>(hashCode);
  }

  return AssertionSource::NOT_SET;
}

Aws::String GetNameForAssertionSource(AssertionSource enumValue) {
  switch (enumValue) {
    case AssertionSource::NOT_SET:
      return {};
    case AssertionSource::AI_GENERATED:
      return "AI_GENERATED";
    case AssertionSource::USER:
      return "USER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssertionSourceMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
