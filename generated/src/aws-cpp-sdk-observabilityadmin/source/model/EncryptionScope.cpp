/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/EncryptionScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace EncryptionScopeMapper {

static const int ENCRYPTED_SOURCE_ONLY_HASH = HashingUtils::HashString("ENCRYPTED_SOURCE_ONLY");
static const int NEW_DESTINATION_LOG_GROUPS_HASH = HashingUtils::HashString("NEW_DESTINATION_LOG_GROUPS");

EncryptionScope GetEncryptionScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENCRYPTED_SOURCE_ONLY_HASH) {
    return EncryptionScope::ENCRYPTED_SOURCE_ONLY;
  } else if (hashCode == NEW_DESTINATION_LOG_GROUPS_HASH) {
    return EncryptionScope::NEW_DESTINATION_LOG_GROUPS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionScope>(hashCode);
  }

  return EncryptionScope::NOT_SET;
}

Aws::String GetNameForEncryptionScope(EncryptionScope enumValue) {
  switch (enumValue) {
    case EncryptionScope::NOT_SET:
      return {};
    case EncryptionScope::ENCRYPTED_SOURCE_ONLY:
      return "ENCRYPTED_SOURCE_ONLY";
    case EncryptionScope::NEW_DESTINATION_LOG_GROUPS:
      return "NEW_DESTINATION_LOG_GROUPS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionScopeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
