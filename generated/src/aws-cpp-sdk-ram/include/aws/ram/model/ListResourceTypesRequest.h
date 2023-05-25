/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceRegionScopeFilter.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class ListResourceTypesRequest : public RAMRequest
  {
  public:
    AWS_RAM_API ListResourceTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceTypes"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListResourceTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListResourceTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListResourceTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline ListResourceTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline const ResourceRegionScopeFilter& GetResourceRegionScope() const{ return m_resourceRegionScope; }

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline bool ResourceRegionScopeHasBeenSet() const { return m_resourceRegionScopeHasBeenSet; }

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline void SetResourceRegionScope(const ResourceRegionScopeFilter& value) { m_resourceRegionScopeHasBeenSet = true; m_resourceRegionScope = value; }

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline void SetResourceRegionScope(ResourceRegionScopeFilter&& value) { m_resourceRegionScopeHasBeenSet = true; m_resourceRegionScope = std::move(value); }

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline ListResourceTypesRequest& WithResourceRegionScope(const ResourceRegionScopeFilter& value) { SetResourceRegionScope(value); return *this;}

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline ListResourceTypesRequest& WithResourceRegionScope(ResourceRegionScopeFilter&& value) { SetResourceRegionScope(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ResourceRegionScopeFilter m_resourceRegionScope;
    bool m_resourceRegionScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
