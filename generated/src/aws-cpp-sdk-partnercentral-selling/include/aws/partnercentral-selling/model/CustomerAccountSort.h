/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/SortOrder.h>
#include <aws/partnercentral-selling/model/SortableField.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>The field to sort customer accounts by, and the sort direction.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CustomerAccountSort">AWS
 * API Reference</a></p>
 */
class CustomerAccountSort {
 public:
  AWS_PARTNERCENTRALSELLING_API CustomerAccountSort() = default;
  AWS_PARTNERCENTRALSELLING_API CustomerAccountSort(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API CustomerAccountSort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field to sort the results by.</p>
   */
  inline SortableField GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(SortableField value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline CustomerAccountSort& WithSortBy(SortableField value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direction of the sort, either ascending or descending.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline CustomerAccountSort& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}
 private:
  SortableField m_sortBy{SortableField::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
