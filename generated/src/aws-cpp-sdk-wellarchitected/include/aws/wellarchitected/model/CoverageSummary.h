/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/FailedAccount.h>
#include <aws/wellarchitected/model/FailedOrganizationalUnit.h>
#include <aws/wellarchitected/model/PillarCount.h>
#include <aws/wellarchitected/model/PriorityCount.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>Counts describing the coverage of a completed Organizational Report. Includes
 * the number of accounts in scope, how many had a profile, how many failed, and
 * aggregated recommendation counts by pillar and priority. Returned only by
 * GetAgentOrganizationalReport after the report reaches COMPLETED status. Not
 * returned on the list response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CoverageSummary">AWS
 * API Reference</a></p>
 */
class CoverageSummary {
 public:
  AWS_WELLARCHITECTED_API CoverageSummary() = default;
  AWS_WELLARCHITECTED_API CoverageSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API CoverageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Total number of accounts that were in scope for the report after applying all
   * filters and AWS Organizations membership validation.</p>
   */
  inline long long GetTotalAccountsInScope() const { return m_totalAccountsInScope; }
  inline bool TotalAccountsInScopeHasBeenSet() const { return m_totalAccountsInScopeHasBeenSet; }
  inline void SetTotalAccountsInScope(long long value) {
    m_totalAccountsInScopeHasBeenSet = true;
    m_totalAccountsInScope = value;
  }
  inline CoverageSummary& WithTotalAccountsInScope(long long value) {
    SetTotalAccountsInScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of in-scope accounts that had an Agent Profile and were successfully
   * processed.</p>
   */
  inline long long GetAccountsWithProfile() const { return m_accountsWithProfile; }
  inline bool AccountsWithProfileHasBeenSet() const { return m_accountsWithProfileHasBeenSet; }
  inline void SetAccountsWithProfile(long long value) {
    m_accountsWithProfileHasBeenSet = true;
    m_accountsWithProfile = value;
  }
  inline CoverageSummary& WithAccountsWithProfile(long long value) {
    SetAccountsWithProfile(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of in-scope accounts that had no Agent Profile at the time of the
   * snapshot.</p>
   */
  inline long long GetAccountsWithoutProfile() const { return m_accountsWithoutProfile; }
  inline bool AccountsWithoutProfileHasBeenSet() const { return m_accountsWithoutProfileHasBeenSet; }
  inline void SetAccountsWithoutProfile(long long value) {
    m_accountsWithoutProfileHasBeenSet = true;
    m_accountsWithoutProfile = value;
  }
  inline CoverageSummary& WithAccountsWithoutProfile(long long value) {
    SetAccountsWithoutProfile(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of in-scope accounts that errored during processing. Equal to the
   * length of failedAccounts.</p>
   */
  inline long long GetFailedAccountCount() const { return m_failedAccountCount; }
  inline bool FailedAccountCountHasBeenSet() const { return m_failedAccountCountHasBeenSet; }
  inline void SetFailedAccountCount(long long value) {
    m_failedAccountCountHasBeenSet = true;
    m_failedAccountCount = value;
  }
  inline CoverageSummary& WithFailedAccountCount(long long value) {
    SetFailedAccountCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total number of Agent Profiles contributing to the report.</p>
   */
  inline long long GetTotalProfiles() const { return m_totalProfiles; }
  inline bool TotalProfilesHasBeenSet() const { return m_totalProfilesHasBeenSet; }
  inline void SetTotalProfiles(long long value) {
    m_totalProfilesHasBeenSet = true;
    m_totalProfiles = value;
  }
  inline CoverageSummary& WithTotalProfiles(long long value) {
    SetTotalProfiles(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total number of recommendations included in the report across all profiles
   * and all pillars.</p>
   */
  inline long long GetTotalRecommendations() const { return m_totalRecommendations; }
  inline bool TotalRecommendationsHasBeenSet() const { return m_totalRecommendationsHasBeenSet; }
  inline void SetTotalRecommendations(long long value) {
    m_totalRecommendationsHasBeenSet = true;
    m_totalRecommendations = value;
  }
  inline CoverageSummary& WithTotalRecommendations(long long value) {
    SetTotalRecommendations(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Recommendation count grouped by Well-Architected pillar. Each entry pairs a
   * Pillar enum value with a non-negative long. The counts sum to
   * totalRecommendations.</p>
   */
  inline const Aws::Vector<PillarCount>& GetRecommendationCountByPillar() const { return m_recommendationCountByPillar; }
  inline bool RecommendationCountByPillarHasBeenSet() const { return m_recommendationCountByPillarHasBeenSet; }
  template <typename RecommendationCountByPillarT = Aws::Vector<PillarCount>>
  void SetRecommendationCountByPillar(RecommendationCountByPillarT&& value) {
    m_recommendationCountByPillarHasBeenSet = true;
    m_recommendationCountByPillar = std::forward<RecommendationCountByPillarT>(value);
  }
  template <typename RecommendationCountByPillarT = Aws::Vector<PillarCount>>
  CoverageSummary& WithRecommendationCountByPillar(RecommendationCountByPillarT&& value) {
    SetRecommendationCountByPillar(std::forward<RecommendationCountByPillarT>(value));
    return *this;
  }
  template <typename RecommendationCountByPillarT = PillarCount>
  CoverageSummary& AddRecommendationCountByPillar(RecommendationCountByPillarT&& value) {
    m_recommendationCountByPillarHasBeenSet = true;
    m_recommendationCountByPillar.emplace_back(std::forward<RecommendationCountByPillarT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Recommendation count grouped by Priority. Each entry pairs a Priority enum
   * value with a non-negative long. The counts sum to totalRecommendations.</p>
   */
  inline const Aws::Vector<PriorityCount>& GetRecommendationCountByPriority() const { return m_recommendationCountByPriority; }
  inline bool RecommendationCountByPriorityHasBeenSet() const { return m_recommendationCountByPriorityHasBeenSet; }
  template <typename RecommendationCountByPriorityT = Aws::Vector<PriorityCount>>
  void SetRecommendationCountByPriority(RecommendationCountByPriorityT&& value) {
    m_recommendationCountByPriorityHasBeenSet = true;
    m_recommendationCountByPriority = std::forward<RecommendationCountByPriorityT>(value);
  }
  template <typename RecommendationCountByPriorityT = Aws::Vector<PriorityCount>>
  CoverageSummary& WithRecommendationCountByPriority(RecommendationCountByPriorityT&& value) {
    SetRecommendationCountByPriority(std::forward<RecommendationCountByPriorityT>(value));
    return *this;
  }
  template <typename RecommendationCountByPriorityT = PriorityCount>
  CoverageSummary& AddRecommendationCountByPriority(RecommendationCountByPriorityT&& value) {
    m_recommendationCountByPriorityHasBeenSet = true;
    m_recommendationCountByPriority.emplace_back(std::forward<RecommendationCountByPriorityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Accounts that errored during processing and the reason they failed.</p>
   */
  inline const Aws::Vector<FailedAccount>& GetFailedAccounts() const { return m_failedAccounts; }
  inline bool FailedAccountsHasBeenSet() const { return m_failedAccountsHasBeenSet; }
  template <typename FailedAccountsT = Aws::Vector<FailedAccount>>
  void SetFailedAccounts(FailedAccountsT&& value) {
    m_failedAccountsHasBeenSet = true;
    m_failedAccounts = std::forward<FailedAccountsT>(value);
  }
  template <typename FailedAccountsT = Aws::Vector<FailedAccount>>
  CoverageSummary& WithFailedAccounts(FailedAccountsT&& value) {
    SetFailedAccounts(std::forward<FailedAccountsT>(value));
    return *this;
  }
  template <typename FailedAccountsT = FailedAccount>
  CoverageSummary& AddFailedAccounts(FailedAccountsT&& value) {
    m_failedAccountsHasBeenSet = true;
    m_failedAccounts.emplace_back(std::forward<FailedAccountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Organizational units named in the report's filters that could not be expanded
   * into their member accounts, along with the reason each failed. A failed OU means
   * the report is missing whatever accounts it contained. Absent or empty when every
   * requested OU expanded successfully.</p>
   */
  inline const Aws::Vector<FailedOrganizationalUnit>& GetFailedOrganizationalUnits() const { return m_failedOrganizationalUnits; }
  inline bool FailedOrganizationalUnitsHasBeenSet() const { return m_failedOrganizationalUnitsHasBeenSet; }
  template <typename FailedOrganizationalUnitsT = Aws::Vector<FailedOrganizationalUnit>>
  void SetFailedOrganizationalUnits(FailedOrganizationalUnitsT&& value) {
    m_failedOrganizationalUnitsHasBeenSet = true;
    m_failedOrganizationalUnits = std::forward<FailedOrganizationalUnitsT>(value);
  }
  template <typename FailedOrganizationalUnitsT = Aws::Vector<FailedOrganizationalUnit>>
  CoverageSummary& WithFailedOrganizationalUnits(FailedOrganizationalUnitsT&& value) {
    SetFailedOrganizationalUnits(std::forward<FailedOrganizationalUnitsT>(value));
    return *this;
  }
  template <typename FailedOrganizationalUnitsT = FailedOrganizationalUnit>
  CoverageSummary& AddFailedOrganizationalUnits(FailedOrganizationalUnitsT&& value) {
    m_failedOrganizationalUnitsHasBeenSet = true;
    m_failedOrganizationalUnits.emplace_back(std::forward<FailedOrganizationalUnitsT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_totalAccountsInScope{0};

  long long m_accountsWithProfile{0};

  long long m_accountsWithoutProfile{0};

  long long m_failedAccountCount{0};

  long long m_totalProfiles{0};

  long long m_totalRecommendations{0};

  Aws::Vector<PillarCount> m_recommendationCountByPillar;

  Aws::Vector<PriorityCount> m_recommendationCountByPriority;

  Aws::Vector<FailedAccount> m_failedAccounts;

  Aws::Vector<FailedOrganizationalUnit> m_failedOrganizationalUnits;
  bool m_totalAccountsInScopeHasBeenSet = false;
  bool m_accountsWithProfileHasBeenSet = false;
  bool m_accountsWithoutProfileHasBeenSet = false;
  bool m_failedAccountCountHasBeenSet = false;
  bool m_totalProfilesHasBeenSet = false;
  bool m_totalRecommendationsHasBeenSet = false;
  bool m_recommendationCountByPillarHasBeenSet = false;
  bool m_recommendationCountByPriorityHasBeenSet = false;
  bool m_failedAccountsHasBeenSet = false;
  bool m_failedOrganizationalUnitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
