/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceSummary::ServiceSummary(JsonView jsonValue) { *this = jsonValue; }

ServiceSummary& ServiceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedSystems")) {
    Aws::Utils::Array<JsonView> associatedSystemsJsonList = jsonValue.GetArray("associatedSystems");
    for (unsigned associatedSystemsIndex = 0; associatedSystemsIndex < associatedSystemsJsonList.GetLength(); ++associatedSystemsIndex) {
      m_associatedSystems.push_back(associatedSystemsJsonList[associatedSystemsIndex].AsObject());
    }
    m_associatedSystemsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyArn")) {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assessmentStatus")) {
    m_assessmentStatus = AssessmentStatusMapper::GetAssessmentStatusForName(jsonValue.GetString("assessmentStatus"));
    m_assessmentStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("openFindingsCount")) {
    m_openFindingsCount = jsonValue.GetInteger("openFindingsCount");
    m_openFindingsCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolvedFindingsCount")) {
    m_resolvedFindingsCount = jsonValue.GetInteger("resolvedFindingsCount");
    m_resolvedFindingsCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dependencyDiscovery")) {
    m_dependencyDiscovery = jsonValue.GetObject("dependencyDiscovery");
    m_dependencyDiscoveryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("achievability")) {
    m_achievability = jsonValue.GetObject("achievability");
    m_achievabilityHasBeenSet = true;
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

JsonValue ServiceSummary::Jsonize() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_associatedSystemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedSystemsJsonList(m_associatedSystems.size());
    for (unsigned associatedSystemsIndex = 0; associatedSystemsIndex < associatedSystemsJsonList.GetLength(); ++associatedSystemsIndex) {
      associatedSystemsJsonList[associatedSystemsIndex].AsObject(m_associatedSystems[associatedSystemsIndex].Jsonize());
    }
    payload.WithArray("associatedSystems", std::move(associatedSystemsJsonList));
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  if (m_assessmentStatusHasBeenSet) {
    payload.WithString("assessmentStatus", AssessmentStatusMapper::GetNameForAssessmentStatus(m_assessmentStatus));
  }

  if (m_openFindingsCountHasBeenSet) {
    payload.WithInteger("openFindingsCount", m_openFindingsCount);
  }

  if (m_resolvedFindingsCountHasBeenSet) {
    payload.WithInteger("resolvedFindingsCount", m_resolvedFindingsCount);
  }

  if (m_dependencyDiscoveryHasBeenSet) {
    payload.WithObject("dependencyDiscovery", m_dependencyDiscovery.Jsonize());
  }

  if (m_achievabilityHasBeenSet) {
    payload.WithObject("achievability", m_achievability.Jsonize());
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
