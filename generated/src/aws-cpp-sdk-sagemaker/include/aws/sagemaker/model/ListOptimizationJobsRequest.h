/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/OptimizationJobStatus.h>
#include <aws/sagemaker/model/ListOptimizationJobsSortBy.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListOptimizationJobsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListOptimizationJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOptimizationJobs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A token that you use to get the next set of results following a truncated
     * response. If the response to the previous request was truncated, that response
     * provides the value for this token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOptimizationJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of optimization jobs to return in the response. The
     * default is 50.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListOptimizationJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those optimization jobs that were created after
     * the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListOptimizationJobsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those optimization jobs that were created before
     * the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListOptimizationJobsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those optimization jobs that were updated after
     * the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const { return m_lastModifiedTimeAfter; }
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    void SetLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::forward<LastModifiedTimeAfterT>(value); }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    ListOptimizationJobsRequest& WithLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { SetLastModifiedTimeAfter(std::forward<LastModifiedTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those optimization jobs that were updated before
     * the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const { return m_lastModifiedTimeBefore; }
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    void SetLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::forward<LastModifiedTimeBeforeT>(value); }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    ListOptimizationJobsRequest& WithLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { SetLastModifiedTimeBefore(std::forward<LastModifiedTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those optimization jobs that apply the specified
     * optimization techniques. You can specify either <code>Quantization</code> or
     * <code>Compilation</code>.</p>
     */
    inline const Aws::String& GetOptimizationContains() const { return m_optimizationContains; }
    inline bool OptimizationContainsHasBeenSet() const { return m_optimizationContainsHasBeenSet; }
    template<typename OptimizationContainsT = Aws::String>
    void SetOptimizationContains(OptimizationContainsT&& value) { m_optimizationContainsHasBeenSet = true; m_optimizationContains = std::forward<OptimizationContainsT>(value); }
    template<typename OptimizationContainsT = Aws::String>
    ListOptimizationJobsRequest& WithOptimizationContains(OptimizationContainsT&& value) { SetOptimizationContains(std::forward<OptimizationContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those optimization jobs with a name that contains
     * the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListOptimizationJobsRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those optimization jobs with the specified
     * status.</p>
     */
    inline OptimizationJobStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(OptimizationJobStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListOptimizationJobsRequest& WithStatusEquals(OptimizationJobStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field by which to sort the optimization jobs in the response. The default
     * is <code>CreationTime</code> </p>
     */
    inline ListOptimizationJobsSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ListOptimizationJobsSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListOptimizationJobsRequest& WithSortBy(ListOptimizationJobsSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for results. The default is <code>Ascending</code> </p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListOptimizationJobsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter{};
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore{};
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::String m_optimizationContains;
    bool m_optimizationContainsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    OptimizationJobStatus m_statusEquals{OptimizationJobStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    ListOptimizationJobsSortBy m_sortBy{ListOptimizationJobsSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
