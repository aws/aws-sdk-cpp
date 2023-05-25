/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SortLineageGroupsBy.h>
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
  class ListLineageGroupsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListLineageGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLineageGroups"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A timestamp to filter against lineage groups created after a certain point in
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>A timestamp to filter against lineage groups created after a certain point in
     * time.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>A timestamp to filter against lineage groups created after a certain point in
     * time.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>A timestamp to filter against lineage groups created after a certain point in
     * time.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>A timestamp to filter against lineage groups created after a certain point in
     * time.</p>
     */
    inline ListLineageGroupsRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>A timestamp to filter against lineage groups created after a certain point in
     * time.</p>
     */
    inline ListLineageGroupsRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>A timestamp to filter against lineage groups created before a certain point
     * in time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>A timestamp to filter against lineage groups created before a certain point
     * in time.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>A timestamp to filter against lineage groups created before a certain point
     * in time.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>A timestamp to filter against lineage groups created before a certain point
     * in time.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>A timestamp to filter against lineage groups created before a certain point
     * in time.</p>
     */
    inline ListLineageGroupsRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>A timestamp to filter against lineage groups created before a certain point
     * in time.</p>
     */
    inline ListLineageGroupsRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline const SortLineageGroupsBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const SortLineageGroupsBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(SortLineageGroupsBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline ListLineageGroupsRequest& WithSortBy(const SortLineageGroupsBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline ListLineageGroupsRequest& WithSortBy(SortLineageGroupsBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline ListLineageGroupsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline ListLineageGroupsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline ListLineageGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline ListLineageGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline ListLineageGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of endpoints to return in the response. This value
     * defaults to 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of endpoints to return in the response. This value
     * defaults to 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of endpoints to return in the response. This value
     * defaults to 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of endpoints to return in the response. This value
     * defaults to 10.</p>
     */
    inline ListLineageGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    SortLineageGroupsBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
