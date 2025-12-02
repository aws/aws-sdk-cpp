/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/CompatibilityInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

CompatibilityInformation::CompatibilityInformation(JsonView jsonValue) { *this = jsonValue; }

CompatibilityInformation& CompatibilityInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clientCompatibilityVersion")) {
    m_clientCompatibilityVersion = jsonValue.GetInteger("clientCompatibilityVersion");
    m_clientCompatibilityVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportedModelIds")) {
    Aws::Utils::Array<JsonView> supportedModelIdsJsonList = jsonValue.GetArray("supportedModelIds");
    for (unsigned supportedModelIdsIndex = 0; supportedModelIdsIndex < supportedModelIdsJsonList.GetLength(); ++supportedModelIdsIndex) {
      m_supportedModelIds.push_back(supportedModelIdsJsonList[supportedModelIdsIndex].AsString());
    }
    m_supportedModelIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue CompatibilityInformation::Jsonize() const {
  JsonValue payload;

  if (m_clientCompatibilityVersionHasBeenSet) {
    payload.WithInteger("clientCompatibilityVersion", m_clientCompatibilityVersion);
  }

  if (m_supportedModelIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedModelIdsJsonList(m_supportedModelIds.size());
    for (unsigned supportedModelIdsIndex = 0; supportedModelIdsIndex < supportedModelIdsJsonList.GetLength(); ++supportedModelIdsIndex) {
      supportedModelIdsJsonList[supportedModelIdsIndex].AsString(m_supportedModelIds[supportedModelIdsIndex]);
    }
    payload.WithArray("supportedModelIds", std::move(supportedModelIdsJsonList));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
