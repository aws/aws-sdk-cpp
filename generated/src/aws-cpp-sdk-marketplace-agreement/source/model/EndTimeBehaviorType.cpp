/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/EndTimeBehaviorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace EndTimeBehaviorTypeMapper {

static const int RENEW_HASH = HashingUtils::HashString("RENEW");
static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
static const int EXPIRE_HASH = HashingUtils::HashString("EXPIRE");

EndTimeBehaviorType GetEndTimeBehaviorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RENEW_HASH) {
    return EndTimeBehaviorType::RENEW;
  } else if (hashCode == REPLACE_HASH) {
    return EndTimeBehaviorType::REPLACE;
  } else if (hashCode == EXPIRE_HASH) {
    return EndTimeBehaviorType::EXPIRE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EndTimeBehaviorType>(hashCode);
  }

  return EndTimeBehaviorType::NOT_SET;
}

Aws::String GetNameForEndTimeBehaviorType(EndTimeBehaviorType enumValue) {
  switch (enumValue) {
    case EndTimeBehaviorType::NOT_SET:
      return {};
    case EndTimeBehaviorType::RENEW:
      return "RENEW";
    case EndTimeBehaviorType::REPLACE:
      return "REPLACE";
    case EndTimeBehaviorType::EXPIRE:
      return "EXPIRE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EndTimeBehaviorTypeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
