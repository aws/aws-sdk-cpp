/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationSortBy.h>
#include <aws/marketplace-catalog/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>The sort fields for express private offer configurations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ExpressPrivateOfferConfigurationSort">AWS
 * API Reference</a></p>
 */
class ExpressPrivateOfferConfigurationSort {
 public:
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationSort() = default;
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationSort(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationSort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field to sort by. Valid values are <code>EntityId</code>,
   * <code>LastModifiedDate</code>, <code>ProductId</code>, and
   * <code>State</code>.</p>
   */
  inline ExpressPrivateOfferConfigurationSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(ExpressPrivateOfferConfigurationSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ExpressPrivateOfferConfigurationSort& WithSortBy(ExpressPrivateOfferConfigurationSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sorting order. Valid values are <code>ASCENDING</code> and
   * <code>DESCENDING</code>.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ExpressPrivateOfferConfigurationSort& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}
 private:
  ExpressPrivateOfferConfigurationSortBy m_sortBy{ExpressPrivateOfferConfigurationSortBy::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
