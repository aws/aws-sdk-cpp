/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/MessageFilterType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace MessageFilterTypeMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int TEXT_ONLY_HASH = HashingUtils::HashString("TEXT_ONLY");

MessageFilterType GetMessageFilterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return MessageFilterType::ALL;
  } else if (hashCode == TEXT_ONLY_HASH) {
    return MessageFilterType::TEXT_ONLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MessageFilterType>(hashCode);
  }

  return MessageFilterType::NOT_SET;
}

Aws::String GetNameForMessageFilterType(MessageFilterType enumValue) {
  switch (enumValue) {
    case MessageFilterType::NOT_SET:
      return {};
    case MessageFilterType::ALL:
      return "ALL";
    case MessageFilterType::TEXT_ONLY:
      return "TEXT_ONLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MessageFilterTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
