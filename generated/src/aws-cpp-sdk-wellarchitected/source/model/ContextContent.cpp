/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/ContextContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

ContextContent::ContextContent(JsonView jsonValue) { *this = jsonValue; }

ContextContent& ContextContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountIds")) {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("accountIds");
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsServices")) {
    Aws::Utils::Array<JsonView> awsServicesJsonList = jsonValue.GetArray("awsServices");
    for (unsigned awsServicesIndex = 0; awsServicesIndex < awsServicesJsonList.GetLength(); ++awsServicesIndex) {
      m_awsServices.push_back(awsServicesJsonList[awsServicesIndex].AsString());
    }
    m_awsServicesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceTypes")) {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("resourceTypes");
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      m_resourceTypes.push_back(resourceTypesJsonList[resourceTypesIndex].AsString());
    }
    m_resourceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceTags")) {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("resourceTags");
    for (unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex) {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
    m_resourceTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationOverview")) {
    m_applicationOverview = jsonValue.GetString("applicationOverview");
    m_applicationOverviewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("industry")) {
    m_industry = jsonValue.GetString("industry");
    m_industryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationType")) {
    m_applicationType = ApplicationTypeMapper::GetApplicationTypeForName(jsonValue.GetString("applicationType"));
    m_applicationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("criticality")) {
    m_criticality = CriticalityMapper::GetCriticalityForName(jsonValue.GetString("criticality"));
    m_criticalityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("architectureOverview")) {
    m_architectureOverview = jsonValue.GetString("architectureOverview");
    m_architectureOverviewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalContext")) {
    m_additionalContext = jsonValue.GetString("additionalContext");
    m_additionalContextHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextContent::Jsonize() const {
  JsonValue payload;

  if (m_accountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
    }
    payload.WithArray("accountIds", std::move(accountIdsJsonList));
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  if (m_awsServicesHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsServicesJsonList(m_awsServices.size());
    for (unsigned awsServicesIndex = 0; awsServicesIndex < awsServicesJsonList.GetLength(); ++awsServicesIndex) {
      awsServicesJsonList[awsServicesIndex].AsString(m_awsServices[awsServicesIndex]);
    }
    payload.WithArray("awsServices", std::move(awsServicesJsonList));
  }

  if (m_resourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      resourceTypesJsonList[resourceTypesIndex].AsString(m_resourceTypes[resourceTypesIndex]);
    }
    payload.WithArray("resourceTypes", std::move(resourceTypesJsonList));
  }

  if (m_resourceTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
    for (unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex) {
      resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
    }
    payload.WithArray("resourceTags", std::move(resourceTagsJsonList));
  }

  if (m_applicationOverviewHasBeenSet) {
    payload.WithString("applicationOverview", m_applicationOverview);
  }

  if (m_industryHasBeenSet) {
    payload.WithString("industry", m_industry);
  }

  if (m_applicationTypeHasBeenSet) {
    payload.WithString("applicationType", ApplicationTypeMapper::GetNameForApplicationType(m_applicationType));
  }

  if (m_criticalityHasBeenSet) {
    payload.WithString("criticality", CriticalityMapper::GetNameForCriticality(m_criticality));
  }

  if (m_architectureOverviewHasBeenSet) {
    payload.WithString("architectureOverview", m_architectureOverview);
  }

  if (m_additionalContextHasBeenSet) {
    payload.WithString("additionalContext", m_additionalContext);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
