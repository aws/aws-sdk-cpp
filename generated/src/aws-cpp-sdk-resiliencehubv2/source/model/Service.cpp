/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/Service.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

Service::Service(JsonView jsonValue) { *this = jsonValue; }

Service& Service::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedSystems")) {
    Aws::Utils::Array<JsonView> associatedSystemsJsonList = jsonValue.GetArray("associatedSystems");
    for (unsigned associatedSystemsIndex = 0; associatedSystemsIndex < associatedSystemsJsonList.GetLength(); ++associatedSystemsIndex) {
      m_associatedSystems.push_back(associatedSystemsJsonList[associatedSystemsIndex].AsObject());
    }
    m_associatedSystemsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyArn")) {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permissionModel")) {
    m_permissionModel = jsonValue.GetObject("permissionModel");
    m_permissionModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dependencyDiscovery")) {
    m_dependencyDiscovery = jsonValue.GetObject("dependencyDiscovery");
    m_dependencyDiscoveryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("effectivePolicyValues")) {
    m_effectivePolicyValues = jsonValue.GetObject("effectivePolicyValues");
    m_effectivePolicyValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("achievability")) {
    m_achievability = jsonValue.GetObject("achievability");
    m_achievabilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reportConfiguration")) {
    m_reportConfiguration = jsonValue.GetObject("reportConfiguration");
    m_reportConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedAssessmentCost")) {
    m_estimatedAssessmentCost = jsonValue.GetObject("estimatedAssessmentCost");
    m_estimatedAssessmentCostHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceDiscovery")) {
    m_resourceDiscovery = jsonValue.GetObject("resourceDiscovery");
    m_resourceDiscoveryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assessmentStatus")) {
    m_assessmentStatus = AssessmentStatusMapper::GetAssessmentStatusForName(jsonValue.GetString("assessmentStatus"));
    m_assessmentStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rerunAssessment")) {
    m_rerunAssessment = jsonValue.GetBool("rerunAssessment");
    m_rerunAssessmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("openFindingsCount")) {
    m_openFindingsCount = jsonValue.GetInteger("openFindingsCount");
    m_openFindingsCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolvedFindingsCount")) {
    m_resolvedFindingsCount = jsonValue.GetInteger("resolvedFindingsCount");
    m_resolvedFindingsCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationId")) {
    m_organizationId = jsonValue.GetString("organizationId");
    m_organizationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ouId")) {
    m_ouId = jsonValue.GetString("ouId");
    m_ouIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Service::Jsonize() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_associatedSystemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedSystemsJsonList(m_associatedSystems.size());
    for (unsigned associatedSystemsIndex = 0; associatedSystemsIndex < associatedSystemsJsonList.GetLength(); ++associatedSystemsIndex) {
      associatedSystemsJsonList[associatedSystemsIndex].AsObject(m_associatedSystems[associatedSystemsIndex].Jsonize());
    }
    payload.WithArray("associatedSystems", std::move(associatedSystemsJsonList));
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  if (m_permissionModelHasBeenSet) {
    payload.WithObject("permissionModel", m_permissionModel.Jsonize());
  }

  if (m_dependencyDiscoveryHasBeenSet) {
    payload.WithObject("dependencyDiscovery", m_dependencyDiscovery.Jsonize());
  }

  if (m_effectivePolicyValuesHasBeenSet) {
    payload.WithObject("effectivePolicyValues", m_effectivePolicyValues.Jsonize());
  }

  if (m_achievabilityHasBeenSet) {
    payload.WithObject("achievability", m_achievability.Jsonize());
  }

  if (m_reportConfigurationHasBeenSet) {
    payload.WithObject("reportConfiguration", m_reportConfiguration.Jsonize());
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_estimatedAssessmentCostHasBeenSet) {
    payload.WithObject("estimatedAssessmentCost", m_estimatedAssessmentCost.Jsonize());
  }

  if (m_resourceDiscoveryHasBeenSet) {
    payload.WithObject("resourceDiscovery", m_resourceDiscovery.Jsonize());
  }

  if (m_assessmentStatusHasBeenSet) {
    payload.WithString("assessmentStatus", AssessmentStatusMapper::GetNameForAssessmentStatus(m_assessmentStatus));
  }

  if (m_rerunAssessmentHasBeenSet) {
    payload.WithBool("rerunAssessment", m_rerunAssessment);
  }

  if (m_openFindingsCountHasBeenSet) {
    payload.WithInteger("openFindingsCount", m_openFindingsCount);
  }

  if (m_resolvedFindingsCountHasBeenSet) {
    payload.WithInteger("resolvedFindingsCount", m_resolvedFindingsCount);
  }

  if (m_organizationIdHasBeenSet) {
    payload.WithString("organizationId", m_organizationId);
  }

  if (m_ouIdHasBeenSet) {
    payload.WithString("ouId", m_ouId);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
