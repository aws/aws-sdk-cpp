/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/CreateTestRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_testTemplateArnHasBeenSet) {
    payload.WithString("testTemplateArn", m_testTemplateArn);
  }

  if (m_loggingConfigurationHasBeenSet) {
    payload.WithObject("loggingConfiguration", m_loggingConfiguration.Jsonize());
  }

  if (m_stopConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> stopConditionsJsonList(m_stopConditions.size());
    for (unsigned stopConditionsIndex = 0; stopConditionsIndex < stopConditionsJsonList.GetLength(); ++stopConditionsIndex) {
      stopConditionsJsonList[stopConditionsIndex].AsObject(m_stopConditions[stopConditionsIndex].Jsonize());
    }
    payload.WithArray("stopConditions", std::move(stopConditionsJsonList));
  }

  if (m_roleNameHasBeenSet) {
    payload.WithString("roleName", m_roleName);
  }

  if (m_parametersHasBeenSet) {
    JsonValue parametersJsonMap;
    for (auto& parametersItem : m_parameters) {
      Aws::Utils::Array<JsonValue> stringListJsonList(parametersItem.second.size());
      for (unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex) {
        stringListJsonList[stringListIndex].AsString(parametersItem.second[stringListIndex]);
      }
      parametersJsonMap.WithArray(parametersItem.first, std::move(stringListJsonList));
    }
    payload.WithObject("parameters", std::move(parametersJsonMap));
  }

  return payload.View().WriteReadable();
}
