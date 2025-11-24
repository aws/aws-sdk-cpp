/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/ChannelSubtype.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace ChannelSubtypeMapper {

static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
static const int SMS_HASH = HashingUtils::HashString("SMS");
static const int WHATSAPP_HASH = HashingUtils::HashString("WHATSAPP");
static const int PUSH_HASH = HashingUtils::HashString("PUSH");

ChannelSubtype GetChannelSubtypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EMAIL_HASH) {
    return ChannelSubtype::EMAIL;
  } else if (hashCode == SMS_HASH) {
    return ChannelSubtype::SMS;
  } else if (hashCode == WHATSAPP_HASH) {
    return ChannelSubtype::WHATSAPP;
  } else if (hashCode == PUSH_HASH) {
    return ChannelSubtype::PUSH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChannelSubtype>(hashCode);
  }

  return ChannelSubtype::NOT_SET;
}

Aws::String GetNameForChannelSubtype(ChannelSubtype enumValue) {
  switch (enumValue) {
    case ChannelSubtype::NOT_SET:
      return {};
    case ChannelSubtype::EMAIL:
      return "EMAIL";
    case ChannelSubtype::SMS:
      return "SMS";
    case ChannelSubtype::WHATSAPP:
      return "WHATSAPP";
    case ChannelSubtype::PUSH:
      return "PUSH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChannelSubtypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
