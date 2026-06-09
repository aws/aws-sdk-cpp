/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ActorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ActorTypeMapper {

static const int USER_HASH = HashingUtils::HashString("USER");
static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");

ActorType GetActorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_HASH) {
    return ActorType::USER;
  } else if (hashCode == SYSTEM_HASH) {
    return ActorType::SYSTEM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActorType>(hashCode);
  }

  return ActorType::NOT_SET;
}

Aws::String GetNameForActorType(ActorType enumValue) {
  switch (enumValue) {
    case ActorType::NOT_SET:
      return {};
    case ActorType::USER:
      return "USER";
    case ActorType::SYSTEM:
      return "SYSTEM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActorTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
