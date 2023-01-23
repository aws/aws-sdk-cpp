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
    AWS_SERVICECATALOG_API SearchProvisionedProductsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchProvisionedProducts"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline SearchProvisionedProductsRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline SearchProvisionedProductsRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline SearchProvisionedProductsRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline const AccessLevelFilter& GetAccessLevelFilter() const{ return m_accessLevelFilter; }

    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline bool AccessLevelFilterHasBeenSet() const { return m_accessLevelFilterHasBeenSet; }

    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline void SetAccessLevelFilter(const AccessLevelFilter& value) { m_accessLevelFilterHasBeenSet = true; m_accessLevelFilter = value; }

    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline void SetAccessLevelFilter(AccessLevelFilter&& value) { m_accessLevelFilterHasBeenSet = true; m_accessLevelFilter = std::move(value); }

    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline SearchProvisionedProductsRequest& WithAccessLevelFilter(const AccessLevelFilter& value) { SetAccessLevelFilter(value); return *this;}

    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline SearchProvisionedProductsRequest& WithAccessLevelFilter(AccessLevelFilter&& value) { SetAccessLevelFilter(std::move(value)); return *this;}


    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifact</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline const Aws::Map<ProvisionedProductViewFilterBy, Aws::Vector<Aws::String>>& GetFilters() const{ return m_filters; }

    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifact</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifact</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline void SetFilters(const Aws::Map<ProvisionedProductViewFilterBy, Aws::Vector<Aws::String>>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifact</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline void SetFilters(Aws::Map<ProvisionedProductViewFilterBy, Aws::Vector<Aws::String>>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifact</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline SearchProvisionedProductsRequest& WithFilters(const Aws::Map<ProvisionedProductViewFilterBy, Aws::Vector<Aws::String>>& value) { SetFilters(value); return *this;}

    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifact</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline SearchProvisionedProductsRequest& WithFilters(Aws::Map<ProvisionedProductViewFilterBy, Aws::Vector<Aws::String>>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifact</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline SearchProvisionedProductsRequest& AddFilters(const ProvisionedProductViewFilterBy& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }

    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifact</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline SearchProvisionedProductsRequest& AddFilters(ProvisionedProductViewFilterBy&& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifact</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline SearchProvisionedProductsRequest& AddFilters(const ProvisionedProductViewFilterBy& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The search filters.</p> <p>When the key is <code>SearchQuery</code>, the
     * searchable fields are <code>arn</code>, <code>createdTime</code>,
     * <code>id</code>, <code>lastRecordId</code>, <code>idempotencyToken</code>,
     * <code>name</code>, <code>physicalId</code>, <code>productId</code>,
     * <code>provisioningArtifact</code>, <code>type</code>, <code>status</code>,
     * <code>tags</code>, <code>userArn</code>, <code>userArnSession</code>,
     * <code>lastProvisioningRecordId</code>,
     * <code>lastSuccessfulProvisioningRecordId</code>, <code>productName</code>, and
     * <code>provisioningArtifactName</code>.</p> <p>Example:
     * <code>"SearchQuery":["status:AVAILABLE"]</code> </p>
     */
    inline SearchProvisionedProductsRequest& AddFilters(ProvisionedProductViewFilterBy&& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The sort field. If no value is specified, the results are not sorted. The
     * valid values are <code>arn</code>, <code>id</code>, <code>name</code>, and
     * <code>lastRecordId</code>.</p>
     */
    inline const Aws::String& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The sort field. If no value is specified, the results are not sorted. The
     * valid values are <code>arn</code>, <code>id</code>, <code>name</code>, and
     * <code>lastRecordId</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The sort field. If no value is specified, the results are not sorted. The
     * valid values are <code>arn</code>, <code>id</code>, <code>name</code>, and
     * <code>lastRecordId</code>.</p>
     */
    inline void SetSortBy(const Aws::String& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The sort field. If no value is specified, the results are not sorted. The
     * valid values are <code>arn</code>, <code>id</code>, <code>name</code>, and
     * <code>lastRecordId</code>.</p>
     */
    inline void SetSortBy(Aws::String&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The sort field. If no value is specified, the results are not sorted. The
     * valid values are <code>arn</code>, <code>id</code>, <code>name</code>, and
     * <code>lastRecordId</code>.</p>
     */
    inline void SetSortBy(const char* value) { m_sortByHasBeenSet = true; m_sortBy.assign(value); }

    /**
     * <p>The sort field. If no value is specified, the results are not sorted. The
     * valid values are <code>arn</code>, <code>id</code>, <code>name</code>, and
     * <code>lastRecordId</code>.</p>
     */
    inline SearchProvisionedProductsRequest& WithSortBy(const Aws::String& value) { SetSortBy(value); return *this;}

    /**
     * <p>The sort field. If no value is specified, the results are not sorted. The
     * valid values are <code>arn</code>, <code>id</code>, <code>name</code>, and
     * <code>lastRecordId</code>.</p>
     */
    inline SearchProvisionedProductsRequest& WithSortBy(Aws::String&& value) { SetSortBy(std::move(value)); return *this;}

    /**
     * <p>The sort field. If no value is specified, the results are not sorted. The
     * valid values are <code>arn</code>, <code>id</code>, <code>name</code>, and
     * <code>lastRecordId</code>.</p>
     */
    inline SearchProvisionedProductsRequest& WithSortBy(const char* value) { SetSortBy(value); return *this;}


    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline SearchProvisionedProductsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order. If no value is specified, the results are not sorted.</p>
     */
    inline SearchProvisionedProductsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline SearchProvisionedProductsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline SearchProvisionedProductsRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline SearchProvisionedProductsRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline SearchProvisionedProductsRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    AccessLevelFilter m_accessLevelFilter;
    bool m_accessLevelFilterHasBeenSet = false;

    Aws::Map<ProvisionedProductViewFilterBy, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
