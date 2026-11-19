/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/VoiceCreationData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

VoiceCreationData::VoiceCreationData(JsonView jsonValue) { *this = jsonValue; }

VoiceCreationData& VoiceCreationData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Recordings")) {
    Aws::Utils::Array<JsonView> recordingsJsonList = jsonValue.GetArray("Recordings");
    for (unsigned recordingsIndex = 0; recordingsIndex < recordingsJsonList.GetLength(); ++recordingsIndex) {
      m_recordings.push_back(recordingsJsonList[recordingsIndex].AsObject());
    }
    m_recordingsHasBeenSet = true;
  }
  return *this;
}

JsonValue VoiceCreationData::Jsonize() const {
  JsonValue payload;

  if (m_recordingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> recordingsJsonList(m_recordings.size());
    for (unsigned recordingsIndex = 0; recordingsIndex < recordingsJsonList.GetLength(); ++recordingsIndex) {
      recordingsJsonList[recordingsIndex].AsObject(m_recordings[recordingsIndex].Jsonize());
    }
    payload.WithArray("Recordings", std::move(recordingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
