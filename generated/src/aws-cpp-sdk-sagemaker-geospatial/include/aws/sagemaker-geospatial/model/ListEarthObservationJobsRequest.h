/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/SortOrder.h>
#include <aws/sagemaker-geospatial/model/EarthObservationJobStatus.h>
#include <utility>

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   */
  class ListEarthObservationJobsRequest : public SageMakerGeospatialRequest
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ListEarthObservationJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEarthObservationJobs"; }

    AWS_SAGEMAKERGEOSPATIAL_API Aws::String SerializePayload() const override;


    /**
     * <p>The total number of items to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of items to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of items to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of items to return.</p>
     */
    inline ListEarthObservationJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListEarthObservationJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListEarthObservationJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListEarthObservationJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline const Aws::String& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline void SetSortBy(const Aws::String& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline void SetSortBy(Aws::String&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline void SetSortBy(const char* value) { m_sortByHasBeenSet = true; m_sortBy.assign(value); }

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline ListEarthObservationJobsRequest& WithSortBy(const Aws::String& value) { SetSortBy(value); return *this;}

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline ListEarthObservationJobsRequest& WithSortBy(Aws::String&& value) { SetSortBy(std::move(value)); return *this;}

    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline ListEarthObservationJobsRequest& WithSortBy(const char* value) { SetSortBy(value); return *this;}


    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline ListEarthObservationJobsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>An optional value that specifies whether you want the results sorted in
     * <code>Ascending</code> or <code>Descending</code> order.</p>
     */
    inline ListEarthObservationJobsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline const EarthObservationJobStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline void SetStatusEquals(const EarthObservationJobStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline void SetStatusEquals(EarthObservationJobStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline ListEarthObservationJobsRequest& WithStatusEquals(const EarthObservationJobStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>A filter that retrieves only jobs with a specific status.</p>
     */
    inline ListEarthObservationJobsRequest& WithStatusEquals(EarthObservationJobStatus&& value) { SetStatusEquals(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    EarthObservationJobStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
