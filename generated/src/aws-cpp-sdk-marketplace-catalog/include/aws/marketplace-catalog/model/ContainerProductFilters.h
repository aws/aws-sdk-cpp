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
    AWS_MARKETPLACECATALOG_API ContainerProductFilters() = default;
    AWS_MARKETPLACECATALOG_API ContainerProductFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ContainerProductFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the container product.</p>
     */
    inline const ContainerProductEntityIdFilter& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = ContainerProductEntityIdFilter>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = ContainerProductEntityIdFilter>
    ContainerProductFilters& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date on which the container product was modified.</p>
     */
    inline const ContainerProductLastModifiedDateFilter& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = ContainerProductLastModifiedDateFilter>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = ContainerProductLastModifiedDateFilter>
    ContainerProductFilters& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the container product.</p>
     */
    inline const ContainerProductTitleFilter& GetProductTitle() const { return m_productTitle; }
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }
    template<typename ProductTitleT = ContainerProductTitleFilter>
    void SetProductTitle(ProductTitleT&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::forward<ProductTitleT>(value); }
    template<typename ProductTitleT = ContainerProductTitleFilter>
    ContainerProductFilters& WithProductTitle(ProductTitleT&& value) { SetProductTitle(std::forward<ProductTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the container product.</p>
     */
    inline const ContainerProductVisibilityFilter& GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    template<typename VisibilityT = ContainerProductVisibilityFilter>
    void SetVisibility(VisibilityT&& value) { m_visibilityHasBeenSet = true; m_visibility = std::forward<VisibilityT>(value); }
    template<typename VisibilityT = ContainerProductVisibilityFilter>
    ContainerProductFilters& WithVisibility(VisibilityT&& value) { SetVisibility(std::forward<VisibilityT>(value)); return *this;}
    ///@}
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
