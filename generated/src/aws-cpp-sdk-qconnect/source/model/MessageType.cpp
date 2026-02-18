/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/MessageType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace MessageTypeMapper {

static const int TEXT_HASH = HashingUtils::HashString("TEXT");
static const int TOOL_USE_RESULT_HASH = HashingUtils::HashString("TOOL_USE_RESULT");

MessageType GetMessageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEXT_HASH) {
    return MessageType::TEXT;
  } else if (hashCode == TOOL_USE_RESULT_HASH) {
    return MessageType::TOOL_USE_RESULT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MessageType>(hashCode);
  }

  return MessageType::NOT_SET;
}

Aws::String GetNameForMessageType(MessageType enumValue) {
  switch (enumValue) {
    case MessageType::NOT_SET:
      return {};
    case MessageType::TEXT:
      return "TEXT";
    case MessageType::TOOL_USE_RESULT:
      return "TOOL_USE_RESULT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MessageTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
