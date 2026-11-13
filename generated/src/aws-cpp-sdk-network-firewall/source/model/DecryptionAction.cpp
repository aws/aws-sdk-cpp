/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/DecryptionAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace DecryptionActionMapper {

static const int DECRYPT_HASH = HashingUtils::HashString("DECRYPT");
static const int BYPASS_HASH = HashingUtils::HashString("BYPASS");

DecryptionAction GetDecryptionActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DECRYPT_HASH) {
    return DecryptionAction::DECRYPT;
  } else if (hashCode == BYPASS_HASH) {
    return DecryptionAction::BYPASS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DecryptionAction>(hashCode);
  }

  return DecryptionAction::NOT_SET;
}

Aws::String GetNameForDecryptionAction(DecryptionAction enumValue) {
  switch (enumValue) {
    case DecryptionAction::NOT_SET:
      return {};
    case DecryptionAction::DECRYPT:
      return "DECRYPT";
    case DecryptionAction::BYPASS:
      return "BYPASS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DecryptionActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
