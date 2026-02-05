/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/SrtListenerSettingsRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

SrtListenerSettingsRequest::SrtListenerSettingsRequest(JsonView jsonValue) { *this = jsonValue; }

SrtListenerSettingsRequest& SrtListenerSettingsRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("decryption")) {
    m_decryption = jsonValue.GetObject("decryption");
    m_decryptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumLatency")) {
    m_minimumLatency = jsonValue.GetInteger("minimumLatency");
    m_minimumLatencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamId")) {
    m_streamId = jsonValue.GetString("streamId");
    m_streamIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtListenerSettingsRequest::Jsonize() const {
  JsonValue payload;

  if (m_decryptionHasBeenSet) {
    payload.WithObject("decryption", m_decryption.Jsonize());
  }

  if (m_minimumLatencyHasBeenSet) {
    payload.WithInteger("minimumLatency", m_minimumLatency);
  }

  if (m_streamIdHasBeenSet) {
    payload.WithString("streamId", m_streamId);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
