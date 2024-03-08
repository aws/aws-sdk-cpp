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
    AWS_MARKETPLACECATALOG_API DataProductFilters();
    AWS_MARKETPLACECATALOG_API DataProductFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API DataProductFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for the data product.</p>
     */
    inline const DataProductEntityIdFilter& GetEntityId() const{ return m_entityId; }

    /**
     * <p>Unique identifier for the data product.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>Unique identifier for the data product.</p>
     */
    inline void SetEntityId(const DataProductEntityIdFilter& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>Unique identifier for the data product.</p>
     */
    inline void SetEntityId(DataProductEntityIdFilter&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>Unique identifier for the data product.</p>
     */
    inline DataProductFilters& WithEntityId(const DataProductEntityIdFilter& value) { SetEntityId(value); return *this;}

    /**
     * <p>Unique identifier for the data product.</p>
     */
    inline DataProductFilters& WithEntityId(DataProductEntityIdFilter&& value) { SetEntityId(std::move(value)); return *this;}


    /**
     * <p>The title of the data product.</p>
     */
    inline const DataProductTitleFilter& GetProductTitle() const{ return m_productTitle; }

    /**
     * <p>The title of the data product.</p>
     */
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }

    /**
     * <p>The title of the data product.</p>
     */
    inline void SetProductTitle(const DataProductTitleFilter& value) { m_productTitleHasBeenSet = true; m_productTitle = value; }

    /**
     * <p>The title of the data product.</p>
     */
    inline void SetProductTitle(DataProductTitleFilter&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::move(value); }

    /**
     * <p>The title of the data product.</p>
     */
    inline DataProductFilters& WithProductTitle(const DataProductTitleFilter& value) { SetProductTitle(value); return *this;}

    /**
     * <p>The title of the data product.</p>
     */
    inline DataProductFilters& WithProductTitle(DataProductTitleFilter&& value) { SetProductTitle(std::move(value)); return *this;}


    /**
     * <p>The visibility of the data product.</p>
     */
    inline const DataProductVisibilityFilter& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of the data product.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of the data product.</p>
     */
    inline void SetVisibility(const DataProductVisibilityFilter& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of the data product.</p>
     */
    inline void SetVisibility(DataProductVisibilityFilter&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of the data product.</p>
     */
    inline DataProductFilters& WithVisibility(const DataProductVisibilityFilter& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of the data product.</p>
     */
    inline DataProductFilters& WithVisibility(DataProductVisibilityFilter&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The last date on which the data product was modified.</p>
     */
    inline const DataProductLastModifiedDateFilter& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last date on which the data product was modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The last date on which the data product was modified.</p>
     */
    inline void SetLastModifiedDate(const DataProductLastModifiedDateFilter& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last date on which the data product was modified.</p>
     */
    inline void SetLastModifiedDate(DataProductLastModifiedDateFilter&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last date on which the data product was modified.</p>
     */
    inline DataProductFilters& WithLastModifiedDate(const DataProductLastModifiedDateFilter& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last date on which the data product was modified.</p>
     */
    inline DataProductFilters& WithLastModifiedDate(DataProductLastModifiedDateFilter&& value) { SetLastModifiedDate(std::move(value)); return *this;}

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
