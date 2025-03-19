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
    AWS_SAGEMAKER_API SearchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Search"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the SageMaker resource to search for.</p>
     */
    inline ResourceType GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(ResourceType value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline SearchRequest& WithResource(ResourceType value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean conditional statement. Resources must satisfy this condition to be
     * included in search results. You must provide at least one subexpression, filter,
     * or nested filter. The maximum number of recursive <code>SubExpressions</code>,
     * <code>NestedFilters</code>, and <code>Filters</code> that can be included in a
     * <code>SearchExpression</code> object is 50.</p>
     */
    inline const SearchExpression& GetSearchExpression() const { return m_searchExpression; }
    inline bool SearchExpressionHasBeenSet() const { return m_searchExpressionHasBeenSet; }
    template<typename SearchExpressionT = SearchExpression>
    void SetSearchExpression(SearchExpressionT&& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = std::forward<SearchExpressionT>(value); }
    template<typename SearchExpressionT = SearchExpression>
    SearchRequest& WithSearchExpression(SearchExpressionT&& value) { SetSearchExpression(std::forward<SearchExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline const Aws::String& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = Aws::String>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = Aws::String>
    SearchRequest& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline SearchSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SearchSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline SearchRequest& WithSortOrder(SearchSortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If more than <code>MaxResults</code> resources match the specified
     * <code>SearchExpression</code>, the response includes a <code>NextToken</code>.
     * The <code>NextToken</code> can be passed to the next <code>SearchRequest</code>
     * to continue retrieving results.</p>
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
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
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
    inline CrossAccountFilterOption GetCrossAccountFilterOption() const { return m_crossAccountFilterOption; }
    inline bool CrossAccountFilterOptionHasBeenSet() const { return m_crossAccountFilterOptionHasBeenSet; }
    inline void SetCrossAccountFilterOption(CrossAccountFilterOption value) { m_crossAccountFilterOptionHasBeenSet = true; m_crossAccountFilterOption = value; }
    inline SearchRequest& WithCrossAccountFilterOption(CrossAccountFilterOption value) { SetCrossAccountFilterOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Limits the results of your search request to the resources that you can
     * access. </p>
     */
    inline const Aws::Vector<VisibilityConditions>& GetVisibilityConditions() const { return m_visibilityConditions; }
    inline bool VisibilityConditionsHasBeenSet() const { return m_visibilityConditionsHasBeenSet; }
    template<typename VisibilityConditionsT = Aws::Vector<VisibilityConditions>>
    void SetVisibilityConditions(VisibilityConditionsT&& value) { m_visibilityConditionsHasBeenSet = true; m_visibilityConditions = std::forward<VisibilityConditionsT>(value); }
    template<typename VisibilityConditionsT = Aws::Vector<VisibilityConditions>>
    SearchRequest& WithVisibilityConditions(VisibilityConditionsT&& value) { SetVisibilityConditions(std::forward<VisibilityConditionsT>(value)); return *this;}
    template<typename VisibilityConditionsT = VisibilityConditions>
    SearchRequest& AddVisibilityConditions(VisibilityConditionsT&& value) { m_visibilityConditionsHasBeenSet = true; m_visibilityConditions.emplace_back(std::forward<VisibilityConditionsT>(value)); return *this; }
    ///@}
  private:

    ResourceType m_resource{ResourceType::NOT_SET};
    bool m_resourceHasBeenSet = false;

    SearchExpression m_searchExpression;
    bool m_searchExpressionHasBeenSet = false;

    Aws::String m_sortBy;
    bool m_sortByHasBeenSet = false;

    SearchSortOrder m_sortOrder{SearchSortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    CrossAccountFilterOption m_crossAccountFilterOption{CrossAccountFilterOption::NOT_SET};
    bool m_crossAccountFilterOptionHasBeenSet = false;

    Aws::Vector<VisibilityConditions> m_visibilityConditions;
    bool m_visibilityConditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
