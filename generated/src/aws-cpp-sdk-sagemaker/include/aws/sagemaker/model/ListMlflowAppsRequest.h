/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AccountDefaultStatus.h>
#include <aws/sagemaker/model/MlflowAppStatus.h>
#include <aws/sagemaker/model/SortMlflowAppBy.h>
#include <aws/sagemaker/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class ListMlflowAppsRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API ListMlflowAppsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListMlflowApps"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Use the <code>CreatedAfter</code> filter to only list MLflow Apps created
   * after a specific date and time. Listed MLflow Apps are shown with a date and
   * time such as <code>"2024-03-16T01:46:56+00:00"</code>. The
   * <code>CreatedAfter</code> parameter takes in a Unix timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
  inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
  template <typename CreatedAfterT = Aws::Utils::DateTime>
  void SetCreatedAfter(CreatedAfterT&& value) {
    m_createdAfterHasBeenSet = true;
    m_createdAfter = std::forward<CreatedAfterT>(value);
  }
  template <typename CreatedAfterT = Aws::Utils::DateTime>
  ListMlflowAppsRequest& WithCreatedAfter(CreatedAfterT&& value) {
    SetCreatedAfter(std::forward<CreatedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use the <code>CreatedBefore</code> filter to only list MLflow Apps created
   * before a specific date and time. Listed MLflow Apps are shown with a date and
   * time such as <code>"2024-03-16T01:46:56+00:00"</code>. The
   * <code>CreatedAfter</code> parameter takes in a Unix timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
  inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
  template <typename CreatedBeforeT = Aws::Utils::DateTime>
  void SetCreatedBefore(CreatedBeforeT&& value) {
    m_createdBeforeHasBeenSet = true;
    m_createdBefore = std::forward<CreatedBeforeT>(value);
  }
  template <typename CreatedBeforeT = Aws::Utils::DateTime>
  ListMlflowAppsRequest& WithCreatedBefore(CreatedBeforeT&& value) {
    SetCreatedBefore(std::forward<CreatedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter for Mlflow apps with a specific creation status.</p>
   */
  inline MlflowAppStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(MlflowAppStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListMlflowAppsRequest& WithStatus(MlflowAppStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter for Mlflow Apps with the specified version.</p>
   */
  inline const Aws::String& GetMlflowVersion() const { return m_mlflowVersion; }
  inline bool MlflowVersionHasBeenSet() const { return m_mlflowVersionHasBeenSet; }
  template <typename MlflowVersionT = Aws::String>
  void SetMlflowVersion(MlflowVersionT&& value) {
    m_mlflowVersionHasBeenSet = true;
    m_mlflowVersion = std::forward<MlflowVersionT>(value);
  }
  template <typename MlflowVersionT = Aws::String>
  ListMlflowAppsRequest& WithMlflowVersion(MlflowVersionT&& value) {
    SetMlflowVersion(std::forward<MlflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter for MLflow Apps with the specified default SageMaker Domain ID.</p>
   */
  inline const Aws::String& GetDefaultForDomainId() const { return m_defaultForDomainId; }
  inline bool DefaultForDomainIdHasBeenSet() const { return m_defaultForDomainIdHasBeenSet; }
  template <typename DefaultForDomainIdT = Aws::String>
  void SetDefaultForDomainId(DefaultForDomainIdT&& value) {
    m_defaultForDomainIdHasBeenSet = true;
    m_defaultForDomainId = std::forward<DefaultForDomainIdT>(value);
  }
  template <typename DefaultForDomainIdT = Aws::String>
  ListMlflowAppsRequest& WithDefaultForDomainId(DefaultForDomainIdT&& value) {
    SetDefaultForDomainId(std::forward<DefaultForDomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter for MLflow Apps with the specified
   * <code>AccountDefaultStatus</code>.</p>
   */
  inline AccountDefaultStatus GetAccountDefaultStatus() const { return m_accountDefaultStatus; }
  inline bool AccountDefaultStatusHasBeenSet() const { return m_accountDefaultStatusHasBeenSet; }
  inline void SetAccountDefaultStatus(AccountDefaultStatus value) {
    m_accountDefaultStatusHasBeenSet = true;
    m_accountDefaultStatus = value;
  }
  inline ListMlflowAppsRequest& WithAccountDefaultStatus(AccountDefaultStatus value) {
    SetAccountDefaultStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter for MLflow Apps sorting by name, creation time, or creation
   * status.</p>
   */
  inline SortMlflowAppBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(SortMlflowAppBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListMlflowAppsRequest& WithSortBy(SortMlflowAppBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Change the order of the listed MLflow Apps. By default, MLflow Apps are
   * listed in <code>Descending</code> order by creation time. To change the list
   * order, specify <code>SortOrder</code> to be <code>Ascending</code>.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListMlflowAppsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the previous response was truncated, use this token in your next request
   * to receive the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMlflowAppsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of MLflow Apps to list.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListMlflowAppsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_createdAfter{};
  bool m_createdAfterHasBeenSet = false;

  Aws::Utils::DateTime m_createdBefore{};
  bool m_createdBeforeHasBeenSet = false;

  MlflowAppStatus m_status{MlflowAppStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_mlflowVersion;
  bool m_mlflowVersionHasBeenSet = false;

  Aws::String m_defaultForDomainId;
  bool m_defaultForDomainIdHasBeenSet = false;

  AccountDefaultStatus m_accountDefaultStatus{AccountDefaultStatus::NOT_SET};
  bool m_accountDefaultStatusHasBeenSet = false;

  SortMlflowAppBy m_sortBy{SortMlflowAppBy::NOT_SET};
  bool m_sortByHasBeenSet = false;

  SortOrder m_sortOrder{SortOrder::NOT_SET};
  bool m_sortOrderHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
