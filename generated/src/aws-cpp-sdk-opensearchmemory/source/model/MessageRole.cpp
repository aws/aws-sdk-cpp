/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchmemory/model/MessageRole.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
namespace MessageRoleMapper {

static const int USER_HASH = HashingUtils::HashString("USER");
static const int ASSISTANT_HASH = HashingUtils::HashString("ASSISTANT");
static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");

MessageRole GetMessageRoleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_HASH) {
    return MessageRole::USER;
  } else if (hashCode == ASSISTANT_HASH) {
    return MessageRole::ASSISTANT;
  } else if (hashCode == SYSTEM_HASH) {
    return MessageRole::SYSTEM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MessageRole>(hashCode);
  }

  return MessageRole::NOT_SET;
}

Aws::String GetNameForMessageRole(MessageRole enumValue) {
  switch (enumValue) {
    case MessageRole::NOT_SET:
      return {};
    case MessageRole::USER:
      return "USER";
    case MessageRole::ASSISTANT:
      return "ASSISTANT";
    case MessageRole::SYSTEM:
      return "SYSTEM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MessageRoleMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
