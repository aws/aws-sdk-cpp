/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class SearchResourcesRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API SearchResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchResources"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition. For more information, see <a>CreateGroup</a>.</p>
     */
    inline const ResourceQuery& GetResourceQuery() const{ return m_resourceQuery; }

    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition. For more information, see <a>CreateGroup</a>.</p>
     */
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }

    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition. For more information, see <a>CreateGroup</a>.</p>
     */
    inline void SetResourceQuery(const ResourceQuery& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = value; }

    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition. For more information, see <a>CreateGroup</a>.</p>
     */
    inline void SetResourceQuery(ResourceQuery&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::move(value); }

    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition. For more information, see <a>CreateGroup</a>.</p>
     */
    inline SearchResourcesRequest& WithResourceQuery(const ResourceQuery& value) { SetResourceQuery(value); return *this;}

    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition. For more information, see <a>CreateGroup</a>.</p>
     */
    inline SearchResourcesRequest& WithResourceQuery(ResourceQuery&& value) { SetResourceQuery(std::move(value)); return *this;}


    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline SearchResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline SearchResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline SearchResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline SearchResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
