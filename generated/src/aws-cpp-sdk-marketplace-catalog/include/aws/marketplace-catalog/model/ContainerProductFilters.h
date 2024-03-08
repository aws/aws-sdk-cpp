/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ContainerProductEntityIdFilter.h>
#include <aws/marketplace-catalog/model/ContainerProductLastModifiedDateFilter.h>
#include <aws/marketplace-catalog/model/ContainerProductTitleFilter.h>
#include <aws/marketplace-catalog/model/ContainerProductVisibilityFilter.h>
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
   * <p>Object containing all the filter fields for container products. Client can
   * add only one wildcard filter and a maximum of 8 filters in a single
   * <code>ListEntities</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ContainerProductFilters">AWS
   * API Reference</a></p>
   */
  class ContainerProductFilters
  {
  public:
    AWS_MARKETPLACECATALOG_API ContainerProductFilters();
    AWS_MARKETPLACECATALOG_API ContainerProductFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ContainerProductFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for the container product.</p>
     */
    inline const ContainerProductEntityIdFilter& GetEntityId() const{ return m_entityId; }

    /**
     * <p>Unique identifier for the container product.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>Unique identifier for the container product.</p>
     */
    inline void SetEntityId(const ContainerProductEntityIdFilter& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>Unique identifier for the container product.</p>
     */
    inline void SetEntityId(ContainerProductEntityIdFilter&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>Unique identifier for the container product.</p>
     */
    inline ContainerProductFilters& WithEntityId(const ContainerProductEntityIdFilter& value) { SetEntityId(value); return *this;}

    /**
     * <p>Unique identifier for the container product.</p>
     */
    inline ContainerProductFilters& WithEntityId(ContainerProductEntityIdFilter&& value) { SetEntityId(std::move(value)); return *this;}


    /**
     * <p>The last date on which the container product was modified.</p>
     */
    inline const ContainerProductLastModifiedDateFilter& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last date on which the container product was modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The last date on which the container product was modified.</p>
     */
    inline void SetLastModifiedDate(const ContainerProductLastModifiedDateFilter& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last date on which the container product was modified.</p>
     */
    inline void SetLastModifiedDate(ContainerProductLastModifiedDateFilter&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last date on which the container product was modified.</p>
     */
    inline ContainerProductFilters& WithLastModifiedDate(const ContainerProductLastModifiedDateFilter& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last date on which the container product was modified.</p>
     */
    inline ContainerProductFilters& WithLastModifiedDate(ContainerProductLastModifiedDateFilter&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The title of the container product.</p>
     */
    inline const ContainerProductTitleFilter& GetProductTitle() const{ return m_productTitle; }

    /**
     * <p>The title of the container product.</p>
     */
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }

    /**
     * <p>The title of the container product.</p>
     */
    inline void SetProductTitle(const ContainerProductTitleFilter& value) { m_productTitleHasBeenSet = true; m_productTitle = value; }

    /**
     * <p>The title of the container product.</p>
     */
    inline void SetProductTitle(ContainerProductTitleFilter&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::move(value); }

    /**
     * <p>The title of the container product.</p>
     */
    inline ContainerProductFilters& WithProductTitle(const ContainerProductTitleFilter& value) { SetProductTitle(value); return *this;}

    /**
     * <p>The title of the container product.</p>
     */
    inline ContainerProductFilters& WithProductTitle(ContainerProductTitleFilter&& value) { SetProductTitle(std::move(value)); return *this;}


    /**
     * <p>The visibility of the container product.</p>
     */
    inline const ContainerProductVisibilityFilter& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of the container product.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of the container product.</p>
     */
    inline void SetVisibility(const ContainerProductVisibilityFilter& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of the container product.</p>
     */
    inline void SetVisibility(ContainerProductVisibilityFilter&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of the container product.</p>
     */
    inline ContainerProductFilters& WithVisibility(const ContainerProductVisibilityFilter& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of the container product.</p>
     */
    inline ContainerProductFilters& WithVisibility(ContainerProductVisibilityFilter&& value) { SetVisibility(std::move(value)); return *this;}

  private:

    ContainerProductEntityIdFilter m_entityId;
    bool m_entityIdHasBeenSet = false;

    ContainerProductLastModifiedDateFilter m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    ContainerProductTitleFilter m_productTitle;
    bool m_productTitleHasBeenSet = false;

    ContainerProductVisibilityFilter m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
