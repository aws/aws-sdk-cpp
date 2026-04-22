/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIRecommendationJobStatus.h>
#include <aws/sagemaker/model/ListAIRecommendationJobsSortBy.h>
#include <aws/sagemaker/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class ListAIRecommendationJobsRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API ListAIRecommendationJobsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAIRecommendationJobs"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The maximum number of recommendation jobs to return in the response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAIRecommendationJobsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the previous call to <code>ListAIRecommendationJobs</code> didn't return
   * the full set of jobs, the call returns a token for getting the next set.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAIRecommendationJobsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string in the job name. This filter returns only jobs whose name contains
   * the specified string.</p>
   */
  inline const Aws::String& GetNameContains() const { return m_nameContains; }
  inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
  template <typename NameContainsT = Aws::String>
  void SetNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains = std::forward<NameContainsT>(value);
  }
  template <typename NameContainsT = Aws::String>
  ListAIRecommendationJobsRequest& WithNameContains(NameContainsT&& value) {
    SetNameContains(std::forward<NameContainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns only recommendation jobs with the specified status.</p>
   */
  inline AIRecommendationJobStatus GetStatusEquals() const { return m_statusEquals; }
  inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
  inline void SetStatusEquals(AIRecommendationJobStatus value) {
    m_statusEqualsHasBeenSet = true;
    m_statusEquals = value;
  }
  inline ListAIRecommendationJobsRequest& WithStatusEquals(AIRecommendationJobStatus value) {
    SetStatusEquals(value);
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
  ListAIRecommendationJobsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) {
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
  ListAIRecommendationJobsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) {
    SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
   */
  inline ListAIRecommendationJobsSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(ListAIRecommendationJobsSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListAIRecommendationJobsRequest& WithSortBy(ListAIRecommendationJobsSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order for results. The default is <code>Descending</code>.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListAIRecommendationJobsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_nameContains;

  AIRecommendationJobStatus m_statusEquals{AIRecommendationJobStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTimeAfter{};

  Aws::Utils::DateTime m_creationTimeBefore{};

  ListAIRecommendationJobsSortBy m_sortBy{ListAIRecommendationJobsSortBy::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_nameContainsHasBeenSet = false;
  bool m_statusEqualsHasBeenSet = false;
  bool m_creationTimeAfterHasBeenSet = false;
  bool m_creationTimeBeforeHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
