/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationLastModifiedDateFilterDateRange.h>

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
 * <p>The filter for the date a subsidiary authorization was last
 * modified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SubsidiaryAuthorizationLastModifiedDateFilter">AWS
 * API Reference</a></p>
 */
class SubsidiaryAuthorizationLastModifiedDateFilter {
 public:
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationLastModifiedDateFilter() = default;
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationLastModifiedDateFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationLastModifiedDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A date range to filter by. The operation returns subsidiary authorizations
   * with last modified dates that fall within this range.</p>
   */
  inline const SubsidiaryAuthorizationLastModifiedDateFilterDateRange& GetDateRange() const { return m_dateRange; }
  inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }
  template <typename DateRangeT = SubsidiaryAuthorizationLastModifiedDateFilterDateRange>
  void SetDateRange(DateRangeT&& value) {
    m_dateRangeHasBeenSet = true;
    m_dateRange = std::forward<DateRangeT>(value);
  }
  template <typename DateRangeT = SubsidiaryAuthorizationLastModifiedDateFilterDateRange>
  SubsidiaryAuthorizationLastModifiedDateFilter& WithDateRange(DateRangeT&& value) {
    SetDateRange(std::forward<DateRangeT>(value));
    return *this;
  }
  ///@}
 private:
  SubsidiaryAuthorizationLastModifiedDateFilterDateRange m_dateRange;
  bool m_dateRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
