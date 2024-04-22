/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/Route53ProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53Profiles
{
namespace Model
{

  /**
   */
  class ListProfilesRequest : public Route53ProfilesRequest
  {
  public:
    AWS_ROUTE53PROFILES_API ListProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfiles"; }

    AWS_ROUTE53PROFILES_API Aws::String SerializePayload() const override;

    AWS_ROUTE53PROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The maximum number of objects that you want to return for this request. If
     * more objects are available, in the response, a <code>NextToken</code> value,
     * which you can use in a subsequent call to get the next batch of objects, is
     * provided.</p> <p> If you don't specify a value for <code>MaxResults</code>, up
     * to 100 objects are returned. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of objects that you want to return for this request. If
     * more objects are available, in the response, a <code>NextToken</code> value,
     * which you can use in a subsequent call to get the next batch of objects, is
     * provided.</p> <p> If you don't specify a value for <code>MaxResults</code>, up
     * to 100 objects are returned. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of objects that you want to return for this request. If
     * more objects are available, in the response, a <code>NextToken</code> value,
     * which you can use in a subsequent call to get the next batch of objects, is
     * provided.</p> <p> If you don't specify a value for <code>MaxResults</code>, up
     * to 100 objects are returned. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of objects that you want to return for this request. If
     * more objects are available, in the response, a <code>NextToken</code> value,
     * which you can use in a subsequent call to get the next batch of objects, is
     * provided.</p> <p> If you don't specify a value for <code>MaxResults</code>, up
     * to 100 objects are returned. </p>
     */
    inline ListProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> For the first call to this list request, omit this value. </p> <p>When you
     * request a list of objects, at most the number of objects specified by
     * <code>MaxResults</code> is returned. If more objects are available for
     * retrieval, a <code>NextToken</code> value is returned in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> For the first call to this list request, omit this value. </p> <p>When you
     * request a list of objects, at most the number of objects specified by
     * <code>MaxResults</code> is returned. If more objects are available for
     * retrieval, a <code>NextToken</code> value is returned in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> For the first call to this list request, omit this value. </p> <p>When you
     * request a list of objects, at most the number of objects specified by
     * <code>MaxResults</code> is returned. If more objects are available for
     * retrieval, a <code>NextToken</code> value is returned in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> For the first call to this list request, omit this value. </p> <p>When you
     * request a list of objects, at most the number of objects specified by
     * <code>MaxResults</code> is returned. If more objects are available for
     * retrieval, a <code>NextToken</code> value is returned in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> For the first call to this list request, omit this value. </p> <p>When you
     * request a list of objects, at most the number of objects specified by
     * <code>MaxResults</code> is returned. If more objects are available for
     * retrieval, a <code>NextToken</code> value is returned in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> For the first call to this list request, omit this value. </p> <p>When you
     * request a list of objects, at most the number of objects specified by
     * <code>MaxResults</code> is returned. If more objects are available for
     * retrieval, a <code>NextToken</code> value is returned in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline ListProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> For the first call to this list request, omit this value. </p> <p>When you
     * request a list of objects, at most the number of objects specified by
     * <code>MaxResults</code> is returned. If more objects are available for
     * retrieval, a <code>NextToken</code> value is returned in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline ListProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> For the first call to this list request, omit this value. </p> <p>When you
     * request a list of objects, at most the number of objects specified by
     * <code>MaxResults</code> is returned. If more objects are available for
     * retrieval, a <code>NextToken</code> value is returned in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline ListProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
