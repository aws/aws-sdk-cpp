﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class SearchRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API SearchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Search"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The maximum number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value
     * appropriate to the operation. If additional items exist beyond those included in
     * the current response, the <code>NextToken</code> response element is present and
     * has a value (is not null). Include that value as the <code>NextToken</code>
     * request parameter in the next call to the operation to get the next part of the
     * results.</p>  <p>An API operation can return fewer results than the
     * maximum even when there are more results available. You should check
     * <code>NextToken</code> after every operation to ensure that you receive all of
     * the results.</p> 
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from. The pagination tokens expire after 24
     * hours.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that includes keywords and filters that specify the resources that
     * you want to include in the results.</p> <p>For the complete syntax supported by
     * the <code>QueryString</code> parameter, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/using-search-query-syntax.html">Search
     * query syntax reference for Resource Explorer</a>.</p> <p>The search is
     * completely case insensitive. You can specify an empty string to return all
     * results up to the limit of 1,000 total results.</p>  <p>The operation can
     * return only the first 1,000 results. If the resource you want is not included,
     * then use a different value for <code>QueryString</code> to refine the
     * results.</p> 
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    SearchRequest& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view to use for the query. If you don't specify a
     * value for this parameter, then the operation automatically uses the default view
     * for the Amazon Web Services Region in which you called this operation. If the
     * Region either doesn't have a default view or if you don't have permission to use
     * the default view, then the operation fails with a <code>401 Unauthorized</code>
     * exception.</p>
     */
    inline const Aws::String& GetViewArn() const { return m_viewArn; }
    inline bool ViewArnHasBeenSet() const { return m_viewArnHasBeenSet; }
    template<typename ViewArnT = Aws::String>
    void SetViewArn(ViewArnT&& value) { m_viewArnHasBeenSet = true; m_viewArn = std::forward<ViewArnT>(value); }
    template<typename ViewArnT = Aws::String>
    SearchRequest& WithViewArn(ViewArnT&& value) { SetViewArn(std::forward<ViewArnT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_viewArn;
    bool m_viewArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
