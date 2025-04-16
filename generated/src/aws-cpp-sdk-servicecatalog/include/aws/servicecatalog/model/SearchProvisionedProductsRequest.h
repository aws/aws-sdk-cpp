/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/AccessLevelFilter.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/SortOrder.h>
#include <aws/servicecatalog/model/ProvisionedProductViewFilterBy.h>
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
  class SearchProvisionedProductsRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API SearchProvisionedProductsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchProvisionedProducts"; }

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
    SearchProvisionedProductsRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access level to use to obtain results. The default is
     * <code>Account</code>.</p>
     */
    inline const AccessLevelFilter& GetAccessLevelFilter() const { return m_accessLevelFilter; }
    inline bool AccessLevelFilterHasBeenSet() const { return m_accessLevelFilterHasBeenSet; }
    template<typename AccessLevelFilterT = AccessLevelFilter>
    void SetAccessLevelFilter(AccessLevelFilterT&& value) { m_accessLevelFilterHasBeenSet = true; m_accessLevelFilter = std::forward<AccessLevelFilterT>(value); }
    template<typename AccessLevelFilterT = AccessLevelFilter>
    SearchProvisionedProductsRequest& WithAccessLevelFilter(AccessLevelFilterT&& value) { SetAccessLevelFilter(std::forward<AccessLevelFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifactId</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline const Aws::Map<ProvisionedProductViewFilterBy, Aws::Vector<Aws::String>>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Map<ProvisionedProductViewFilterBy, Aws::Vector<Aws::String>>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Map<ProvisionedProductViewFilterBy, Aws::Vector<Aws::String>>>
    SearchProvisionedProductsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    inline SearchProvisionedProductsRequest& AddFilters(ProvisionedProductViewFilterBy key, Aws::Vector<Aws::String> value) {
      m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The sort field. If no value is specified, the results are not sorted. The
     * valid values are <code>arn</code>, <code>id</code>, <code>name</code>, and
     * <code>lastRecordId</code>.</p>
     */
    inline const Aws::String& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = Aws::String>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = Aws::String>
    SearchProvisionedProductsRequest& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline SearchProvisionedProductsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline SearchProvisionedProductsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
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
    SearchProvisionedProductsRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    AccessLevelFilter m_accessLevelFilter;
    bool m_accessLevelFilterHasBeenSet = false;

    Aws::Map<ProvisionedProductViewFilterBy, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
