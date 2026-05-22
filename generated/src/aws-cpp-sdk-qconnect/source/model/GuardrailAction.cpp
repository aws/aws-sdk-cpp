/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/GuardrailAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace GuardrailActionMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int BLOCKED_HASH = HashingUtils::HashString("BLOCKED");
static const int MASKED_HASH = HashingUtils::HashString("MASKED");

GuardrailAction GetGuardrailActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return GuardrailAction::NONE;
  } else if (hashCode == BLOCKED_HASH) {
    return GuardrailAction::BLOCKED;
  } else if (hashCode == MASKED_HASH) {
    return GuardrailAction::MASKED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuardrailAction>(hashCode);
  }

  return GuardrailAction::NOT_SET;
}

Aws::String GetNameForGuardrailAction(GuardrailAction enumValue) {
  switch (enumValue) {
    case GuardrailAction::NOT_SET:
      return {};
    case GuardrailAction::NONE:
      return "NONE";
    case GuardrailAction::BLOCKED:
      return "BLOCKED";
    case GuardrailAction::MASKED:
      return "MASKED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuardrailActionMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
