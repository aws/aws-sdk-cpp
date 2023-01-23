/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DescribePackagesFilter.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the request parameters to the <code>DescribePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribePackagesRequest">AWS
   * API Reference</a></p>
   */
  class DescribePackagesRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribePackagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePackages"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline const Aws::Vector<DescribePackagesFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline void SetFilters(const Aws::Vector<DescribePackagesFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline void SetFilters(Aws::Vector<DescribePackagesFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline DescribePackagesRequest& WithFilters(const Aws::Vector<DescribePackagesFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline DescribePackagesRequest& WithFilters(Aws::Vector<DescribePackagesFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline DescribePackagesRequest& AddFilters(const DescribePackagesFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline DescribePackagesRequest& AddFilters(DescribePackagesFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline DescribePackagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If your initial <code>DescribePackageFilters</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribePackageFilters</code> operations, which returns results
     * in the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial <code>DescribePackageFilters</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribePackageFilters</code> operations, which returns results
     * in the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your initial <code>DescribePackageFilters</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribePackageFilters</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your initial <code>DescribePackageFilters</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribePackageFilters</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your initial <code>DescribePackageFilters</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribePackageFilters</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your initial <code>DescribePackageFilters</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribePackageFilters</code> operations, which returns results
     * in the next page.</p>
     */
    inline DescribePackagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial <code>DescribePackageFilters</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribePackageFilters</code> operations, which returns results
     * in the next page.</p>
     */
    inline DescribePackagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial <code>DescribePackageFilters</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribePackageFilters</code> operations, which returns results
     * in the next page.</p>
     */
    inline DescribePackagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DescribePackagesFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
