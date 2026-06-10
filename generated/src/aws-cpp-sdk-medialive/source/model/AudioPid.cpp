/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/AudioPid.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

AudioPid::AudioPid(JsonView jsonValue) { *this = jsonValue; }

AudioPid& AudioPid::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dolbyEDecode")) {
    m_dolbyEDecode = jsonValue.GetObject("dolbyEDecode");
    m_dolbyEDecodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pid")) {
    m_pid = jsonValue.GetInteger("pid");
    m_pidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("premixSettings")) {
    m_premixSettings = jsonValue.GetObject("premixSettings");
    m_premixSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioPid::Jsonize() const {
  JsonValue payload;

  if (m_dolbyEDecodeHasBeenSet) {
    payload.WithObject("dolbyEDecode", m_dolbyEDecode.Jsonize());
  }

  if (m_pidHasBeenSet) {
    payload.WithInteger("pid", m_pid);
  }

  if (m_premixSettingsHasBeenSet) {
    payload.WithObject("premixSettings", m_premixSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
