/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AutoMLJobStatus.h>
#include <aws/sagemaker/model/AutoMLSortOrder.h>
#include <aws/sagemaker/model/AutoMLSortBy.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListAutoMLJobsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListAutoMLJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAutoMLJobs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListAutoMLJobsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListAutoMLJobsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const { return m_lastModifiedTimeAfter; }
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    void SetLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::forward<LastModifiedTimeAfterT>(value); }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    ListAutoMLJobsRequest& WithLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { SetLastModifiedTimeAfter(std::forward<LastModifiedTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const { return m_lastModifiedTimeBefore; }
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    void SetLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::forward<LastModifiedTimeBeforeT>(value); }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    ListAutoMLJobsRequest& WithLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { SetLastModifiedTimeBefore(std::forward<LastModifiedTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request a list of jobs, using a search filter for name.</p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListAutoMLJobsRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request a list of jobs, using a filter for status.</p>
     */
    inline AutoMLJobStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(AutoMLJobStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListAutoMLJobsRequest& WithStatusEquals(AutoMLJobStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for the results. The default is <code>Descending</code>.</p>
     */
    inline AutoMLSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(AutoMLSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListAutoMLJobsRequest& WithSortOrder(AutoMLSortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>Name</code>.</p>
     */
    inline AutoMLSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(AutoMLSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListAutoMLJobsRequest& WithSortBy(AutoMLSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request a list of jobs up to a specified limit.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAutoMLJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAutoMLJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter{};
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore{};
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    AutoMLJobStatus m_statusEquals{AutoMLJobStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    AutoMLSortOrder m_sortOrder{AutoMLSortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    AutoMLSortBy m_sortBy{AutoMLSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
