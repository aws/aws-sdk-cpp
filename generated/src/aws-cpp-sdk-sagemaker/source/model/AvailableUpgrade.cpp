/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AvailableUpgrade.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AvailableUpgrade::AvailableUpgrade(JsonView jsonValue) { *this = jsonValue; }

AvailableUpgrade& AvailableUpgrade::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReleaseNotes")) {
    Aws::Utils::Array<JsonView> releaseNotesJsonList = jsonValue.GetArray("ReleaseNotes");
    for (unsigned releaseNotesIndex = 0; releaseNotesIndex < releaseNotesJsonList.GetLength(); ++releaseNotesIndex) {
      m_releaseNotes.push_back(releaseNotesJsonList[releaseNotesIndex].AsString());
    }
    m_releaseNotesHasBeenSet = true;
  }
  return *this;
}

JsonValue AvailableUpgrade::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("Version", m_version);
  }

  if (m_releaseNotesHasBeenSet) {
    Aws::Utils::Array<JsonValue> releaseNotesJsonList(m_releaseNotes.size());
    for (unsigned releaseNotesIndex = 0; releaseNotesIndex < releaseNotesJsonList.GetLength(); ++releaseNotesIndex) {
      releaseNotesJsonList[releaseNotesIndex].AsString(m_releaseNotes[releaseNotesIndex]);
    }
    payload.WithArray("ReleaseNotes", std::move(releaseNotesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
