/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

  /**
   */
  class ListScheduledQueriesRequest : public TimestreamQueryRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API ListScheduledQueriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListScheduledQueries"; }

    AWS_TIMESTREAMQUERY_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMQUERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of items to return in the output. If the total number of
     * items available is more than the value specified, a <code>NextToken</code> is
     * provided in the output. To resume pagination, provide the <code>NextToken</code>
     * value as the argument to the subsequent call to
     * <code>ListScheduledQueriesRequest</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return in the output. If the total number of
     * items available is more than the value specified, a <code>NextToken</code> is
     * provided in the output. To resume pagination, provide the <code>NextToken</code>
     * value as the argument to the subsequent call to
     * <code>ListScheduledQueriesRequest</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return in the output. If the total number of
     * items available is more than the value specified, a <code>NextToken</code> is
     * provided in the output. To resume pagination, provide the <code>NextToken</code>
     * value as the argument to the subsequent call to
     * <code>ListScheduledQueriesRequest</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return in the output. If the total number of
     * items available is more than the value specified, a <code>NextToken</code> is
     * provided in the output. To resume pagination, provide the <code>NextToken</code>
     * value as the argument to the subsequent call to
     * <code>ListScheduledQueriesRequest</code>.</p>
     */
    inline ListScheduledQueriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> A pagination token to resume pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token to resume pagination.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A pagination token to resume pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A pagination token to resume pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A pagination token to resume pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A pagination token to resume pagination.</p>
     */
    inline ListScheduledQueriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token to resume pagination.</p>
     */
    inline ListScheduledQueriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token to resume pagination.</p>
     */
    inline ListScheduledQueriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
