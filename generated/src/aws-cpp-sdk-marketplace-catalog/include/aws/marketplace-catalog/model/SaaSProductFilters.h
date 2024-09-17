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
    AWS_MARKETPLACECATALOG_API SaaSProductFilters();
    AWS_MARKETPLACECATALOG_API SaaSProductFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API SaaSProductFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the SaaS product.</p>
     */
    inline const SaaSProductEntityIdFilter& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const SaaSProductEntityIdFilter& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(SaaSProductEntityIdFilter&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline SaaSProductFilters& WithEntityId(const SaaSProductEntityIdFilter& value) { SetEntityId(value); return *this;}
    inline SaaSProductFilters& WithEntityId(SaaSProductEntityIdFilter&& value) { SetEntityId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the SaaS product.</p>
     */
    inline const SaaSProductTitleFilter& GetProductTitle() const{ return m_productTitle; }
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }
    inline void SetProductTitle(const SaaSProductTitleFilter& value) { m_productTitleHasBeenSet = true; m_productTitle = value; }
    inline void SetProductTitle(SaaSProductTitleFilter&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::move(value); }
    inline SaaSProductFilters& WithProductTitle(const SaaSProductTitleFilter& value) { SetProductTitle(value); return *this;}
    inline SaaSProductFilters& WithProductTitle(SaaSProductTitleFilter&& value) { SetProductTitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the SaaS product.</p>
     */
    inline const SaaSProductVisibilityFilter& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const SaaSProductVisibilityFilter& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(SaaSProductVisibilityFilter&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline SaaSProductFilters& WithVisibility(const SaaSProductVisibilityFilter& value) { SetVisibility(value); return *this;}
    inline SaaSProductFilters& WithVisibility(SaaSProductVisibilityFilter&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date on which the SaaS product was modified.</p>
     */
    inline const SaaSProductLastModifiedDateFilter& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const SaaSProductLastModifiedDateFilter& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(SaaSProductLastModifiedDateFilter&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline SaaSProductFilters& WithLastModifiedDate(const SaaSProductLastModifiedDateFilter& value) { SetLastModifiedDate(value); return *this;}
    inline SaaSProductFilters& WithLastModifiedDate(SaaSProductLastModifiedDateFilter&& value) { SetLastModifiedDate(std::move(value)); return *this;}
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
