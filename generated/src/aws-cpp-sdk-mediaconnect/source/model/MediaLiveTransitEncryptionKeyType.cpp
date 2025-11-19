/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/MediaLiveTransitEncryptionKeyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace MediaLiveTransitEncryptionKeyTypeMapper {

static const int SECRETS_MANAGER_HASH = HashingUtils::HashString("SECRETS_MANAGER");
static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");

MediaLiveTransitEncryptionKeyType GetMediaLiveTransitEncryptionKeyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SECRETS_MANAGER_HASH) {
    return MediaLiveTransitEncryptionKeyType::SECRETS_MANAGER;
  } else if (hashCode == AUTOMATIC_HASH) {
    return MediaLiveTransitEncryptionKeyType::AUTOMATIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MediaLiveTransitEncryptionKeyType>(hashCode);
  }

  return MediaLiveTransitEncryptionKeyType::NOT_SET;
}

Aws::String GetNameForMediaLiveTransitEncryptionKeyType(MediaLiveTransitEncryptionKeyType enumValue) {
  switch (enumValue) {
    case MediaLiveTransitEncryptionKeyType::NOT_SET:
      return {};
    case MediaLiveTransitEncryptionKeyType::SECRETS_MANAGER:
      return "SECRETS_MANAGER";
    case MediaLiveTransitEncryptionKeyType::AUTOMATIC:
      return "AUTOMATIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MediaLiveTransitEncryptionKeyTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
