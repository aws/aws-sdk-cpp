/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/FlowTransitEncryptionKeyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace FlowTransitEncryptionKeyTypeMapper {

static const int SECRETS_MANAGER_HASH = HashingUtils::HashString("SECRETS_MANAGER");
static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");

FlowTransitEncryptionKeyType GetFlowTransitEncryptionKeyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SECRETS_MANAGER_HASH) {
    return FlowTransitEncryptionKeyType::SECRETS_MANAGER;
  } else if (hashCode == AUTOMATIC_HASH) {
    return FlowTransitEncryptionKeyType::AUTOMATIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FlowTransitEncryptionKeyType>(hashCode);
  }

  return FlowTransitEncryptionKeyType::NOT_SET;
}

Aws::String GetNameForFlowTransitEncryptionKeyType(FlowTransitEncryptionKeyType enumValue) {
  switch (enumValue) {
    case FlowTransitEncryptionKeyType::NOT_SET:
      return {};
    case FlowTransitEncryptionKeyType::SECRETS_MANAGER:
      return "SECRETS_MANAGER";
    case FlowTransitEncryptionKeyType::AUTOMATIC:
      return "AUTOMATIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FlowTransitEncryptionKeyTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
