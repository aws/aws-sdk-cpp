/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/Test.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

Test::Test(JsonView jsonValue) { *this = jsonValue; }

Test& Test::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("testId")) {
    m_testId = jsonValue.GetString("testId");
    m_testIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testTemplateArn")) {
    m_testTemplateArn = jsonValue.GetString("testTemplateArn");
    m_testTemplateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actions")) {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loggingConfiguration")) {
    m_loggingConfiguration = jsonValue.GetObject("loggingConfiguration");
    m_loggingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stopConditions")) {
    Aws::Utils::Array<JsonView> stopConditionsJsonList = jsonValue.GetArray("stopConditions");
    for (unsigned stopConditionsIndex = 0; stopConditionsIndex < stopConditionsJsonList.GetLength(); ++stopConditionsIndex) {
      m_stopConditions.push_back(stopConditionsJsonList[stopConditionsIndex].AsObject());
    }
    m_stopConditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleName")) {
    m_roleName = jsonValue.GetString("roleName");
    m_roleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameters")) {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for (auto& parametersItem : parametersJsonMap) {
      Aws::Utils::Array<JsonView> stringList2JsonList = parametersItem.second.AsArray();
      Aws::Vector<Aws::String> stringList2List;
      stringList2List.reserve((size_t)stringList2JsonList.GetLength());
      for (unsigned stringList2Index = 0; stringList2Index < stringList2JsonList.GetLength(); ++stringList2Index) {
        stringList2List.push_back(stringList2JsonList[stringList2Index].AsString());
      }
      m_parameters[parametersItem.first] = std::move(stringList2List);
    }
    m_parametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalTestRuns")) {
    m_totalTestRuns = jsonValue.GetInteger("totalTestRuns");
    m_totalTestRunsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("successfulTestRuns")) {
    m_successfulTestRuns = jsonValue.GetInteger("successfulTestRuns");
    m_successfulTestRunsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue Test::Jsonize() const {
  JsonValue payload;

  if (m_testIdHasBeenSet) {
    payload.WithString("testId", m_testId);
  }

  if (m_testTemplateArnHasBeenSet) {
    payload.WithString("testTemplateArn", m_testTemplateArn);
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_actionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
    }
    payload.WithArray("actions", std::move(actionsJsonList));
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

  if (m_totalTestRunsHasBeenSet) {
    payload.WithInteger("totalTestRuns", m_totalTestRuns);
  }

  if (m_successfulTestRunsHasBeenSet) {
    payload.WithInteger("successfulTestRuns", m_successfulTestRuns);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
