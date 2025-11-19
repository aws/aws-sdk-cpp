/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MediaLiveTransitEncryption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MediaLiveTransitEncryption::MediaLiveTransitEncryption(JsonView jsonValue) { *this = jsonValue; }

MediaLiveTransitEncryption& MediaLiveTransitEncryption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionKeyType")) {
    m_encryptionKeyType =
        MediaLiveTransitEncryptionKeyTypeMapper::GetMediaLiveTransitEncryptionKeyTypeForName(jsonValue.GetString("encryptionKeyType"));
    m_encryptionKeyTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionKeyConfiguration")) {
    m_encryptionKeyConfiguration = jsonValue.GetObject("encryptionKeyConfiguration");
    m_encryptionKeyConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaLiveTransitEncryption::Jsonize() const {
  JsonValue payload;

  if (m_encryptionKeyTypeHasBeenSet) {
    payload.WithString("encryptionKeyType",
                       MediaLiveTransitEncryptionKeyTypeMapper::GetNameForMediaLiveTransitEncryptionKeyType(m_encryptionKeyType));
  }

  if (m_encryptionKeyConfigurationHasBeenSet) {
    payload.WithObject("encryptionKeyConfiguration", m_encryptionKeyConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
