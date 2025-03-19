/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/MarketplaceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/Sort.h>
#include <aws/marketplace-catalog/model/OwnershipType.h>
#include <aws/marketplace-catalog/model/EntityTypeFilters.h>
#include <aws/marketplace-catalog/model/EntityTypeSort.h>
#include <aws/marketplace-catalog/model/Filter.h>
#include <utility>

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   */
  class ListEntitiesRequest : public MarketplaceCatalogRequest
  {
  public:
    AWS_MARKETPLACECATALOG_API ListEntitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEntities"; }

    AWS_MARKETPLACECATALOG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    ListEntitiesRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of entities to retrieve. Valid values are: <code>AmiProduct</code>,
     * <code>ContainerProduct</code>, <code>DataProduct</code>,
     * <code>SaaSProduct</code>, <code>ProcurementPolicy</code>,
     * <code>Experience</code>, <code>Audience</code>, <code>BrandingSettings</code>,
     * <code>Offer</code>, <code>Seller</code>, <code>ResaleAuthorization</code>.</p>
     */
    inline const Aws::String& GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    template<typename EntityTypeT = Aws::String>
    void SetEntityType(EntityTypeT&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::forward<EntityTypeT>(value); }
    template<typename EntityTypeT = Aws::String>
    ListEntitiesRequest& WithEntityType(EntityTypeT&& value) { SetEntityType(std::forward<EntityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of filter objects. Each filter object contains two attributes,
     * <code>filterName</code> and <code>filterValues</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilterList() const { return m_filterList; }
    inline bool FilterListHasBeenSet() const { return m_filterListHasBeenSet; }
    template<typename FilterListT = Aws::Vector<Filter>>
    void SetFilterList(FilterListT&& value) { m_filterListHasBeenSet = true; m_filterList = std::forward<FilterListT>(value); }
    template<typename FilterListT = Aws::Vector<Filter>>
    ListEntitiesRequest& WithFilterList(FilterListT&& value) { SetFilterList(std::forward<FilterListT>(value)); return *this;}
    template<typename FilterListT = Filter>
    ListEntitiesRequest& AddFilterList(FilterListT&& value) { m_filterListHasBeenSet = true; m_filterList.emplace_back(std::forward<FilterListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains two attributes, <code>SortBy</code> and
     * <code>SortOrder</code>.</p>
     */
    inline const Sort& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = Sort>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = Sort>
    ListEntitiesRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEntitiesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the upper limit of the elements on a single page. If a value isn't
     * provided, the default value is 20.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEntitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the returned set of entities based on their owner. The default is
     * <code>SELF</code>. To list entities shared with you through AWS Resource Access
     * Manager (AWS RAM), set to <code>SHARED</code>. Entities shared through the AWS
     * Marketplace Catalog API <code>PutResourcePolicy</code> operation can't be
     * discovered through the <code>SHARED</code> parameter.</p>
     */
    inline OwnershipType GetOwnershipType() const { return m_ownershipType; }
    inline bool OwnershipTypeHasBeenSet() const { return m_ownershipTypeHasBeenSet; }
    inline void SetOwnershipType(OwnershipType value) { m_ownershipTypeHasBeenSet = true; m_ownershipType = value; }
    inline ListEntitiesRequest& WithOwnershipType(OwnershipType value) { SetOwnershipType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Union object containing filter shapes for all <code>EntityType</code>s.
     * Each <code>EntityTypeFilter</code> shape will have filters applicable for that
     * <code>EntityType</code> that can be used to search or filter entities.</p>
     */
    inline const EntityTypeFilters& GetEntityTypeFilters() const { return m_entityTypeFilters; }
    inline bool EntityTypeFiltersHasBeenSet() const { return m_entityTypeFiltersHasBeenSet; }
    template<typename EntityTypeFiltersT = EntityTypeFilters>
    void SetEntityTypeFilters(EntityTypeFiltersT&& value) { m_entityTypeFiltersHasBeenSet = true; m_entityTypeFilters = std::forward<EntityTypeFiltersT>(value); }
    template<typename EntityTypeFiltersT = EntityTypeFilters>
    ListEntitiesRequest& WithEntityTypeFilters(EntityTypeFiltersT&& value) { SetEntityTypeFilters(std::forward<EntityTypeFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Union object containing <code>Sort</code> shapes for all
     * <code>EntityType</code>s. Each <code>EntityTypeSort</code> shape will have
     * <code>SortBy</code> and <code>SortOrder</code> applicable for fields on that
     * <code>EntityType</code>. This can be used to sort the results of the filter
     * query.</p>
     */
    inline const EntityTypeSort& GetEntityTypeSort() const { return m_entityTypeSort; }
    inline bool EntityTypeSortHasBeenSet() const { return m_entityTypeSortHasBeenSet; }
    template<typename EntityTypeSortT = EntityTypeSort>
    void SetEntityTypeSort(EntityTypeSortT&& value) { m_entityTypeSortHasBeenSet = true; m_entityTypeSort = std::forward<EntityTypeSortT>(value); }
    template<typename EntityTypeSortT = EntityTypeSort>
    ListEntitiesRequest& WithEntityTypeSort(EntityTypeSortT&& value) { SetEntityTypeSort(std::forward<EntityTypeSortT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::Vector<Filter> m_filterList;
    bool m_filterListHasBeenSet = false;

    Sort m_sort;
    bool m_sortHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    OwnershipType m_ownershipType{OwnershipType::NOT_SET};
    bool m_ownershipTypeHasBeenSet = false;

    EntityTypeFilters m_entityTypeFilters;
    bool m_entityTypeFiltersHasBeenSet = false;

    EntityTypeSort m_entityTypeSort;
    bool m_entityTypeSortHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
