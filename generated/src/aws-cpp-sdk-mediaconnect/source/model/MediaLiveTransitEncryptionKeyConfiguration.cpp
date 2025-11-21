/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MediaLiveTransitEncryptionKeyConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MediaLiveTransitEncryptionKeyConfiguration::MediaLiveTransitEncryptionKeyConfiguration(JsonView jsonValue) { *this = jsonValue; }

MediaLiveTransitEncryptionKeyConfiguration& MediaLiveTransitEncryptionKeyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("secretsManager")) {
    m_secretsManager = jsonValue.GetObject("secretsManager");
    m_secretsManagerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("automatic")) {
    m_automatic = jsonValue.GetObject("automatic");
    m_automaticHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaLiveTransitEncryptionKeyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_secretsManagerHasBeenSet) {
    payload.WithObject("secretsManager", m_secretsManager.Jsonize());
  }

  if (m_automaticHasBeenSet) {
    payload.WithObject("automatic", m_automatic.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
