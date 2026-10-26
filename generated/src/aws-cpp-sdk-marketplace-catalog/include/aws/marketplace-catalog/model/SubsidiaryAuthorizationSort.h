/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/SortOrder.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationSortBy.h>

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
 * <p>Specifies the field to sort subsidiary authorizations by and the order
 * (ascending or descending) to apply.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SubsidiaryAuthorizationSort">AWS
 * API Reference</a></p>
 */
class SubsidiaryAuthorizationSort {
 public:
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationSort() = default;
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationSort(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationSort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field to sort subsidiary authorizations by. Valid values are
   * <code>EntityId</code>, <code>Status</code>, <code>ResourceId</code>,
   * <code>SubsidiaryAccountId</code>, <code>CreatedDate</code>, and
   * <code>LastModifiedDate</code>.</p>
   */
  inline SubsidiaryAuthorizationSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(SubsidiaryAuthorizationSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline SubsidiaryAuthorizationSort& WithSortBy(SubsidiaryAuthorizationSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sorting order. Can be <code>ASCENDING</code> or <code>DESCENDING</code>.
   * The default value is <code>DESCENDING</code>.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline SubsidiaryAuthorizationSort& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}
 private:
  SubsidiaryAuthorizationSortBy m_sortBy{SubsidiaryAuthorizationSortBy::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
