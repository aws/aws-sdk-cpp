/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/CoverageSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

CoverageSummary::CoverageSummary(JsonView jsonValue) { *this = jsonValue; }

CoverageSummary& CoverageSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalAccountsInScope")) {
    m_totalAccountsInScope = jsonValue.GetInt64("totalAccountsInScope");
    m_totalAccountsInScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountsWithProfile")) {
    m_accountsWithProfile = jsonValue.GetInt64("accountsWithProfile");
    m_accountsWithProfileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountsWithoutProfile")) {
    m_accountsWithoutProfile = jsonValue.GetInt64("accountsWithoutProfile");
    m_accountsWithoutProfileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedAccountCount")) {
    m_failedAccountCount = jsonValue.GetInt64("failedAccountCount");
    m_failedAccountCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalProfiles")) {
    m_totalProfiles = jsonValue.GetInt64("totalProfiles");
    m_totalProfilesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalRecommendations")) {
    m_totalRecommendations = jsonValue.GetInt64("totalRecommendations");
    m_totalRecommendationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendationCountByPillar")) {
    Aws::Utils::Array<JsonView> recommendationCountByPillarJsonList = jsonValue.GetArray("recommendationCountByPillar");
    for (unsigned recommendationCountByPillarIndex = 0; recommendationCountByPillarIndex < recommendationCountByPillarJsonList.GetLength();
         ++recommendationCountByPillarIndex) {
      m_recommendationCountByPillar.push_back(recommendationCountByPillarJsonList[recommendationCountByPillarIndex].AsObject());
    }
    m_recommendationCountByPillarHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendationCountByPriority")) {
    Aws::Utils::Array<JsonView> recommendationCountByPriorityJsonList = jsonValue.GetArray("recommendationCountByPriority");
    for (unsigned recommendationCountByPriorityIndex = 0;
         recommendationCountByPriorityIndex < recommendationCountByPriorityJsonList.GetLength(); ++recommendationCountByPriorityIndex) {
      m_recommendationCountByPriority.push_back(recommendationCountByPriorityJsonList[recommendationCountByPriorityIndex].AsObject());
    }
    m_recommendationCountByPriorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedAccounts")) {
    Aws::Utils::Array<JsonView> failedAccountsJsonList = jsonValue.GetArray("failedAccounts");
    for (unsigned failedAccountsIndex = 0; failedAccountsIndex < failedAccountsJsonList.GetLength(); ++failedAccountsIndex) {
      m_failedAccounts.push_back(failedAccountsJsonList[failedAccountsIndex].AsObject());
    }
    m_failedAccountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedOrganizationalUnits")) {
    Aws::Utils::Array<JsonView> failedOrganizationalUnitsJsonList = jsonValue.GetArray("failedOrganizationalUnits");
    for (unsigned failedOrganizationalUnitsIndex = 0; failedOrganizationalUnitsIndex < failedOrganizationalUnitsJsonList.GetLength();
         ++failedOrganizationalUnitsIndex) {
      m_failedOrganizationalUnits.push_back(failedOrganizationalUnitsJsonList[failedOrganizationalUnitsIndex].AsObject());
    }
    m_failedOrganizationalUnitsHasBeenSet = true;
  }
  return *this;
}

JsonValue CoverageSummary::Jsonize() const {
  JsonValue payload;

  if (m_totalAccountsInScopeHasBeenSet) {
    payload.WithInt64("totalAccountsInScope", m_totalAccountsInScope);
  }

  if (m_accountsWithProfileHasBeenSet) {
    payload.WithInt64("accountsWithProfile", m_accountsWithProfile);
  }

  if (m_accountsWithoutProfileHasBeenSet) {
    payload.WithInt64("accountsWithoutProfile", m_accountsWithoutProfile);
  }

  if (m_failedAccountCountHasBeenSet) {
    payload.WithInt64("failedAccountCount", m_failedAccountCount);
  }

  if (m_totalProfilesHasBeenSet) {
    payload.WithInt64("totalProfiles", m_totalProfiles);
  }

  if (m_totalRecommendationsHasBeenSet) {
    payload.WithInt64("totalRecommendations", m_totalRecommendations);
  }

  if (m_recommendationCountByPillarHasBeenSet) {
    Aws::Utils::Array<JsonValue> recommendationCountByPillarJsonList(m_recommendationCountByPillar.size());
    for (unsigned recommendationCountByPillarIndex = 0; recommendationCountByPillarIndex < recommendationCountByPillarJsonList.GetLength();
         ++recommendationCountByPillarIndex) {
      recommendationCountByPillarJsonList[recommendationCountByPillarIndex].AsObject(
          m_recommendationCountByPillar[recommendationCountByPillarIndex].Jsonize());
    }
    payload.WithArray("recommendationCountByPillar", std::move(recommendationCountByPillarJsonList));
  }

  if (m_recommendationCountByPriorityHasBeenSet) {
    Aws::Utils::Array<JsonValue> recommendationCountByPriorityJsonList(m_recommendationCountByPriority.size());
    for (unsigned recommendationCountByPriorityIndex = 0;
         recommendationCountByPriorityIndex < recommendationCountByPriorityJsonList.GetLength(); ++recommendationCountByPriorityIndex) {
      recommendationCountByPriorityJsonList[recommendationCountByPriorityIndex].AsObject(
          m_recommendationCountByPriority[recommendationCountByPriorityIndex].Jsonize());
    }
    payload.WithArray("recommendationCountByPriority", std::move(recommendationCountByPriorityJsonList));
  }

  if (m_failedAccountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> failedAccountsJsonList(m_failedAccounts.size());
    for (unsigned failedAccountsIndex = 0; failedAccountsIndex < failedAccountsJsonList.GetLength(); ++failedAccountsIndex) {
      failedAccountsJsonList[failedAccountsIndex].AsObject(m_failedAccounts[failedAccountsIndex].Jsonize());
    }
    payload.WithArray("failedAccounts", std::move(failedAccountsJsonList));
  }

  if (m_failedOrganizationalUnitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> failedOrganizationalUnitsJsonList(m_failedOrganizationalUnits.size());
    for (unsigned failedOrganizationalUnitsIndex = 0; failedOrganizationalUnitsIndex < failedOrganizationalUnitsJsonList.GetLength();
         ++failedOrganizationalUnitsIndex) {
      failedOrganizationalUnitsJsonList[failedOrganizationalUnitsIndex].AsObject(
          m_failedOrganizationalUnits[failedOrganizationalUnitsIndex].Jsonize());
    }
    payload.WithArray("failedOrganizationalUnits", std::move(failedOrganizationalUnitsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
