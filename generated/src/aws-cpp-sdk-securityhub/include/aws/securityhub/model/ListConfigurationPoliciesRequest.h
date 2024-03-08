/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class ListConfigurationPoliciesRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API ListConfigurationPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConfigurationPolicies"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

    AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The NextToken value that's returned from a previous paginated
     * <code>ListConfigurationPolicies</code> request where <code>MaxResults</code> was
     * used but the results exceeded the value of that parameter. Pagination continues
     * from the <code>MaxResults</code> was used but the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The NextToken value that's returned from a previous paginated
     * <code>ListConfigurationPolicies</code> request where <code>MaxResults</code> was
     * used but the results exceeded the value of that parameter. Pagination continues
     * from the <code>MaxResults</code> was used but the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The NextToken value that's returned from a previous paginated
     * <code>ListConfigurationPolicies</code> request where <code>MaxResults</code> was
     * used but the results exceeded the value of that parameter. Pagination continues
     * from the <code>MaxResults</code> was used but the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The NextToken value that's returned from a previous paginated
     * <code>ListConfigurationPolicies</code> request where <code>MaxResults</code> was
     * used but the results exceeded the value of that parameter. Pagination continues
     * from the <code>MaxResults</code> was used but the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The NextToken value that's returned from a previous paginated
     * <code>ListConfigurationPolicies</code> request where <code>MaxResults</code> was
     * used but the results exceeded the value of that parameter. Pagination continues
     * from the <code>MaxResults</code> was used but the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The NextToken value that's returned from a previous paginated
     * <code>ListConfigurationPolicies</code> request where <code>MaxResults</code> was
     * used but the results exceeded the value of that parameter. Pagination continues
     * from the <code>MaxResults</code> was used but the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline ListConfigurationPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The NextToken value that's returned from a previous paginated
     * <code>ListConfigurationPolicies</code> request where <code>MaxResults</code> was
     * used but the results exceeded the value of that parameter. Pagination continues
     * from the <code>MaxResults</code> was used but the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline ListConfigurationPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The NextToken value that's returned from a previous paginated
     * <code>ListConfigurationPolicies</code> request where <code>MaxResults</code> was
     * used but the results exceeded the value of that parameter. Pagination continues
     * from the <code>MaxResults</code> was used but the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline ListConfigurationPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of results that's returned by
     * <code>ListConfigurationPolicies</code> in each page of the response. When this
     * parameter is used, <code>ListConfigurationPolicies</code> returns the specified
     * number of results in a single page and a <code>NextToken</code> response
     * element. You can see the remaining results of the initial request by sending
     * another <code>ListConfigurationPolicies</code> request with the returned
     * <code>NextToken</code> value. A valid range for <code>MaxResults</code> is
     * between 1 and 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results that's returned by
     * <code>ListConfigurationPolicies</code> in each page of the response. When this
     * parameter is used, <code>ListConfigurationPolicies</code> returns the specified
     * number of results in a single page and a <code>NextToken</code> response
     * element. You can see the remaining results of the initial request by sending
     * another <code>ListConfigurationPolicies</code> request with the returned
     * <code>NextToken</code> value. A valid range for <code>MaxResults</code> is
     * between 1 and 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results that's returned by
     * <code>ListConfigurationPolicies</code> in each page of the response. When this
     * parameter is used, <code>ListConfigurationPolicies</code> returns the specified
     * number of results in a single page and a <code>NextToken</code> response
     * element. You can see the remaining results of the initial request by sending
     * another <code>ListConfigurationPolicies</code> request with the returned
     * <code>NextToken</code> value. A valid range for <code>MaxResults</code> is
     * between 1 and 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results that's returned by
     * <code>ListConfigurationPolicies</code> in each page of the response. When this
     * parameter is used, <code>ListConfigurationPolicies</code> returns the specified
     * number of results in a single page and a <code>NextToken</code> response
     * element. You can see the remaining results of the initial request by sending
     * another <code>ListConfigurationPolicies</code> request with the returned
     * <code>NextToken</code> value. A valid range for <code>MaxResults</code> is
     * between 1 and 100. </p>
     */
    inline ListConfigurationPoliciesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
