/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/MediaConnectRouterOutputEncryptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace MediaConnectRouterOutputEncryptionTypeMapper {

static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
static const int SECRETS_MANAGER_HASH = HashingUtils::HashString("SECRETS_MANAGER");

MediaConnectRouterOutputEncryptionType GetMediaConnectRouterOutputEncryptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTOMATIC_HASH) {
    return MediaConnectRouterOutputEncryptionType::AUTOMATIC;
  } else if (hashCode == SECRETS_MANAGER_HASH) {
    return MediaConnectRouterOutputEncryptionType::SECRETS_MANAGER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MediaConnectRouterOutputEncryptionType>(hashCode);
  }

  return MediaConnectRouterOutputEncryptionType::NOT_SET;
}

Aws::String GetNameForMediaConnectRouterOutputEncryptionType(MediaConnectRouterOutputEncryptionType enumValue) {
  switch (enumValue) {
    case MediaConnectRouterOutputEncryptionType::NOT_SET:
      return {};
    case MediaConnectRouterOutputEncryptionType::AUTOMATIC:
      return "AUTOMATIC";
    case MediaConnectRouterOutputEncryptionType::SECRETS_MANAGER:
      return "SECRETS_MANAGER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MediaConnectRouterOutputEncryptionTypeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
