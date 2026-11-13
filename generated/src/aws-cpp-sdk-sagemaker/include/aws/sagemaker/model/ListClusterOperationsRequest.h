/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterOperationSortBy.h>
#include <aws/sagemaker/model/ClusterOperationStatus.h>
#include <aws/sagemaker/model/ClusterOperationType.h>
#include <aws/sagemaker/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class ListClusterOperationsRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API ListClusterOperationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListClusterOperations"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the HyperPod cluster for which to
   * list operations.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  ListClusterOperationsRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation status to filter by. If specified, only operations with this
   * status are returned. Valid values are <code>InProgress</code>,
   * <code>Superseded</code>, or <code>Done</code>.</p>
   */
  inline ClusterOperationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ClusterOperationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListClusterOperationsRequest& WithStatus(ClusterOperationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation type to filter by. If specified, only operations of this type
   * are returned. Valid values are <code>Scaling</code> or
   * <code>DeepHealthCheck</code>.</p>
   */
  inline ClusterOperationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ClusterOperationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ListClusterOperationsRequest& WithType(ClusterOperationType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the time range for filtering operations. Only operations created
   * after this time are included in the results.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
  inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
  template <typename CreationTimeAfterT = Aws::Utils::DateTime>
  void SetCreationTimeAfter(CreationTimeAfterT&& value) {
    m_creationTimeAfterHasBeenSet = true;
    m_creationTimeAfter = std::forward<CreationTimeAfterT>(value);
  }
  template <typename CreationTimeAfterT = Aws::Utils::DateTime>
  ListClusterOperationsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) {
    SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time range for filtering operations. Only operations created
   * before this time are included in the results.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
  inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
  template <typename CreationTimeBeforeT = Aws::Utils::DateTime>
  void SetCreationTimeBefore(CreationTimeBeforeT&& value) {
    m_creationTimeBeforeHasBeenSet = true;
    m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value);
  }
  template <typename CreationTimeBeforeT = Aws::Utils::DateTime>
  ListClusterOperationsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) {
    SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to use for sorting the operation list. Currently, the only
   * supported value is <code>CreationTime</code>.</p>
   */
  inline ClusterOperationSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(ClusterOperationSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListClusterOperationsRequest& WithSortBy(ClusterOperationSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order in which to sort the results. Valid values are
   * <code>Ascending</code> or <code>Descending</code> (the default is
   * <code>Descending</code>).</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListClusterOperationsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of operations to return in the response. Valid range is 1
   * to 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListClusterOperationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to retrieve the next set of results. This token is obtained from the
   * output of a previous <code>ListClusterOperations</code> call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListClusterOperationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  ClusterOperationStatus m_status{ClusterOperationStatus::NOT_SET};

  ClusterOperationType m_type{ClusterOperationType::NOT_SET};

  Aws::Utils::DateTime m_creationTimeAfter{};

  Aws::Utils::DateTime m_creationTimeBefore{};

  ClusterOperationSortBy m_sortBy{ClusterOperationSortBy::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_clusterNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_creationTimeAfterHasBeenSet = false;
  bool m_creationTimeBeforeHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
