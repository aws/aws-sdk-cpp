/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wickr/model/DataRetentionActionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {
namespace DataRetentionActionTypeMapper {

static const int ENABLE_HASH = HashingUtils::HashString("ENABLE");
static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");
static const int PUBKEY_MSG_ACK_HASH = HashingUtils::HashString("PUBKEY_MSG_ACK");

DataRetentionActionType GetDataRetentionActionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLE_HASH) {
    return DataRetentionActionType::ENABLE;
  } else if (hashCode == DISABLE_HASH) {
    return DataRetentionActionType::DISABLE;
  } else if (hashCode == PUBKEY_MSG_ACK_HASH) {
    return DataRetentionActionType::PUBKEY_MSG_ACK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataRetentionActionType>(hashCode);
  }

  return DataRetentionActionType::NOT_SET;
}

Aws::String GetNameForDataRetentionActionType(DataRetentionActionType enumValue) {
  switch (enumValue) {
    case DataRetentionActionType::NOT_SET:
      return {};
    case DataRetentionActionType::ENABLE:
      return "ENABLE";
    case DataRetentionActionType::DISABLE:
      return "DISABLE";
    case DataRetentionActionType::PUBKEY_MSG_ACK:
      return "PUBKEY_MSG_ACK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataRetentionActionTypeMapper
}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
