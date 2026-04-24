/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/LinkedChannelType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace LinkedChannelTypeMapper {

static const int FOLLOWING_CHANNEL_HASH = HashingUtils::HashString("FOLLOWING_CHANNEL");
static const int PRIMARY_CHANNEL_HASH = HashingUtils::HashString("PRIMARY_CHANNEL");

LinkedChannelType GetLinkedChannelTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FOLLOWING_CHANNEL_HASH) {
    return LinkedChannelType::FOLLOWING_CHANNEL;
  } else if (hashCode == PRIMARY_CHANNEL_HASH) {
    return LinkedChannelType::PRIMARY_CHANNEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LinkedChannelType>(hashCode);
  }

  return LinkedChannelType::NOT_SET;
}

Aws::String GetNameForLinkedChannelType(LinkedChannelType enumValue) {
  switch (enumValue) {
    case LinkedChannelType::NOT_SET:
      return {};
    case LinkedChannelType::FOLLOWING_CHANNEL:
      return "FOLLOWING_CHANNEL";
    case LinkedChannelType::PRIMARY_CHANNEL:
      return "PRIMARY_CHANNEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LinkedChannelTypeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
