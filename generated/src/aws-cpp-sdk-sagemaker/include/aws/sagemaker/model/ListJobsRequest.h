/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/JobCategory.h>
#include <aws/sagemaker/model/JobStatus.h>
#include <aws/sagemaker/model/SortBy.h>
#include <aws/sagemaker/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class ListJobsRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API ListJobsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The category of jobs to list.</p>
   */
  inline JobCategory GetJobCategory() const { return m_jobCategory; }
  inline bool JobCategoryHasBeenSet() const { return m_jobCategoryHasBeenSet; }
  inline void SetJobCategory(JobCategory value) {
    m_jobCategoryHasBeenSet = true;
    m_jobCategory = value;
  }
  inline ListJobsRequest& WithJobCategory(JobCategory value) {
    SetJobCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the previous response was truncated, this token retrieves the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListJobsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of jobs to return in the response. The default value is
   * 50.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListJobsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns only jobs created after the specified time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
  inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
  template <typename CreationTimeAfterT = Aws::Utils::DateTime>
  void SetCreationTimeAfter(CreationTimeAfterT&& value) {
    m_creationTimeAfterHasBeenSet = true;
    m_creationTimeAfter = std::forward<CreationTimeAfterT>(value);
  }
  template <typename CreationTimeAfterT = Aws::Utils::DateTime>
  ListJobsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) {
    SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns only jobs created before the specified time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
  inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
  template <typename CreationTimeBeforeT = Aws::Utils::DateTime>
  void SetCreationTimeBefore(CreationTimeBeforeT&& value) {
    m_creationTimeBeforeHasBeenSet = true;
    m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value);
  }
  template <typename CreationTimeBeforeT = Aws::Utils::DateTime>
  ListJobsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) {
    SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns only jobs modified after the specified time.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const { return m_lastModifiedTimeAfter; }
  inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }
  template <typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
  void SetLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) {
    m_lastModifiedTimeAfterHasBeenSet = true;
    m_lastModifiedTimeAfter = std::forward<LastModifiedTimeAfterT>(value);
  }
  template <typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
  ListJobsRequest& WithLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) {
    SetLastModifiedTimeAfter(std::forward<LastModifiedTimeAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns only jobs modified before the specified time.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const { return m_lastModifiedTimeBefore; }
  inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }
  template <typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
  void SetLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) {
    m_lastModifiedTimeBeforeHasBeenSet = true;
    m_lastModifiedTimeBefore = std::forward<LastModifiedTimeBeforeT>(value);
  }
  template <typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
  ListJobsRequest& WithLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) {
    SetLastModifiedTimeBefore(std::forward<LastModifiedTimeBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string in the job name to filter results. Only jobs whose name contains the
   * specified string are returned.</p>
   */
  inline const Aws::String& GetNameContains() const { return m_nameContains; }
  inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
  template <typename NameContainsT = Aws::String>
  void SetNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains = std::forward<NameContainsT>(value);
  }
  template <typename NameContainsT = Aws::String>
  ListJobsRequest& WithNameContains(NameContainsT&& value) {
    SetNameContains(std::forward<NameContainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort results by.</p>
   */
  inline SortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(SortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListJobsRequest& WithSortBy(SortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order for results. Valid values are <code>Ascending</code> and
   * <code>Descending</code>.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListJobsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns only jobs with the specified status.</p>
   */
  inline JobStatus GetStatusEquals() const { return m_statusEquals; }
  inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
  inline void SetStatusEquals(JobStatus value) {
    m_statusEqualsHasBeenSet = true;
    m_statusEquals = value;
  }
  inline ListJobsRequest& WithStatusEquals(JobStatus value) {
    SetStatusEquals(value);
    return *this;
  }
  ///@}
 private:
  JobCategory m_jobCategory{JobCategory::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::Utils::DateTime m_creationTimeAfter{};

  Aws::Utils::DateTime m_creationTimeBefore{};

  Aws::Utils::DateTime m_lastModifiedTimeAfter{};

  Aws::Utils::DateTime m_lastModifiedTimeBefore{};

  Aws::String m_nameContains;

  SortBy m_sortBy{SortBy::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  JobStatus m_statusEquals{JobStatus::NOT_SET};
  bool m_jobCategoryHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_creationTimeAfterHasBeenSet = false;
  bool m_creationTimeBeforeHasBeenSet = false;
  bool m_lastModifiedTimeAfterHasBeenSet = false;
  bool m_lastModifiedTimeBeforeHasBeenSet = false;
  bool m_nameContainsHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_statusEqualsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
