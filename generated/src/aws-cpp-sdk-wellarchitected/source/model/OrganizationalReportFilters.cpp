/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/OrganizationalReportFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

OrganizationalReportFilters::OrganizationalReportFilters(JsonView jsonValue) { *this = jsonValue; }

OrganizationalReportFilters& OrganizationalReportFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountIds")) {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("accountIds");
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationalUnitIds")) {
    Aws::Utils::Array<JsonView> organizationalUnitIdsJsonList = jsonValue.GetArray("organizationalUnitIds");
    for (unsigned organizationalUnitIdsIndex = 0; organizationalUnitIdsIndex < organizationalUnitIdsJsonList.GetLength();
         ++organizationalUnitIdsIndex) {
      m_organizationalUnitIds.push_back(organizationalUnitIdsJsonList[organizationalUnitIdsIndex].AsString());
    }
    m_organizationalUnitIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pillars")) {
    Aws::Utils::Array<JsonView> pillarsJsonList = jsonValue.GetArray("pillars");
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      m_pillars.push_back(PillarMapper::GetPillarForName(pillarsJsonList[pillarsIndex].AsString()));
    }
    m_pillarsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendationTypes")) {
    Aws::Utils::Array<JsonView> recommendationTypesJsonList = jsonValue.GetArray("recommendationTypes");
    for (unsigned recommendationTypesIndex = 0; recommendationTypesIndex < recommendationTypesJsonList.GetLength();
         ++recommendationTypesIndex) {
      m_recommendationTypes.push_back(
          RecommendationTypeMapper::GetRecommendationTypeForName(recommendationTypesJsonList[recommendationTypesIndex].AsString()));
    }
    m_recommendationTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statuses")) {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("statuses");
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      m_statuses.push_back(RecommendationStatusMapper::GetRecommendationStatusForName(statusesJsonList[statusesIndex].AsString()));
    }
    m_statusesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priorities")) {
    Aws::Utils::Array<JsonView> prioritiesJsonList = jsonValue.GetArray("priorities");
    for (unsigned prioritiesIndex = 0; prioritiesIndex < prioritiesJsonList.GetLength(); ++prioritiesIndex) {
      m_priorities.push_back(PriorityMapper::GetPriorityForName(prioritiesJsonList[prioritiesIndex].AsString()));
    }
    m_prioritiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAtRange")) {
    m_createdAtRange = jsonValue.GetObject("createdAtRange");
    m_createdAtRangeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAtRange")) {
    m_updatedAtRange = jsonValue.GetObject("updatedAtRange");
    m_updatedAtRangeHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationalReportFilters::Jsonize() const {
  JsonValue payload;

  if (m_accountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
    }
    payload.WithArray("accountIds", std::move(accountIdsJsonList));
  }

  if (m_organizationalUnitIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> organizationalUnitIdsJsonList(m_organizationalUnitIds.size());
    for (unsigned organizationalUnitIdsIndex = 0; organizationalUnitIdsIndex < organizationalUnitIdsJsonList.GetLength();
         ++organizationalUnitIdsIndex) {
      organizationalUnitIdsJsonList[organizationalUnitIdsIndex].AsString(m_organizationalUnitIds[organizationalUnitIdsIndex]);
    }
    payload.WithArray("organizationalUnitIds", std::move(organizationalUnitIdsJsonList));
  }

  if (m_pillarsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pillarsJsonList(m_pillars.size());
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      pillarsJsonList[pillarsIndex].AsString(PillarMapper::GetNameForPillar(m_pillars[pillarsIndex]));
    }
    payload.WithArray("pillars", std::move(pillarsJsonList));
  }

  if (m_recommendationTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> recommendationTypesJsonList(m_recommendationTypes.size());
    for (unsigned recommendationTypesIndex = 0; recommendationTypesIndex < recommendationTypesJsonList.GetLength();
         ++recommendationTypesIndex) {
      recommendationTypesJsonList[recommendationTypesIndex].AsString(
          RecommendationTypeMapper::GetNameForRecommendationType(m_recommendationTypes[recommendationTypesIndex]));
    }
    payload.WithArray("recommendationTypes", std::move(recommendationTypesJsonList));
  }

  if (m_statusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      statusesJsonList[statusesIndex].AsString(RecommendationStatusMapper::GetNameForRecommendationStatus(m_statuses[statusesIndex]));
    }
    payload.WithArray("statuses", std::move(statusesJsonList));
  }

  if (m_prioritiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> prioritiesJsonList(m_priorities.size());
    for (unsigned prioritiesIndex = 0; prioritiesIndex < prioritiesJsonList.GetLength(); ++prioritiesIndex) {
      prioritiesJsonList[prioritiesIndex].AsString(PriorityMapper::GetNameForPriority(m_priorities[prioritiesIndex]));
    }
    payload.WithArray("priorities", std::move(prioritiesJsonList));
  }

  if (m_createdAtRangeHasBeenSet) {
    payload.WithObject("createdAtRange", m_createdAtRange.Jsonize());
  }

  if (m_updatedAtRangeHasBeenSet) {
    payload.WithObject("updatedAtRange", m_updatedAtRange.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
