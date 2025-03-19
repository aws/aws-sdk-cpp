/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/ProductViewSortBy.h>
#include <aws/servicecatalog/model/SortOrder.h>
#include <aws/servicecatalog/model/ProductSource.h>
#include <aws/servicecatalog/model/ProductViewFilterBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class SearchProductsAsAdminRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API SearchProductsAsAdminRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchProductsAsAdmin"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    SearchProductsAsAdminRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const { return m_portfolioId; }
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }
    template<typename PortfolioIdT = Aws::String>
    void SetPortfolioId(PortfolioIdT&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::forward<PortfolioIdT>(value); }
    template<typename PortfolioIdT = Aws::String>
    SearchProductsAsAdminRequest& WithPortfolioId(PortfolioIdT&& value) { SetPortfolioId(std::forward<PortfolioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search filters. If no search filters are specified, the output includes
     * all products to which the administrator has access.</p>
     */
    inline const Aws::Map<ProductViewFilterBy, Aws::Vector<Aws::String>>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Map<ProductViewFilterBy, Aws::Vector<Aws::String>>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Map<ProductViewFilterBy, Aws::Vector<Aws::String>>>
    SearchProductsAsAdminRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    inline SearchProductsAsAdminRequest& AddFilters(ProductViewFilterBy key, Aws::Vector<Aws::String> value) {
      m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The sort field. If no value is specified, the results are not sorted.</p>
     */
    inline ProductViewSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ProductViewSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline SearchProductsAsAdminRequest& WithSortBy(ProductViewSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline SearchProductsAsAdminRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    SearchProductsAsAdminRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline SearchProductsAsAdminRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Access level of the source of the product.</p>
     */
    inline ProductSource GetProductSource() const { return m_productSource; }
    inline bool ProductSourceHasBeenSet() const { return m_productSourceHasBeenSet; }
    inline void SetProductSource(ProductSource value) { m_productSourceHasBeenSet = true; m_productSource = value; }
    inline SearchProductsAsAdminRequest& WithProductSource(ProductSource value) { SetProductSource(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    Aws::Map<ProductViewFilterBy, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    ProductViewSortBy m_sortBy{ProductViewSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    ProductSource m_productSource{ProductSource::NOT_SET};
    bool m_productSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
