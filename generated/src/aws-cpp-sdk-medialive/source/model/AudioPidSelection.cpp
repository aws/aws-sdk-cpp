/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/AudioPidSelection.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

AudioPidSelection::AudioPidSelection(JsonView jsonValue) { *this = jsonValue; }

AudioPidSelection& AudioPidSelection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pid")) {
    m_pid = jsonValue.GetInteger("pid");
    m_pidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pids")) {
    Aws::Utils::Array<JsonView> pidsJsonList = jsonValue.GetArray("pids");
    for (unsigned pidsIndex = 0; pidsIndex < pidsJsonList.GetLength(); ++pidsIndex) {
      m_pids.push_back(pidsJsonList[pidsIndex].AsObject());
    }
    m_pidsHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioPidSelection::Jsonize() const {
  JsonValue payload;

  if (m_pidHasBeenSet) {
    payload.WithInteger("pid", m_pid);
  }

  if (m_pidsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pidsJsonList(m_pids.size());
    for (unsigned pidsIndex = 0; pidsIndex < pidsJsonList.GetLength(); ++pidsIndex) {
      pidsJsonList[pidsIndex].AsObject(m_pids[pidsIndex].Jsonize());
    }
    payload.WithArray("pids", std::move(pidsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
