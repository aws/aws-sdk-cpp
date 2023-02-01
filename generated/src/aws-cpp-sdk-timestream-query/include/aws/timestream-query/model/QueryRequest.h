/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

  /**
   */
  class QueryRequest : public TimestreamQueryRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API QueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Query"; }

    AWS_TIMESTREAMQUERY_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMQUERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The query to be run by Timestream. </p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p> The query to be run by Timestream. </p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p> The query to be run by Timestream. </p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p> The query to be run by Timestream. </p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p> The query to be run by Timestream. </p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p> The query to be run by Timestream. </p>
     */
    inline QueryRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p> The query to be run by Timestream. </p>
     */
    inline QueryRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p> The query to be run by Timestream. </p>
     */
    inline QueryRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p> Unique, case-sensitive string of up to 64 ASCII characters specified when a
     * <code>Query</code> request is made. Providing a <code>ClientToken</code> makes
     * the call to <code>Query</code> <i>idempotent</i>. This means that running the
     * same query repeatedly will produce the same result. In other words, making
     * multiple identical <code>Query</code> requests has the same effect as making a
     * single request. When using <code>ClientToken</code> in a query, note the
     * following: </p> <ul> <li> <p> If the Query API is instantiated without a
     * <code>ClientToken</code>, the Query SDK generates a <code>ClientToken</code> on
     * your behalf.</p> </li> <li> <p>If the <code>Query</code> invocation only
     * contains the <code>ClientToken</code> but does not include a
     * <code>NextToken</code>, that invocation of <code>Query</code> is assumed to be a
     * new query run.</p> </li> <li> <p>If the invocation contains
     * <code>NextToken</code>, that particular invocation is assumed to be a subsequent
     * invocation of a prior call to the Query API, and a result set is returned.</p>
     * </li> <li> <p> After 4 hours, any request with the same <code>ClientToken</code>
     * is treated as a new request. </p> </li> </ul>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> Unique, case-sensitive string of up to 64 ASCII characters specified when a
     * <code>Query</code> request is made. Providing a <code>ClientToken</code> makes
     * the call to <code>Query</code> <i>idempotent</i>. This means that running the
     * same query repeatedly will produce the same result. In other words, making
     * multiple identical <code>Query</code> requests has the same effect as making a
     * single request. When using <code>ClientToken</code> in a query, note the
     * following: </p> <ul> <li> <p> If the Query API is instantiated without a
     * <code>ClientToken</code>, the Query SDK generates a <code>ClientToken</code> on
     * your behalf.</p> </li> <li> <p>If the <code>Query</code> invocation only
     * contains the <code>ClientToken</code> but does not include a
     * <code>NextToken</code>, that invocation of <code>Query</code> is assumed to be a
     * new query run.</p> </li> <li> <p>If the invocation contains
     * <code>NextToken</code>, that particular invocation is assumed to be a subsequent
     * invocation of a prior call to the Query API, and a result set is returned.</p>
     * </li> <li> <p> After 4 hours, any request with the same <code>ClientToken</code>
     * is treated as a new request. </p> </li> </ul>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> Unique, case-sensitive string of up to 64 ASCII characters specified when a
     * <code>Query</code> request is made. Providing a <code>ClientToken</code> makes
     * the call to <code>Query</code> <i>idempotent</i>. This means that running the
     * same query repeatedly will produce the same result. In other words, making
     * multiple identical <code>Query</code> requests has the same effect as making a
     * single request. When using <code>ClientToken</code> in a query, note the
     * following: </p> <ul> <li> <p> If the Query API is instantiated without a
     * <code>ClientToken</code>, the Query SDK generates a <code>ClientToken</code> on
     * your behalf.</p> </li> <li> <p>If the <code>Query</code> invocation only
     * contains the <code>ClientToken</code> but does not include a
     * <code>NextToken</code>, that invocation of <code>Query</code> is assumed to be a
     * new query run.</p> </li> <li> <p>If the invocation contains
     * <code>NextToken</code>, that particular invocation is assumed to be a subsequent
     * invocation of a prior call to the Query API, and a result set is returned.</p>
     * </li> <li> <p> After 4 hours, any request with the same <code>ClientToken</code>
     * is treated as a new request. </p> </li> </ul>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> Unique, case-sensitive string of up to 64 ASCII characters specified when a
     * <code>Query</code> request is made. Providing a <code>ClientToken</code> makes
     * the call to <code>Query</code> <i>idempotent</i>. This means that running the
     * same query repeatedly will produce the same result. In other words, making
     * multiple identical <code>Query</code> requests has the same effect as making a
     * single request. When using <code>ClientToken</code> in a query, note the
     * following: </p> <ul> <li> <p> If the Query API is instantiated without a
     * <code>ClientToken</code>, the Query SDK generates a <code>ClientToken</code> on
     * your behalf.</p> </li> <li> <p>If the <code>Query</code> invocation only
     * contains the <code>ClientToken</code> but does not include a
     * <code>NextToken</code>, that invocation of <code>Query</code> is assumed to be a
     * new query run.</p> </li> <li> <p>If the invocation contains
     * <code>NextToken</code>, that particular invocation is assumed to be a subsequent
     * invocation of a prior call to the Query API, and a result set is returned.</p>
     * </li> <li> <p> After 4 hours, any request with the same <code>ClientToken</code>
     * is treated as a new request. </p> </li> </ul>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> Unique, case-sensitive string of up to 64 ASCII characters specified when a
     * <code>Query</code> request is made. Providing a <code>ClientToken</code> makes
     * the call to <code>Query</code> <i>idempotent</i>. This means that running the
     * same query repeatedly will produce the same result. In other words, making
     * multiple identical <code>Query</code> requests has the same effect as making a
     * single request. When using <code>ClientToken</code> in a query, note the
     * following: </p> <ul> <li> <p> If the Query API is instantiated without a
     * <code>ClientToken</code>, the Query SDK generates a <code>ClientToken</code> on
     * your behalf.</p> </li> <li> <p>If the <code>Query</code> invocation only
     * contains the <code>ClientToken</code> but does not include a
     * <code>NextToken</code>, that invocation of <code>Query</code> is assumed to be a
     * new query run.</p> </li> <li> <p>If the invocation contains
     * <code>NextToken</code>, that particular invocation is assumed to be a subsequent
     * invocation of a prior call to the Query API, and a result set is returned.</p>
     * </li> <li> <p> After 4 hours, any request with the same <code>ClientToken</code>
     * is treated as a new request. </p> </li> </ul>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> Unique, case-sensitive string of up to 64 ASCII characters specified when a
     * <code>Query</code> request is made. Providing a <code>ClientToken</code> makes
     * the call to <code>Query</code> <i>idempotent</i>. This means that running the
     * same query repeatedly will produce the same result. In other words, making
     * multiple identical <code>Query</code> requests has the same effect as making a
     * single request. When using <code>ClientToken</code> in a query, note the
     * following: </p> <ul> <li> <p> If the Query API is instantiated without a
     * <code>ClientToken</code>, the Query SDK generates a <code>ClientToken</code> on
     * your behalf.</p> </li> <li> <p>If the <code>Query</code> invocation only
     * contains the <code>ClientToken</code> but does not include a
     * <code>NextToken</code>, that invocation of <code>Query</code> is assumed to be a
     * new query run.</p> </li> <li> <p>If the invocation contains
     * <code>NextToken</code>, that particular invocation is assumed to be a subsequent
     * invocation of a prior call to the Query API, and a result set is returned.</p>
     * </li> <li> <p> After 4 hours, any request with the same <code>ClientToken</code>
     * is treated as a new request. </p> </li> </ul>
     */
    inline QueryRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> Unique, case-sensitive string of up to 64 ASCII characters specified when a
     * <code>Query</code> request is made. Providing a <code>ClientToken</code> makes
     * the call to <code>Query</code> <i>idempotent</i>. This means that running the
     * same query repeatedly will produce the same result. In other words, making
     * multiple identical <code>Query</code> requests has the same effect as making a
     * single request. When using <code>ClientToken</code> in a query, note the
     * following: </p> <ul> <li> <p> If the Query API is instantiated without a
     * <code>ClientToken</code>, the Query SDK generates a <code>ClientToken</code> on
     * your behalf.</p> </li> <li> <p>If the <code>Query</code> invocation only
     * contains the <code>ClientToken</code> but does not include a
     * <code>NextToken</code>, that invocation of <code>Query</code> is assumed to be a
     * new query run.</p> </li> <li> <p>If the invocation contains
     * <code>NextToken</code>, that particular invocation is assumed to be a subsequent
     * invocation of a prior call to the Query API, and a result set is returned.</p>
     * </li> <li> <p> After 4 hours, any request with the same <code>ClientToken</code>
     * is treated as a new request. </p> </li> </ul>
     */
    inline QueryRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> Unique, case-sensitive string of up to 64 ASCII characters specified when a
     * <code>Query</code> request is made. Providing a <code>ClientToken</code> makes
     * the call to <code>Query</code> <i>idempotent</i>. This means that running the
     * same query repeatedly will produce the same result. In other words, making
     * multiple identical <code>Query</code> requests has the same effect as making a
     * single request. When using <code>ClientToken</code> in a query, note the
     * following: </p> <ul> <li> <p> If the Query API is instantiated without a
     * <code>ClientToken</code>, the Query SDK generates a <code>ClientToken</code> on
     * your behalf.</p> </li> <li> <p>If the <code>Query</code> invocation only
     * contains the <code>ClientToken</code> but does not include a
     * <code>NextToken</code>, that invocation of <code>Query</code> is assumed to be a
     * new query run.</p> </li> <li> <p>If the invocation contains
     * <code>NextToken</code>, that particular invocation is assumed to be a subsequent
     * invocation of a prior call to the Query API, and a result set is returned.</p>
     * </li> <li> <p> After 4 hours, any request with the same <code>ClientToken</code>
     * is treated as a new request. </p> </li> </ul>
     */
    inline QueryRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> A pagination token used to return a set of results. When the
     * <code>Query</code> API is invoked using <code>NextToken</code>, that particular
     * invocation is assumed to be a subsequent invocation of a prior call to
     * <code>Query</code>, and a result set is returned. However, if the
     * <code>Query</code> invocation only contains the <code>ClientToken</code>, that
     * invocation of <code>Query</code> is assumed to be a new query run. </p> <p>Note
     * the following when using NextToken in a query:</p> <ul> <li> <p>A pagination
     * token can be used for up to five <code>Query</code> invocations, OR for a
     * duration of up to 1 hour – whichever comes first.</p> </li> <li> <p>Using the
     * same <code>NextToken</code> will return the same set of records. To keep
     * paginating through the result set, you must to use the most recent
     * <code>nextToken</code>.</p> </li> <li> <p>Suppose a <code>Query</code>
     * invocation returns two <code>NextToken</code> values, <code>TokenA</code> and
     * <code>TokenB</code>. If <code>TokenB</code> is used in a subsequent
     * <code>Query</code> invocation, then <code>TokenA</code> is invalidated and
     * cannot be reused.</p> </li> <li> <p>To request a previous result set from a
     * query after pagination has begun, you must re-invoke the Query API.</p> </li>
     * <li> <p>The latest <code>NextToken</code> should be used to paginate until
     * <code>null</code> is returned, at which point a new <code>NextToken</code>
     * should be used.</p> </li> <li> <p> If the IAM principal of the query initiator
     * and the result reader are not the same and/or the query initiator and the result
     * reader do not have the same query string in the query requests, the query will
     * fail with an <code>Invalid pagination token</code> error. </p> </li> </ul>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token used to return a set of results. When the
     * <code>Query</code> API is invoked using <code>NextToken</code>, that particular
     * invocation is assumed to be a subsequent invocation of a prior call to
     * <code>Query</code>, and a result set is returned. However, if the
     * <code>Query</code> invocation only contains the <code>ClientToken</code>, that
     * invocation of <code>Query</code> is assumed to be a new query run. </p> <p>Note
     * the following when using NextToken in a query:</p> <ul> <li> <p>A pagination
     * token can be used for up to five <code>Query</code> invocations, OR for a
     * duration of up to 1 hour – whichever comes first.</p> </li> <li> <p>Using the
     * same <code>NextToken</code> will return the same set of records. To keep
     * paginating through the result set, you must to use the most recent
     * <code>nextToken</code>.</p> </li> <li> <p>Suppose a <code>Query</code>
     * invocation returns two <code>NextToken</code> values, <code>TokenA</code> and
     * <code>TokenB</code>. If <code>TokenB</code> is used in a subsequent
     * <code>Query</code> invocation, then <code>TokenA</code> is invalidated and
     * cannot be reused.</p> </li> <li> <p>To request a previous result set from a
     * query after pagination has begun, you must re-invoke the Query API.</p> </li>
     * <li> <p>The latest <code>NextToken</code> should be used to paginate until
     * <code>null</code> is returned, at which point a new <code>NextToken</code>
     * should be used.</p> </li> <li> <p> If the IAM principal of the query initiator
     * and the result reader are not the same and/or the query initiator and the result
     * reader do not have the same query string in the query requests, the query will
     * fail with an <code>Invalid pagination token</code> error. </p> </li> </ul>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A pagination token used to return a set of results. When the
     * <code>Query</code> API is invoked using <code>NextToken</code>, that particular
     * invocation is assumed to be a subsequent invocation of a prior call to
     * <code>Query</code>, and a result set is returned. However, if the
     * <code>Query</code> invocation only contains the <code>ClientToken</code>, that
     * invocation of <code>Query</code> is assumed to be a new query run. </p> <p>Note
     * the following when using NextToken in a query:</p> <ul> <li> <p>A pagination
     * token can be used for up to five <code>Query</code> invocations, OR for a
     * duration of up to 1 hour – whichever comes first.</p> </li> <li> <p>Using the
     * same <code>NextToken</code> will return the same set of records. To keep
     * paginating through the result set, you must to use the most recent
     * <code>nextToken</code>.</p> </li> <li> <p>Suppose a <code>Query</code>
     * invocation returns two <code>NextToken</code> values, <code>TokenA</code> and
     * <code>TokenB</code>. If <code>TokenB</code> is used in a subsequent
     * <code>Query</code> invocation, then <code>TokenA</code> is invalidated and
     * cannot be reused.</p> </li> <li> <p>To request a previous result set from a
     * query after pagination has begun, you must re-invoke the Query API.</p> </li>
     * <li> <p>The latest <code>NextToken</code> should be used to paginate until
     * <code>null</code> is returned, at which point a new <code>NextToken</code>
     * should be used.</p> </li> <li> <p> If the IAM principal of the query initiator
     * and the result reader are not the same and/or the query initiator and the result
     * reader do not have the same query string in the query requests, the query will
     * fail with an <code>Invalid pagination token</code> error. </p> </li> </ul>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A pagination token used to return a set of results. When the
     * <code>Query</code> API is invoked using <code>NextToken</code>, that particular
     * invocation is assumed to be a subsequent invocation of a prior call to
     * <code>Query</code>, and a result set is returned. However, if the
     * <code>Query</code> invocation only contains the <code>ClientToken</code>, that
     * invocation of <code>Query</code> is assumed to be a new query run. </p> <p>Note
     * the following when using NextToken in a query:</p> <ul> <li> <p>A pagination
     * token can be used for up to five <code>Query</code> invocations, OR for a
     * duration of up to 1 hour – whichever comes first.</p> </li> <li> <p>Using the
     * same <code>NextToken</code> will return the same set of records. To keep
     * paginating through the result set, you must to use the most recent
     * <code>nextToken</code>.</p> </li> <li> <p>Suppose a <code>Query</code>
     * invocation returns two <code>NextToken</code> values, <code>TokenA</code> and
     * <code>TokenB</code>. If <code>TokenB</code> is used in a subsequent
     * <code>Query</code> invocation, then <code>TokenA</code> is invalidated and
     * cannot be reused.</p> </li> <li> <p>To request a previous result set from a
     * query after pagination has begun, you must re-invoke the Query API.</p> </li>
     * <li> <p>The latest <code>NextToken</code> should be used to paginate until
     * <code>null</code> is returned, at which point a new <code>NextToken</code>
     * should be used.</p> </li> <li> <p> If the IAM principal of the query initiator
     * and the result reader are not the same and/or the query initiator and the result
     * reader do not have the same query string in the query requests, the query will
     * fail with an <code>Invalid pagination token</code> error. </p> </li> </ul>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A pagination token used to return a set of results. When the
     * <code>Query</code> API is invoked using <code>NextToken</code>, that particular
     * invocation is assumed to be a subsequent invocation of a prior call to
     * <code>Query</code>, and a result set is returned. However, if the
     * <code>Query</code> invocation only contains the <code>ClientToken</code>, that
     * invocation of <code>Query</code> is assumed to be a new query run. </p> <p>Note
     * the following when using NextToken in a query:</p> <ul> <li> <p>A pagination
     * token can be used for up to five <code>Query</code> invocations, OR for a
     * duration of up to 1 hour – whichever comes first.</p> </li> <li> <p>Using the
     * same <code>NextToken</code> will return the same set of records. To keep
     * paginating through the result set, you must to use the most recent
     * <code>nextToken</code>.</p> </li> <li> <p>Suppose a <code>Query</code>
     * invocation returns two <code>NextToken</code> values, <code>TokenA</code> and
     * <code>TokenB</code>. If <code>TokenB</code> is used in a subsequent
     * <code>Query</code> invocation, then <code>TokenA</code> is invalidated and
     * cannot be reused.</p> </li> <li> <p>To request a previous result set from a
     * query after pagination has begun, you must re-invoke the Query API.</p> </li>
     * <li> <p>The latest <code>NextToken</code> should be used to paginate until
     * <code>null</code> is returned, at which point a new <code>NextToken</code>
     * should be used.</p> </li> <li> <p> If the IAM principal of the query initiator
     * and the result reader are not the same and/or the query initiator and the result
     * reader do not have the same query string in the query requests, the query will
     * fail with an <code>Invalid pagination token</code> error. </p> </li> </ul>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A pagination token used to return a set of results. When the
     * <code>Query</code> API is invoked using <code>NextToken</code>, that particular
     * invocation is assumed to be a subsequent invocation of a prior call to
     * <code>Query</code>, and a result set is returned. However, if the
     * <code>Query</code> invocation only contains the <code>ClientToken</code>, that
     * invocation of <code>Query</code> is assumed to be a new query run. </p> <p>Note
     * the following when using NextToken in a query:</p> <ul> <li> <p>A pagination
     * token can be used for up to five <code>Query</code> invocations, OR for a
     * duration of up to 1 hour – whichever comes first.</p> </li> <li> <p>Using the
     * same <code>NextToken</code> will return the same set of records. To keep
     * paginating through the result set, you must to use the most recent
     * <code>nextToken</code>.</p> </li> <li> <p>Suppose a <code>Query</code>
     * invocation returns two <code>NextToken</code> values, <code>TokenA</code> and
     * <code>TokenB</code>. If <code>TokenB</code> is used in a subsequent
     * <code>Query</code> invocation, then <code>TokenA</code> is invalidated and
     * cannot be reused.</p> </li> <li> <p>To request a previous result set from a
     * query after pagination has begun, you must re-invoke the Query API.</p> </li>
     * <li> <p>The latest <code>NextToken</code> should be used to paginate until
     * <code>null</code> is returned, at which point a new <code>NextToken</code>
     * should be used.</p> </li> <li> <p> If the IAM principal of the query initiator
     * and the result reader are not the same and/or the query initiator and the result
     * reader do not have the same query string in the query requests, the query will
     * fail with an <code>Invalid pagination token</code> error. </p> </li> </ul>
     */
    inline QueryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token used to return a set of results. When the
     * <code>Query</code> API is invoked using <code>NextToken</code>, that particular
     * invocation is assumed to be a subsequent invocation of a prior call to
     * <code>Query</code>, and a result set is returned. However, if the
     * <code>Query</code> invocation only contains the <code>ClientToken</code>, that
     * invocation of <code>Query</code> is assumed to be a new query run. </p> <p>Note
     * the following when using NextToken in a query:</p> <ul> <li> <p>A pagination
     * token can be used for up to five <code>Query</code> invocations, OR for a
     * duration of up to 1 hour – whichever comes first.</p> </li> <li> <p>Using the
     * same <code>NextToken</code> will return the same set of records. To keep
     * paginating through the result set, you must to use the most recent
     * <code>nextToken</code>.</p> </li> <li> <p>Suppose a <code>Query</code>
     * invocation returns two <code>NextToken</code> values, <code>TokenA</code> and
     * <code>TokenB</code>. If <code>TokenB</code> is used in a subsequent
     * <code>Query</code> invocation, then <code>TokenA</code> is invalidated and
     * cannot be reused.</p> </li> <li> <p>To request a previous result set from a
     * query after pagination has begun, you must re-invoke the Query API.</p> </li>
     * <li> <p>The latest <code>NextToken</code> should be used to paginate until
     * <code>null</code> is returned, at which point a new <code>NextToken</code>
     * should be used.</p> </li> <li> <p> If the IAM principal of the query initiator
     * and the result reader are not the same and/or the query initiator and the result
     * reader do not have the same query string in the query requests, the query will
     * fail with an <code>Invalid pagination token</code> error. </p> </li> </ul>
     */
    inline QueryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token used to return a set of results. When the
     * <code>Query</code> API is invoked using <code>NextToken</code>, that particular
     * invocation is assumed to be a subsequent invocation of a prior call to
     * <code>Query</code>, and a result set is returned. However, if the
     * <code>Query</code> invocation only contains the <code>ClientToken</code>, that
     * invocation of <code>Query</code> is assumed to be a new query run. </p> <p>Note
     * the following when using NextToken in a query:</p> <ul> <li> <p>A pagination
     * token can be used for up to five <code>Query</code> invocations, OR for a
     * duration of up to 1 hour – whichever comes first.</p> </li> <li> <p>Using the
     * same <code>NextToken</code> will return the same set of records. To keep
     * paginating through the result set, you must to use the most recent
     * <code>nextToken</code>.</p> </li> <li> <p>Suppose a <code>Query</code>
     * invocation returns two <code>NextToken</code> values, <code>TokenA</code> and
     * <code>TokenB</code>. If <code>TokenB</code> is used in a subsequent
     * <code>Query</code> invocation, then <code>TokenA</code> is invalidated and
     * cannot be reused.</p> </li> <li> <p>To request a previous result set from a
     * query after pagination has begun, you must re-invoke the Query API.</p> </li>
     * <li> <p>The latest <code>NextToken</code> should be used to paginate until
     * <code>null</code> is returned, at which point a new <code>NextToken</code>
     * should be used.</p> </li> <li> <p> If the IAM principal of the query initiator
     * and the result reader are not the same and/or the query initiator and the result
     * reader do not have the same query string in the query requests, the query will
     * fail with an <code>Invalid pagination token</code> error. </p> </li> </ul>
     */
    inline QueryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The total number of rows to be returned in the <code>Query</code> output.
     * The initial run of <code>Query</code> with a <code>MaxRows</code> value
     * specified will return the result set of the query in two cases: </p> <ul> <li>
     * <p>The size of the result is less than <code>1MB</code>.</p> </li> <li> <p>The
     * number of rows in the result set is less than the value of
     * <code>maxRows</code>.</p> </li> </ul> <p>Otherwise, the initial invocation of
     * <code>Query</code> only returns a <code>NextToken</code>, which can then be used
     * in subsequent calls to fetch the result set. To resume pagination, provide the
     * <code>NextToken</code> value in the subsequent command.</p> <p>If the row size
     * is large (e.g. a row has many columns), Timestream may return fewer rows to keep
     * the response size from exceeding the 1 MB limit. If <code>MaxRows</code> is not
     * provided, Timestream will send the necessary number of rows to meet the 1 MB
     * limit.</p>
     */
    inline int GetMaxRows() const{ return m_maxRows; }

    /**
     * <p> The total number of rows to be returned in the <code>Query</code> output.
     * The initial run of <code>Query</code> with a <code>MaxRows</code> value
     * specified will return the result set of the query in two cases: </p> <ul> <li>
     * <p>The size of the result is less than <code>1MB</code>.</p> </li> <li> <p>The
     * number of rows in the result set is less than the value of
     * <code>maxRows</code>.</p> </li> </ul> <p>Otherwise, the initial invocation of
     * <code>Query</code> only returns a <code>NextToken</code>, which can then be used
     * in subsequent calls to fetch the result set. To resume pagination, provide the
     * <code>NextToken</code> value in the subsequent command.</p> <p>If the row size
     * is large (e.g. a row has many columns), Timestream may return fewer rows to keep
     * the response size from exceeding the 1 MB limit. If <code>MaxRows</code> is not
     * provided, Timestream will send the necessary number of rows to meet the 1 MB
     * limit.</p>
     */
    inline bool MaxRowsHasBeenSet() const { return m_maxRowsHasBeenSet; }

    /**
     * <p> The total number of rows to be returned in the <code>Query</code> output.
     * The initial run of <code>Query</code> with a <code>MaxRows</code> value
     * specified will return the result set of the query in two cases: </p> <ul> <li>
     * <p>The size of the result is less than <code>1MB</code>.</p> </li> <li> <p>The
     * number of rows in the result set is less than the value of
     * <code>maxRows</code>.</p> </li> </ul> <p>Otherwise, the initial invocation of
     * <code>Query</code> only returns a <code>NextToken</code>, which can then be used
     * in subsequent calls to fetch the result set. To resume pagination, provide the
     * <code>NextToken</code> value in the subsequent command.</p> <p>If the row size
     * is large (e.g. a row has many columns), Timestream may return fewer rows to keep
     * the response size from exceeding the 1 MB limit. If <code>MaxRows</code> is not
     * provided, Timestream will send the necessary number of rows to meet the 1 MB
     * limit.</p>
     */
    inline void SetMaxRows(int value) { m_maxRowsHasBeenSet = true; m_maxRows = value; }

    /**
     * <p> The total number of rows to be returned in the <code>Query</code> output.
     * The initial run of <code>Query</code> with a <code>MaxRows</code> value
     * specified will return the result set of the query in two cases: </p> <ul> <li>
     * <p>The size of the result is less than <code>1MB</code>.</p> </li> <li> <p>The
     * number of rows in the result set is less than the value of
     * <code>maxRows</code>.</p> </li> </ul> <p>Otherwise, the initial invocation of
     * <code>Query</code> only returns a <code>NextToken</code>, which can then be used
     * in subsequent calls to fetch the result set. To resume pagination, provide the
     * <code>NextToken</code> value in the subsequent command.</p> <p>If the row size
     * is large (e.g. a row has many columns), Timestream may return fewer rows to keep
     * the response size from exceeding the 1 MB limit. If <code>MaxRows</code> is not
     * provided, Timestream will send the necessary number of rows to meet the 1 MB
     * limit.</p>
     */
    inline QueryRequest& WithMaxRows(int value) { SetMaxRows(value); return *this;}

  private:

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxRows;
    bool m_maxRowsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
