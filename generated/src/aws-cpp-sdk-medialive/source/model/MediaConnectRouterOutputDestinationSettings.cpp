/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/MediaConnectRouterOutputDestinationSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

MediaConnectRouterOutputDestinationSettings::MediaConnectRouterOutputDestinationSettings(JsonView jsonValue) { *this = jsonValue; }

MediaConnectRouterOutputDestinationSettings& MediaConnectRouterOutputDestinationSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionType")) {
    m_encryptionType = MediaConnectRouterOutputEncryptionTypeMapper::GetMediaConnectRouterOutputEncryptionTypeForName(
        jsonValue.GetString("encryptionType"));
    m_encryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretArn")) {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaConnectRouterOutputDestinationSettings::Jsonize() const {
  JsonValue payload;

  if (m_encryptionTypeHasBeenSet) {
    payload.WithString("encryptionType",
                       MediaConnectRouterOutputEncryptionTypeMapper::GetNameForMediaConnectRouterOutputEncryptionType(m_encryptionType));
  }

  if (m_secretArnHasBeenSet) {
    payload.WithString("secretArn", m_secretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
