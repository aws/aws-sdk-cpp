/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AmiProductEntityIdFilter.h>
#include <aws/marketplace-catalog/model/AmiProductLastModifiedDateFilter.h>
#include <aws/marketplace-catalog/model/AmiProductTitleFilter.h>
#include <aws/marketplace-catalog/model/AmiProductVisibilityFilter.h>
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
   * <p>Object containing all the filter fields for AMI products. Client can add only
   * one wildcard filter and a maximum of 8 filters in a single
   * <code>ListEntities</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/AmiProductFilters">AWS
   * API Reference</a></p>
   */
  class AmiProductFilters
  {
  public:
    AWS_MARKETPLACECATALOG_API AmiProductFilters();
    AWS_MARKETPLACECATALOG_API AmiProductFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API AmiProductFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for the AMI product.</p>
     */
    inline const AmiProductEntityIdFilter& GetEntityId() const{ return m_entityId; }

    /**
     * <p>Unique identifier for the AMI product.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>Unique identifier for the AMI product.</p>
     */
    inline void SetEntityId(const AmiProductEntityIdFilter& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>Unique identifier for the AMI product.</p>
     */
    inline void SetEntityId(AmiProductEntityIdFilter&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>Unique identifier for the AMI product.</p>
     */
    inline AmiProductFilters& WithEntityId(const AmiProductEntityIdFilter& value) { SetEntityId(value); return *this;}

    /**
     * <p>Unique identifier for the AMI product.</p>
     */
    inline AmiProductFilters& WithEntityId(AmiProductEntityIdFilter&& value) { SetEntityId(std::move(value)); return *this;}


    /**
     * <p>The last date on which the AMI product was modified.</p>
     */
    inline const AmiProductLastModifiedDateFilter& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last date on which the AMI product was modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The last date on which the AMI product was modified.</p>
     */
    inline void SetLastModifiedDate(const AmiProductLastModifiedDateFilter& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last date on which the AMI product was modified.</p>
     */
    inline void SetLastModifiedDate(AmiProductLastModifiedDateFilter&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last date on which the AMI product was modified.</p>
     */
    inline AmiProductFilters& WithLastModifiedDate(const AmiProductLastModifiedDateFilter& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last date on which the AMI product was modified.</p>
     */
    inline AmiProductFilters& WithLastModifiedDate(AmiProductLastModifiedDateFilter&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The title of the AMI product.</p>
     */
    inline const AmiProductTitleFilter& GetProductTitle() const{ return m_productTitle; }

    /**
     * <p>The title of the AMI product.</p>
     */
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }

    /**
     * <p>The title of the AMI product.</p>
     */
    inline void SetProductTitle(const AmiProductTitleFilter& value) { m_productTitleHasBeenSet = true; m_productTitle = value; }

    /**
     * <p>The title of the AMI product.</p>
     */
    inline void SetProductTitle(AmiProductTitleFilter&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::move(value); }

    /**
     * <p>The title of the AMI product.</p>
     */
    inline AmiProductFilters& WithProductTitle(const AmiProductTitleFilter& value) { SetProductTitle(value); return *this;}

    /**
     * <p>The title of the AMI product.</p>
     */
    inline AmiProductFilters& WithProductTitle(AmiProductTitleFilter&& value) { SetProductTitle(std::move(value)); return *this;}


    /**
     * <p>The visibility of the AMI product.</p>
     */
    inline const AmiProductVisibilityFilter& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of the AMI product.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of the AMI product.</p>
     */
    inline void SetVisibility(const AmiProductVisibilityFilter& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of the AMI product.</p>
     */
    inline void SetVisibility(AmiProductVisibilityFilter&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of the AMI product.</p>
     */
    inline AmiProductFilters& WithVisibility(const AmiProductVisibilityFilter& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of the AMI product.</p>
     */
    inline AmiProductFilters& WithVisibility(AmiProductVisibilityFilter&& value) { SetVisibility(std::move(value)); return *this;}

  private:

    AmiProductEntityIdFilter m_entityId;
    bool m_entityIdHasBeenSet = false;

    AmiProductLastModifiedDateFilter m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    AmiProductTitleFilter m_productTitle;
    bool m_productTitleHasBeenSet = false;

    AmiProductVisibilityFilter m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
