/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/TargetType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace TargetTypeMapper {

static const int RECOMMENDATION_HASH = HashingUtils::HashString("RECOMMENDATION");
static const int RESULT_HASH = HashingUtils::HashString("RESULT");
static const int MESSAGE_HASH = HashingUtils::HashString("MESSAGE");

TargetType GetTargetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RECOMMENDATION_HASH) {
    return TargetType::RECOMMENDATION;
  } else if (hashCode == RESULT_HASH) {
    return TargetType::RESULT;
  } else if (hashCode == MESSAGE_HASH) {
    return TargetType::MESSAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetType>(hashCode);
  }

  return TargetType::NOT_SET;
}

Aws::String GetNameForTargetType(TargetType enumValue) {
  switch (enumValue) {
    case TargetType::NOT_SET:
      return {};
    case TargetType::RECOMMENDATION:
      return "RECOMMENDATION";
    case TargetType::RESULT:
      return "RESULT";
    case TargetType::MESSAGE:
      return "MESSAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
