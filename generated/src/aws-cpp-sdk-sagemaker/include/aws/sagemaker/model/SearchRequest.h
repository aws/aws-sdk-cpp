/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/ResourceType.h>
#include <aws/sagemaker/model/SearchExpression.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SearchSortOrder.h>
#include <aws/sagemaker/model/CrossAccountFilterOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VisibilityConditions.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class SearchRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API SearchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Search"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the SageMaker resource to search for.</p>
     */
    inline const ResourceType& GetResource() const{ return m_resource; }

    /**
     * <p>The name of the SageMaker resource to search for.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The name of the SageMaker resource to search for.</p>
     */
    inline void SetResource(const ResourceType& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The name of the SageMaker resource to search for.</p>
     */
    inline void SetResource(ResourceType&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The name of the SageMaker resource to search for.</p>
     */
    inline SearchRequest& WithResource(const ResourceType& value) { SetResource(value); return *this;}

    /**
     * <p>The name of the SageMaker resource to search for.</p>
     */
    inline SearchRequest& WithResource(ResourceType&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>A Boolean conditional statement. Resources must satisfy this condition to be
     * included in search results. You must provide at least one subexpression, filter,
     * or nested filter. The maximum number of recursive <code>SubExpressions</code>,
     * <code>NestedFilters</code>, and <code>Filters</code> that can be included in a
     * <code>SearchExpression</code> object is 50.</p>
     */
    inline const SearchExpression& GetSearchExpression() const{ return m_searchExpression; }

    /**
     * <p>A Boolean conditional statement. Resources must satisfy this condition to be
     * included in search results. You must provide at least one subexpression, filter,
     * or nested filter. The maximum number of recursive <code>SubExpressions</code>,
     * <code>NestedFilters</code>, and <code>Filters</code> that can be included in a
     * <code>SearchExpression</code> object is 50.</p>
     */
    inline bool SearchExpressionHasBeenSet() const { return m_searchExpressionHasBeenSet; }

    /**
     * <p>A Boolean conditional statement. Resources must satisfy this condition to be
     * included in search results. You must provide at least one subexpression, filter,
     * or nested filter. The maximum number of recursive <code>SubExpressions</code>,
     * <code>NestedFilters</code>, and <code>Filters</code> that can be included in a
     * <code>SearchExpression</code> object is 50.</p>
     */
    inline void SetSearchExpression(const SearchExpression& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = value; }

    /**
     * <p>A Boolean conditional statement. Resources must satisfy this condition to be
     * included in search results. You must provide at least one subexpression, filter,
     * or nested filter. The maximum number of recursive <code>SubExpressions</code>,
     * <code>NestedFilters</code>, and <code>Filters</code> that can be included in a
     * <code>SearchExpression</code> object is 50.</p>
     */
    inline void SetSearchExpression(SearchExpression&& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = std::move(value); }

    /**
     * <p>A Boolean conditional statement. Resources must satisfy this condition to be
     * included in search results. You must provide at least one subexpression, filter,
     * or nested filter. The maximum number of recursive <code>SubExpressions</code>,
     * <code>NestedFilters</code>, and <code>Filters</code> that can be included in a
     * <code>SearchExpression</code> object is 50.</p>
     */
    inline SearchRequest& WithSearchExpression(const SearchExpression& value) { SetSearchExpression(value); return *this;}

    /**
     * <p>A Boolean conditional statement. Resources must satisfy this condition to be
     * included in search results. You must provide at least one subexpression, filter,
     * or nested filter. The maximum number of recursive <code>SubExpressions</code>,
     * <code>NestedFilters</code>, and <code>Filters</code> that can be included in a
     * <code>SearchExpression</code> object is 50.</p>
     */
    inline SearchRequest& WithSearchExpression(SearchExpression&& value) { SetSearchExpression(std::move(value)); return *this;}


    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline const Aws::String& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline void SetSortBy(const Aws::String& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline void SetSortBy(Aws::String&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline void SetSortBy(const char* value) { m_sortByHasBeenSet = true; m_sortBy.assign(value); }

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline SearchRequest& WithSortBy(const Aws::String& value) { SetSortBy(value); return *this;}

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline SearchRequest& WithSortBy(Aws::String&& value) { SetSortBy(std::move(value)); return *this;}

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline SearchRequest& WithSortBy(const char* value) { SetSortBy(value); return *this;}


    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline const SearchSortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const SearchSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline void SetSortOrder(SearchSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline SearchRequest& WithSortOrder(const SearchSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline SearchRequest& WithSortOrder(SearchSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>If more than <code>MaxResults</code> resources match the specified
     * <code>SearchExpression</code>, the response includes a <code>NextToken</code>.
     * The <code>NextToken</code> can be passed to the next <code>SearchRequest</code>
     * to continue retrieving results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If more than <code>MaxResults</code> resources match the specified
     * <code>SearchExpression</code>, the response includes a <code>NextToken</code>.
     * The <code>NextToken</code> can be passed to the next <code>SearchRequest</code>
     * to continue retrieving results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If more than <code>MaxResults</code> resources match the specified
     * <code>SearchExpression</code>, the response includes a <code>NextToken</code>.
     * The <code>NextToken</code> can be passed to the next <code>SearchRequest</code>
     * to continue retrieving results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If more than <code>MaxResults</code> resources match the specified
     * <code>SearchExpression</code>, the response includes a <code>NextToken</code>.
     * The <code>NextToken</code> can be passed to the next <code>SearchRequest</code>
     * to continue retrieving results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If more than <code>MaxResults</code> resources match the specified
     * <code>SearchExpression</code>, the response includes a <code>NextToken</code>.
     * The <code>NextToken</code> can be passed to the next <code>SearchRequest</code>
     * to continue retrieving results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If more than <code>MaxResults</code> resources match the specified
     * <code>SearchExpression</code>, the response includes a <code>NextToken</code>.
     * The <code>NextToken</code> can be passed to the next <code>SearchRequest</code>
     * to continue retrieving results.</p>
     */
    inline SearchRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> resources match the specified
     * <code>SearchExpression</code>, the response includes a <code>NextToken</code>.
     * The <code>NextToken</code> can be passed to the next <code>SearchRequest</code>
     * to continue retrieving results.</p>
     */
    inline SearchRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> resources match the specified
     * <code>SearchExpression</code>, the response includes a <code>NextToken</code>.
     * The <code>NextToken</code> can be passed to the next <code>SearchRequest</code>
     * to continue retrieving results.</p>
     */
    inline SearchRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline SearchRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> A cross account filter option. When the value is <code>"CrossAccount"</code>
     * the search results will only include resources made discoverable to you from
     * other accounts. When the value is <code>"SameAccount"</code> or
     * <code>null</code> the search results will only include resources from your
     * account. Default is <code>null</code>. For more information on searching for
     * resources made discoverable to your account, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/feature-store-cross-account-discoverability-use.html">
     * Search discoverable resources</a> in the SageMaker Developer Guide. The maximum
     * number of <code>ResourceCatalog</code>s viewable is 1000. </p>
     */
    inline const CrossAccountFilterOption& GetCrossAccountFilterOption() const{ return m_crossAccountFilterOption; }

    /**
     * <p> A cross account filter option. When the value is <code>"CrossAccount"</code>
     * the search results will only include resources made discoverable to you from
     * other accounts. When the value is <code>"SameAccount"</code> or
     * <code>null</code> the search results will only include resources from your
     * account. Default is <code>null</code>. For more information on searching for
     * resources made discoverable to your account, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/feature-store-cross-account-discoverability-use.html">
     * Search discoverable resources</a> in the SageMaker Developer Guide. The maximum
     * number of <code>ResourceCatalog</code>s viewable is 1000. </p>
     */
    inline bool CrossAccountFilterOptionHasBeenSet() const { return m_crossAccountFilterOptionHasBeenSet; }

    /**
     * <p> A cross account filter option. When the value is <code>"CrossAccount"</code>
     * the search results will only include resources made discoverable to you from
     * other accounts. When the value is <code>"SameAccount"</code> or
     * <code>null</code> the search results will only include resources from your
     * account. Default is <code>null</code>. For more information on searching for
     * resources made discoverable to your account, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/feature-store-cross-account-discoverability-use.html">
     * Search discoverable resources</a> in the SageMaker Developer Guide. The maximum
     * number of <code>ResourceCatalog</code>s viewable is 1000. </p>
     */
    inline void SetCrossAccountFilterOption(const CrossAccountFilterOption& value) { m_crossAccountFilterOptionHasBeenSet = true; m_crossAccountFilterOption = value; }

    /**
     * <p> A cross account filter option. When the value is <code>"CrossAccount"</code>
     * the search results will only include resources made discoverable to you from
     * other accounts. When the value is <code>"SameAccount"</code> or
     * <code>null</code> the search results will only include resources from your
     * account. Default is <code>null</code>. For more information on searching for
     * resources made discoverable to your account, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/feature-store-cross-account-discoverability-use.html">
     * Search discoverable resources</a> in the SageMaker Developer Guide. The maximum
     * number of <code>ResourceCatalog</code>s viewable is 1000. </p>
     */
    inline void SetCrossAccountFilterOption(CrossAccountFilterOption&& value) { m_crossAccountFilterOptionHasBeenSet = true; m_crossAccountFilterOption = std::move(value); }

    /**
     * <p> A cross account filter option. When the value is <code>"CrossAccount"</code>
     * the search results will only include resources made discoverable to you from
     * other accounts. When the value is <code>"SameAccount"</code> or
     * <code>null</code> the search results will only include resources from your
     * account. Default is <code>null</code>. For more information on searching for
     * resources made discoverable to your account, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/feature-store-cross-account-discoverability-use.html">
     * Search discoverable resources</a> in the SageMaker Developer Guide. The maximum
     * number of <code>ResourceCatalog</code>s viewable is 1000. </p>
     */
    inline SearchRequest& WithCrossAccountFilterOption(const CrossAccountFilterOption& value) { SetCrossAccountFilterOption(value); return *this;}

    /**
     * <p> A cross account filter option. When the value is <code>"CrossAccount"</code>
     * the search results will only include resources made discoverable to you from
     * other accounts. When the value is <code>"SameAccount"</code> or
     * <code>null</code> the search results will only include resources from your
     * account. Default is <code>null</code>. For more information on searching for
     * resources made discoverable to your account, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/feature-store-cross-account-discoverability-use.html">
     * Search discoverable resources</a> in the SageMaker Developer Guide. The maximum
     * number of <code>ResourceCatalog</code>s viewable is 1000. </p>
     */
    inline SearchRequest& WithCrossAccountFilterOption(CrossAccountFilterOption&& value) { SetCrossAccountFilterOption(std::move(value)); return *this;}


    /**
     * <p> Limits the results of your search request to the resources that you can
     * access. </p>
     */
    inline const Aws::Vector<VisibilityConditions>& GetVisibilityConditions() const{ return m_visibilityConditions; }

    /**
     * <p> Limits the results of your search request to the resources that you can
     * access. </p>
     */
    inline bool VisibilityConditionsHasBeenSet() const { return m_visibilityConditionsHasBeenSet; }

    /**
     * <p> Limits the results of your search request to the resources that you can
     * access. </p>
     */
    inline void SetVisibilityConditions(const Aws::Vector<VisibilityConditions>& value) { m_visibilityConditionsHasBeenSet = true; m_visibilityConditions = value; }

    /**
     * <p> Limits the results of your search request to the resources that you can
     * access. </p>
     */
    inline void SetVisibilityConditions(Aws::Vector<VisibilityConditions>&& value) { m_visibilityConditionsHasBeenSet = true; m_visibilityConditions = std::move(value); }

    /**
     * <p> Limits the results of your search request to the resources that you can
     * access. </p>
     */
    inline SearchRequest& WithVisibilityConditions(const Aws::Vector<VisibilityConditions>& value) { SetVisibilityConditions(value); return *this;}

    /**
     * <p> Limits the results of your search request to the resources that you can
     * access. </p>
     */
    inline SearchRequest& WithVisibilityConditions(Aws::Vector<VisibilityConditions>&& value) { SetVisibilityConditions(std::move(value)); return *this;}

    /**
     * <p> Limits the results of your search request to the resources that you can
     * access. </p>
     */
    inline SearchRequest& AddVisibilityConditions(const VisibilityConditions& value) { m_visibilityConditionsHasBeenSet = true; m_visibilityConditions.push_back(value); return *this; }

    /**
     * <p> Limits the results of your search request to the resources that you can
     * access. </p>
     */
    inline SearchRequest& AddVisibilityConditions(VisibilityConditions&& value) { m_visibilityConditionsHasBeenSet = true; m_visibilityConditions.push_back(std::move(value)); return *this; }

  private:

    ResourceType m_resource;
    bool m_resourceHasBeenSet = false;

    SearchExpression m_searchExpression;
    bool m_searchExpressionHasBeenSet = false;

    Aws::String m_sortBy;
    bool m_sortByHasBeenSet = false;

    SearchSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    CrossAccountFilterOption m_crossAccountFilterOption;
    bool m_crossAccountFilterOptionHasBeenSet = false;

    Aws::Vector<VisibilityConditions> m_visibilityConditions;
    bool m_visibilityConditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
