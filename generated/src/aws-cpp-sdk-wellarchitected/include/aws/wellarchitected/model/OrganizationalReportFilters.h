/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/Pillar.h>
#include <aws/wellarchitected/model/Priority.h>
#include <aws/wellarchitected/model/RecommendationStatus.h>
#include <aws/wellarchitected/model/RecommendationType.h>
#include <aws/wellarchitected/model/TimeWindow.h>

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
 * <p>Filters narrowing the scope of an Organizational Report. Every member is
 * optional. An absent or empty member places no constraint on that dimension. When
 * the entire structure is absent, the report covers every account and every
 * recommendation in the organization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/OrganizationalReportFilters">AWS
 * API Reference</a></p>
 */
class OrganizationalReportFilters {
 public:
  AWS_WELLARCHITECTED_API OrganizationalReportFilters() = default;
  AWS_WELLARCHITECTED_API OrganizationalReportFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API OrganizationalReportFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>AWS account IDs to include in the report. Absent or empty means all accounts
   * in the organization are in scope. Each supplied account is validated against AWS
   * Organizations membership. Accounts that do not belong to the caller's
   * organization are excluded and recorded on the report's coverage summary.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  OrganizationalReportFilters& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  OrganizationalReportFilters& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS Organizational Unit IDs whose member accounts are included in the report.
   * Absent or empty means no OU-based scoping is applied. Account and OU filters
   * combine as a union.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const { return m_organizationalUnitIds; }
  inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }
  template <typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
  void SetOrganizationalUnitIds(OrganizationalUnitIdsT&& value) {
    m_organizationalUnitIdsHasBeenSet = true;
    m_organizationalUnitIds = std::forward<OrganizationalUnitIdsT>(value);
  }
  template <typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
  OrganizationalReportFilters& WithOrganizationalUnitIds(OrganizationalUnitIdsT&& value) {
    SetOrganizationalUnitIds(std::forward<OrganizationalUnitIdsT>(value));
    return *this;
  }
  template <typename OrganizationalUnitIdsT = Aws::String>
  OrganizationalReportFilters& AddOrganizationalUnitIds(OrganizationalUnitIdsT&& value) {
    m_organizationalUnitIdsHasBeenSet = true;
    m_organizationalUnitIds.emplace_back(std::forward<OrganizationalUnitIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Well-Architected pillars to include. Absent or empty means all pillars.</p>
   */
  inline const Aws::Vector<Pillar>& GetPillars() const { return m_pillars; }
  inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
  template <typename PillarsT = Aws::Vector<Pillar>>
  void SetPillars(PillarsT&& value) {
    m_pillarsHasBeenSet = true;
    m_pillars = std::forward<PillarsT>(value);
  }
  template <typename PillarsT = Aws::Vector<Pillar>>
  OrganizationalReportFilters& WithPillars(PillarsT&& value) {
    SetPillars(std::forward<PillarsT>(value));
    return *this;
  }
  inline OrganizationalReportFilters& AddPillars(Pillar value) {
    m_pillarsHasBeenSet = true;
    m_pillars.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Recommendation types (RESOURCE, ARCHITECTURE, APPLICATION) to include. Absent
   * or empty means all types.</p>
   */
  inline const Aws::Vector<RecommendationType>& GetRecommendationTypes() const { return m_recommendationTypes; }
  inline bool RecommendationTypesHasBeenSet() const { return m_recommendationTypesHasBeenSet; }
  template <typename RecommendationTypesT = Aws::Vector<RecommendationType>>
  void SetRecommendationTypes(RecommendationTypesT&& value) {
    m_recommendationTypesHasBeenSet = true;
    m_recommendationTypes = std::forward<RecommendationTypesT>(value);
  }
  template <typename RecommendationTypesT = Aws::Vector<RecommendationType>>
  OrganizationalReportFilters& WithRecommendationTypes(RecommendationTypesT&& value) {
    SetRecommendationTypes(std::forward<RecommendationTypesT>(value));
    return *this;
  }
  inline OrganizationalReportFilters& AddRecommendationTypes(RecommendationType value) {
    m_recommendationTypesHasBeenSet = true;
    m_recommendationTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Recommendation statuses (ACTIVE, SUPPRESSED, COMPLETED) to include. Absent or
   * empty means all statuses.</p>
   */
  inline const Aws::Vector<RecommendationStatus>& GetStatuses() const { return m_statuses; }
  inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
  template <typename StatusesT = Aws::Vector<RecommendationStatus>>
  void SetStatuses(StatusesT&& value) {
    m_statusesHasBeenSet = true;
    m_statuses = std::forward<StatusesT>(value);
  }
  template <typename StatusesT = Aws::Vector<RecommendationStatus>>
  OrganizationalReportFilters& WithStatuses(StatusesT&& value) {
    SetStatuses(std::forward<StatusesT>(value));
    return *this;
  }
  inline OrganizationalReportFilters& AddStatuses(RecommendationStatus value) {
    m_statusesHasBeenSet = true;
    m_statuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Recommendation priorities (HIGH, MEDIUM, LOW) to include. Absent or empty
   * means all priorities.</p>
   */
  inline const Aws::Vector<Priority>& GetPriorities() const { return m_priorities; }
  inline bool PrioritiesHasBeenSet() const { return m_prioritiesHasBeenSet; }
  template <typename PrioritiesT = Aws::Vector<Priority>>
  void SetPriorities(PrioritiesT&& value) {
    m_prioritiesHasBeenSet = true;
    m_priorities = std::forward<PrioritiesT>(value);
  }
  template <typename PrioritiesT = Aws::Vector<Priority>>
  OrganizationalReportFilters& WithPriorities(PrioritiesT&& value) {
    SetPriorities(std::forward<PrioritiesT>(value));
    return *this;
  }
  inline OrganizationalReportFilters& AddPriorities(Priority value) {
    m_prioritiesHasBeenSet = true;
    m_priorities.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive window on recommendation creation time. Absent means no lower or
   * upper bound on createdAt.</p>
   */
  inline const TimeWindow& GetCreatedAtRange() const { return m_createdAtRange; }
  inline bool CreatedAtRangeHasBeenSet() const { return m_createdAtRangeHasBeenSet; }
  template <typename CreatedAtRangeT = TimeWindow>
  void SetCreatedAtRange(CreatedAtRangeT&& value) {
    m_createdAtRangeHasBeenSet = true;
    m_createdAtRange = std::forward<CreatedAtRangeT>(value);
  }
  template <typename CreatedAtRangeT = TimeWindow>
  OrganizationalReportFilters& WithCreatedAtRange(CreatedAtRangeT&& value) {
    SetCreatedAtRange(std::forward<CreatedAtRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive window on recommendation last-updated time. Absent means no lower
   * or upper bound on updatedAt.</p>
   */
  inline const TimeWindow& GetUpdatedAtRange() const { return m_updatedAtRange; }
  inline bool UpdatedAtRangeHasBeenSet() const { return m_updatedAtRangeHasBeenSet; }
  template <typename UpdatedAtRangeT = TimeWindow>
  void SetUpdatedAtRange(UpdatedAtRangeT&& value) {
    m_updatedAtRangeHasBeenSet = true;
    m_updatedAtRange = std::forward<UpdatedAtRangeT>(value);
  }
  template <typename UpdatedAtRangeT = TimeWindow>
  OrganizationalReportFilters& WithUpdatedAtRange(UpdatedAtRangeT&& value) {
    SetUpdatedAtRange(std::forward<UpdatedAtRangeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_accountIds;

  Aws::Vector<Aws::String> m_organizationalUnitIds;

  Aws::Vector<Pillar> m_pillars;

  Aws::Vector<RecommendationType> m_recommendationTypes;

  Aws::Vector<RecommendationStatus> m_statuses;

  Aws::Vector<Priority> m_priorities;

  TimeWindow m_createdAtRange;

  TimeWindow m_updatedAtRange;
  bool m_accountIdsHasBeenSet = false;
  bool m_organizationalUnitIdsHasBeenSet = false;
  bool m_pillarsHasBeenSet = false;
  bool m_recommendationTypesHasBeenSet = false;
  bool m_statusesHasBeenSet = false;
  bool m_prioritiesHasBeenSet = false;
  bool m_createdAtRangeHasBeenSet = false;
  bool m_updatedAtRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
