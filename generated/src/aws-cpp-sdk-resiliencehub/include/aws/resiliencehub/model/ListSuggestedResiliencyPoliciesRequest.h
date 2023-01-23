/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class ListSuggestedResiliencyPoliciesRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API ListSuggestedResiliencyPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSuggestedResiliencyPolicies"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;

    AWS_RESILIENCEHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline ListSuggestedResiliencyPoliciesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListSuggestedResiliencyPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListSuggestedResiliencyPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListSuggestedResiliencyPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
