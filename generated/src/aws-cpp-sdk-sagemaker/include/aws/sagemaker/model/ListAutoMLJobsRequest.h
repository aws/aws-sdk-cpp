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
    AWS_SAGEMAKER_API ListAutoMLJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAutoMLJobs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline ListAutoMLJobsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline ListAutoMLJobsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline ListAutoMLJobsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline ListAutoMLJobsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline ListAutoMLJobsRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline ListAutoMLJobsRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline ListAutoMLJobsRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}

    /**
     * <p>Request a list of jobs, using a filter for time.</p>
     */
    inline ListAutoMLJobsRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Request a list of jobs, using a search filter for name.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Request a list of jobs, using a search filter for name.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Request a list of jobs, using a search filter for name.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Request a list of jobs, using a search filter for name.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Request a list of jobs, using a search filter for name.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Request a list of jobs, using a search filter for name.</p>
     */
    inline ListAutoMLJobsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Request a list of jobs, using a search filter for name.</p>
     */
    inline ListAutoMLJobsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Request a list of jobs, using a search filter for name.</p>
     */
    inline ListAutoMLJobsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>Request a list of jobs, using a filter for status.</p>
     */
    inline const AutoMLJobStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>Request a list of jobs, using a filter for status.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>Request a list of jobs, using a filter for status.</p>
     */
    inline void SetStatusEquals(const AutoMLJobStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>Request a list of jobs, using a filter for status.</p>
     */
    inline void SetStatusEquals(AutoMLJobStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>Request a list of jobs, using a filter for status.</p>
     */
    inline ListAutoMLJobsRequest& WithStatusEquals(const AutoMLJobStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>Request a list of jobs, using a filter for status.</p>
     */
    inline ListAutoMLJobsRequest& WithStatusEquals(AutoMLJobStatus&& value) { SetStatusEquals(std::move(value)); return *this;}


    /**
     * <p>The sort order for the results. The default is <code>Descending</code>.</p>
     */
    inline const AutoMLSortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for the results. The default is <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for the results. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const AutoMLSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for the results. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(AutoMLSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for the results. The default is <code>Descending</code>.</p>
     */
    inline ListAutoMLJobsRequest& WithSortOrder(const AutoMLSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for the results. The default is <code>Descending</code>.</p>
     */
    inline ListAutoMLJobsRequest& WithSortOrder(AutoMLSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>Name</code>.</p>
     */
    inline const AutoMLSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>Name</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>Name</code>.</p>
     */
    inline void SetSortBy(const AutoMLSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>Name</code>.</p>
     */
    inline void SetSortBy(AutoMLSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>Name</code>.</p>
     */
    inline ListAutoMLJobsRequest& WithSortBy(const AutoMLSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>Name</code>.</p>
     */
    inline ListAutoMLJobsRequest& WithSortBy(AutoMLSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Request a list of jobs up to a specified limit.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Request a list of jobs up to a specified limit.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Request a list of jobs up to a specified limit.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Request a list of jobs up to a specified limit.</p>
     */
    inline ListAutoMLJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListAutoMLJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListAutoMLJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListAutoMLJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    AutoMLJobStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    AutoMLSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    AutoMLSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
