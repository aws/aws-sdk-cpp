/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/ListWorkteamsSortByOptions.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListWorkteamsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListWorkteamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkteams"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline const ListWorkteamsSortByOptions& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const ListWorkteamsSortByOptions& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(ListWorkteamsSortByOptions&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline ListWorkteamsRequest& WithSortBy(const ListWorkteamsSortByOptions& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline ListWorkteamsRequest& WithSortBy(ListWorkteamsSortByOptions&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListWorkteamsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListWorkteamsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>A string in the work team's name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>A string in the work team's name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>A string in the work team's name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>A string in the work team's name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>A string in the work team's name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>A string in the work team's name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline ListWorkteamsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>A string in the work team's name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline ListWorkteamsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>A string in the work team's name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline ListWorkteamsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>If the result of the previous <code>ListWorkteams</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of labeling jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListWorkteams</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of labeling jobs, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListWorkteams</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of labeling jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListWorkteams</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of labeling jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListWorkteams</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of labeling jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListWorkteams</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of labeling jobs, use the token in the next request.</p>
     */
    inline ListWorkteamsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListWorkteams</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of labeling jobs, use the token in the next request.</p>
     */
    inline ListWorkteamsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListWorkteams</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of labeling jobs, use the token in the next request.</p>
     */
    inline ListWorkteamsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of work teams to return in each page of the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of work teams to return in each page of the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of work teams to return in each page of the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of work teams to return in each page of the response.</p>
     */
    inline ListWorkteamsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ListWorkteamsSortByOptions m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
