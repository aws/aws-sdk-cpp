/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/DataProductEntityIdFilter.h>
#include <aws/marketplace-catalog/model/DataProductTitleFilter.h>
#include <aws/marketplace-catalog/model/DataProductVisibilityFilter.h>
#include <aws/marketplace-catalog/model/DataProductLastModifiedDateFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Object containing all the filter fields for data products. Client can add
   * only one wildcard filter and a maximum of 8 filters in a single
   * <code>ListEntities</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DataProductFilters">AWS
   * API Reference</a></p>
   */
  class DataProductFilters
  {
  public:
    AWS_MARKETPLACECATALOG_API DataProductFilters() = default;
    AWS_MARKETPLACECATALOG_API DataProductFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API DataProductFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the data product.</p>
     */
    inline const DataProductEntityIdFilter& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = DataProductEntityIdFilter>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = DataProductEntityIdFilter>
    DataProductFilters& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the data product.</p>
     */
    inline const DataProductTitleFilter& GetProductTitle() const { return m_productTitle; }
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }
    template<typename ProductTitleT = DataProductTitleFilter>
    void SetProductTitle(ProductTitleT&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::forward<ProductTitleT>(value); }
    template<typename ProductTitleT = DataProductTitleFilter>
    DataProductFilters& WithProductTitle(ProductTitleT&& value) { SetProductTitle(std::forward<ProductTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the data product.</p>
     */
    inline const DataProductVisibilityFilter& GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    template<typename VisibilityT = DataProductVisibilityFilter>
    void SetVisibility(VisibilityT&& value) { m_visibilityHasBeenSet = true; m_visibility = std::forward<VisibilityT>(value); }
    template<typename VisibilityT = DataProductVisibilityFilter>
    DataProductFilters& WithVisibility(VisibilityT&& value) { SetVisibility(std::forward<VisibilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date on which the data product was modified.</p>
     */
    inline const DataProductLastModifiedDateFilter& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = DataProductLastModifiedDateFilter>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = DataProductLastModifiedDateFilter>
    DataProductFilters& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}
  private:

    DataProductEntityIdFilter m_entityId;
    bool m_entityIdHasBeenSet = false;

    DataProductTitleFilter m_productTitle;
    bool m_productTitleHasBeenSet = false;

    DataProductVisibilityFilter m_visibility;
    bool m_visibilityHasBeenSet = false;

    DataProductLastModifiedDateFilter m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
