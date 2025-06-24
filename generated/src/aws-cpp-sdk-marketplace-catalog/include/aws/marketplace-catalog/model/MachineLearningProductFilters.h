/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/MachineLearningProductEntityIdFilter.h>
#include <aws/marketplace-catalog/model/MachineLearningProductLastModifiedDateFilter.h>
#include <aws/marketplace-catalog/model/MachineLearningProductTitleFilter.h>
#include <aws/marketplace-catalog/model/MachineLearningProductVisibilityFilter.h>
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
   * <p>The filters that you can use with the ListEntities operation to filter
   * machine learning products. You can filter by EntityId, LastModifiedDate,
   * ProductTitle, and Visibility.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/MachineLearningProductFilters">AWS
   * API Reference</a></p>
   */
  class MachineLearningProductFilters
  {
  public:
    AWS_MARKETPLACECATALOG_API MachineLearningProductFilters() = default;
    AWS_MARKETPLACECATALOG_API MachineLearningProductFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API MachineLearningProductFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter machine learning products by their entity IDs.</p>
     */
    inline const MachineLearningProductEntityIdFilter& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = MachineLearningProductEntityIdFilter>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = MachineLearningProductEntityIdFilter>
    MachineLearningProductFilters& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter machine learning products by their last modified date.</p>
     */
    inline const MachineLearningProductLastModifiedDateFilter& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = MachineLearningProductLastModifiedDateFilter>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = MachineLearningProductLastModifiedDateFilter>
    MachineLearningProductFilters& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter machine learning products by their product titles.</p>
     */
    inline const MachineLearningProductTitleFilter& GetProductTitle() const { return m_productTitle; }
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }
    template<typename ProductTitleT = MachineLearningProductTitleFilter>
    void SetProductTitle(ProductTitleT&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::forward<ProductTitleT>(value); }
    template<typename ProductTitleT = MachineLearningProductTitleFilter>
    MachineLearningProductFilters& WithProductTitle(ProductTitleT&& value) { SetProductTitle(std::forward<ProductTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter machine learning products by their visibility status.</p>
     */
    inline const MachineLearningProductVisibilityFilter& GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    template<typename VisibilityT = MachineLearningProductVisibilityFilter>
    void SetVisibility(VisibilityT&& value) { m_visibilityHasBeenSet = true; m_visibility = std::forward<VisibilityT>(value); }
    template<typename VisibilityT = MachineLearningProductVisibilityFilter>
    MachineLearningProductFilters& WithVisibility(VisibilityT&& value) { SetVisibility(std::forward<VisibilityT>(value)); return *this;}
    ///@}
  private:

    MachineLearningProductEntityIdFilter m_entityId;
    bool m_entityIdHasBeenSet = false;

    MachineLearningProductLastModifiedDateFilter m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    MachineLearningProductTitleFilter m_productTitle;
    bool m_productTitleHasBeenSet = false;

    MachineLearningProductVisibilityFilter m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
