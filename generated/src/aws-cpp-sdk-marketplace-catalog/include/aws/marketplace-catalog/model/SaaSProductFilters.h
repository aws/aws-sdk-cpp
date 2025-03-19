/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/SaaSProductEntityIdFilter.h>
#include <aws/marketplace-catalog/model/SaaSProductTitleFilter.h>
#include <aws/marketplace-catalog/model/SaaSProductVisibilityFilter.h>
#include <aws/marketplace-catalog/model/SaaSProductLastModifiedDateFilter.h>
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
   * <p>Object containing all the filter fields for SaaS products. Client can add
   * only one wildcard filter and a maximum of 8 filters in a single
   * <code>ListEntities</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SaaSProductFilters">AWS
   * API Reference</a></p>
   */
  class SaaSProductFilters
  {
  public:
    AWS_MARKETPLACECATALOG_API SaaSProductFilters() = default;
    AWS_MARKETPLACECATALOG_API SaaSProductFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API SaaSProductFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the SaaS product.</p>
     */
    inline const SaaSProductEntityIdFilter& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = SaaSProductEntityIdFilter>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = SaaSProductEntityIdFilter>
    SaaSProductFilters& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the SaaS product.</p>
     */
    inline const SaaSProductTitleFilter& GetProductTitle() const { return m_productTitle; }
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }
    template<typename ProductTitleT = SaaSProductTitleFilter>
    void SetProductTitle(ProductTitleT&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::forward<ProductTitleT>(value); }
    template<typename ProductTitleT = SaaSProductTitleFilter>
    SaaSProductFilters& WithProductTitle(ProductTitleT&& value) { SetProductTitle(std::forward<ProductTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the SaaS product.</p>
     */
    inline const SaaSProductVisibilityFilter& GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    template<typename VisibilityT = SaaSProductVisibilityFilter>
    void SetVisibility(VisibilityT&& value) { m_visibilityHasBeenSet = true; m_visibility = std::forward<VisibilityT>(value); }
    template<typename VisibilityT = SaaSProductVisibilityFilter>
    SaaSProductFilters& WithVisibility(VisibilityT&& value) { SetVisibility(std::forward<VisibilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date on which the SaaS product was modified.</p>
     */
    inline const SaaSProductLastModifiedDateFilter& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = SaaSProductLastModifiedDateFilter>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = SaaSProductLastModifiedDateFilter>
    SaaSProductFilters& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}
  private:

    SaaSProductEntityIdFilter m_entityId;
    bool m_entityIdHasBeenSet = false;

    SaaSProductTitleFilter m_productTitle;
    bool m_productTitleHasBeenSet = false;

    SaaSProductVisibilityFilter m_visibility;
    bool m_visibilityHasBeenSet = false;

    SaaSProductLastModifiedDateFilter m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
