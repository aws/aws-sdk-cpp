/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/SsmSapRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/model/Filter.h>
#include <utility>

namespace Aws
{
namespace SsmSap
{
namespace Model
{

  /**
   */
  class ListOperationEventsRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API ListOperationEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOperationEvents"; }

    AWS_SSMSAP_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The ID of the operation.</p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>The ID of the operation.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The ID of the operation.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>The ID of the operation.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The ID of the operation.</p>
     */
    inline ListOperationEventsRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The ID of the operation.</p>
     */
    inline ListOperationEventsRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the operation.</p>
     */
    inline ListOperationEventsRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value.</p>
     * <p>If you do not specify a value for <code>MaxResults</code>, the request
     * returns 50 items per page by default.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value.</p>
     * <p>If you do not specify a value for <code>MaxResults</code>, the request
     * returns 50 items per page by default.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value.</p>
     * <p>If you do not specify a value for <code>MaxResults</code>, the request
     * returns 50 items per page by default.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value.</p>
     * <p>If you do not specify a value for <code>MaxResults</code>, the request
     * returns 50 items per page by default.</p>
     */
    inline ListOperationEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListOperationEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListOperationEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListOperationEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Optionally specify filters to narrow the returned operation event items.</p>
     * <p>Valid filter names include <code>status</code>, <code>resourceID</code>, and
     * <code>resourceType</code>. The valid operator for all three filters is
     * <code>Equals</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Optionally specify filters to narrow the returned operation event items.</p>
     * <p>Valid filter names include <code>status</code>, <code>resourceID</code>, and
     * <code>resourceType</code>. The valid operator for all three filters is
     * <code>Equals</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Optionally specify filters to narrow the returned operation event items.</p>
     * <p>Valid filter names include <code>status</code>, <code>resourceID</code>, and
     * <code>resourceType</code>. The valid operator for all three filters is
     * <code>Equals</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Optionally specify filters to narrow the returned operation event items.</p>
     * <p>Valid filter names include <code>status</code>, <code>resourceID</code>, and
     * <code>resourceType</code>. The valid operator for all three filters is
     * <code>Equals</code>.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Optionally specify filters to narrow the returned operation event items.</p>
     * <p>Valid filter names include <code>status</code>, <code>resourceID</code>, and
     * <code>resourceType</code>. The valid operator for all three filters is
     * <code>Equals</code>.</p>
     */
    inline ListOperationEventsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Optionally specify filters to narrow the returned operation event items.</p>
     * <p>Valid filter names include <code>status</code>, <code>resourceID</code>, and
     * <code>resourceType</code>. The valid operator for all three filters is
     * <code>Equals</code>.</p>
     */
    inline ListOperationEventsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Optionally specify filters to narrow the returned operation event items.</p>
     * <p>Valid filter names include <code>status</code>, <code>resourceID</code>, and
     * <code>resourceType</code>. The valid operator for all three filters is
     * <code>Equals</code>.</p>
     */
    inline ListOperationEventsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Optionally specify filters to narrow the returned operation event items.</p>
     * <p>Valid filter names include <code>status</code>, <code>resourceID</code>, and
     * <code>resourceType</code>. The valid operator for all three filters is
     * <code>Equals</code>.</p>
     */
    inline ListOperationEventsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
