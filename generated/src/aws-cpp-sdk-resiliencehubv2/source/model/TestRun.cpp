/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestRun.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestRun::TestRun(JsonView jsonValue) { *this = jsonValue; }

TestRun& TestRun::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("testRunId")) {
    m_testRunId = jsonValue.GetString("testRunId");
    m_testRunIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testId")) {
    m_testId = jsonValue.GetString("testId");
    m_testIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = TestRunStatusMapper::GetTestRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetDouble("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("experiments")) {
    Aws::Utils::Array<JsonView> experimentsJsonList = jsonValue.GetArray("experiments");
    for (unsigned experimentsIndex = 0; experimentsIndex < experimentsJsonList.GetLength(); ++experimentsIndex) {
      m_experiments.push_back(experimentsJsonList[experimentsIndex].AsObject());
    }
    m_experimentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventCount")) {
    m_eventCount = jsonValue.GetInteger("eventCount");
    m_eventCountHasBeenSet = true;
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
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stopConditions")) {
    Aws::Utils::Array<JsonView> stopConditionsJsonList = jsonValue.GetArray("stopConditions");
    for (unsigned stopConditionsIndex = 0; stopConditionsIndex < stopConditionsJsonList.GetLength(); ++stopConditionsIndex) {
      m_stopConditions.push_back(stopConditionsJsonList[stopConditionsIndex].AsObject());
    }
    m_stopConditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loggingConfiguration")) {
    m_loggingConfiguration = jsonValue.GetObject("loggingConfiguration");
    m_loggingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleName")) {
    m_roleName = jsonValue.GetString("roleName");
    m_roleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testTemplateArn")) {
    m_testTemplateArn = jsonValue.GetString("testTemplateArn");
    m_testTemplateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reportConfiguration")) {
    m_reportConfiguration = jsonValue.GetObject("reportConfiguration");
    m_reportConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policy")) {
    m_policy = jsonValue.GetObject("policy");
    m_policyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reportOutput")) {
    m_reportOutput = jsonValue.GetObject("reportOutput");
    m_reportOutputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionSwitchPlanArn")) {
    m_regionSwitchPlanArn = jsonValue.GetString("regionSwitchPlanArn");
    m_regionSwitchPlanArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionSwitchExecutionId")) {
    m_regionSwitchExecutionId = jsonValue.GetString("regionSwitchExecutionId");
    m_regionSwitchExecutionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permissionModel")) {
    m_permissionModel = jsonValue.GetObject("permissionModel");
    m_permissionModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountTargeting")) {
    m_accountTargeting = AccountTargetingMapper::GetAccountTargetingForName(jsonValue.GetString("accountTargeting"));
    m_accountTargetingHasBeenSet = true;
  }
  return *this;
}

JsonValue TestRun::Jsonize() const {
  JsonValue payload;

  if (m_testRunIdHasBeenSet) {
    payload.WithString("testRunId", m_testRunId);
  }

  if (m_testIdHasBeenSet) {
    payload.WithString("testId", m_testId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", TestRunStatusMapper::GetNameForTestRunStatus(m_status));
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_experimentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> experimentsJsonList(m_experiments.size());
    for (unsigned experimentsIndex = 0; experimentsIndex < experimentsJsonList.GetLength(); ++experimentsIndex) {
      experimentsJsonList[experimentsIndex].AsObject(m_experiments[experimentsIndex].Jsonize());
    }
    payload.WithArray("experiments", std::move(experimentsJsonList));
  }

  if (m_eventCountHasBeenSet) {
    payload.WithInteger("eventCount", m_eventCount);
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

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_stopConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> stopConditionsJsonList(m_stopConditions.size());
    for (unsigned stopConditionsIndex = 0; stopConditionsIndex < stopConditionsJsonList.GetLength(); ++stopConditionsIndex) {
      stopConditionsJsonList[stopConditionsIndex].AsObject(m_stopConditions[stopConditionsIndex].Jsonize());
    }
    payload.WithArray("stopConditions", std::move(stopConditionsJsonList));
  }

  if (m_loggingConfigurationHasBeenSet) {
    payload.WithObject("loggingConfiguration", m_loggingConfiguration.Jsonize());
  }

  if (m_roleNameHasBeenSet) {
    payload.WithString("roleName", m_roleName);
  }

  if (m_testTemplateArnHasBeenSet) {
    payload.WithString("testTemplateArn", m_testTemplateArn);
  }

  if (m_reportConfigurationHasBeenSet) {
    payload.WithObject("reportConfiguration", m_reportConfiguration.Jsonize());
  }

  if (m_policyHasBeenSet) {
    payload.WithObject("policy", m_policy.Jsonize());
  }

  if (m_reportOutputHasBeenSet) {
    payload.WithObject("reportOutput", m_reportOutput.Jsonize());
  }

  if (m_regionSwitchPlanArnHasBeenSet) {
    payload.WithString("regionSwitchPlanArn", m_regionSwitchPlanArn);
  }

  if (m_regionSwitchExecutionIdHasBeenSet) {
    payload.WithString("regionSwitchExecutionId", m_regionSwitchExecutionId);
  }

  if (m_permissionModelHasBeenSet) {
    payload.WithObject("permissionModel", m_permissionModel.Jsonize());
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  if (m_accountTargetingHasBeenSet) {
    payload.WithString("accountTargeting", AccountTargetingMapper::GetNameForAccountTargeting(m_accountTargeting));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
