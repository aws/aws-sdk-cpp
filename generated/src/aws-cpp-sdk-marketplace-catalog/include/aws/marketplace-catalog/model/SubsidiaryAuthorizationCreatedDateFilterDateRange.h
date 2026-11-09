/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

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
 * <p>A date range for filtering subsidiary authorizations by creation
 * date.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SubsidiaryAuthorizationCreatedDateFilterDateRange">AWS
 * API Reference</a></p>
 */
class SubsidiaryAuthorizationCreatedDateFilterDateRange {
 public:
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationCreatedDateFilterDateRange() = default;
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationCreatedDateFilterDateRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationCreatedDateFilterDateRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start date (inclusive) of the date range. The operation returns
   * subsidiary authorizations created on or after this date.</p>
   */
  inline const Aws::String& GetAfterValue() const { return m_afterValue; }
  inline bool AfterValueHasBeenSet() const { return m_afterValueHasBeenSet; }
  template <typename AfterValueT = Aws::String>
  void SetAfterValue(AfterValueT&& value) {
    m_afterValueHasBeenSet = true;
    m_afterValue = std::forward<AfterValueT>(value);
  }
  template <typename AfterValueT = Aws::String>
  SubsidiaryAuthorizationCreatedDateFilterDateRange& WithAfterValue(AfterValueT&& value) {
    SetAfterValue(std::forward<AfterValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date (inclusive) of the date range. The operation returns subsidiary
   * authorizations created on or before this date.</p>
   */
  inline const Aws::String& GetBeforeValue() const { return m_beforeValue; }
  inline bool BeforeValueHasBeenSet() const { return m_beforeValueHasBeenSet; }
  template <typename BeforeValueT = Aws::String>
  void SetBeforeValue(BeforeValueT&& value) {
    m_beforeValueHasBeenSet = true;
    m_beforeValue = std::forward<BeforeValueT>(value);
  }
  template <typename BeforeValueT = Aws::String>
  SubsidiaryAuthorizationCreatedDateFilterDateRange& WithBeforeValue(BeforeValueT&& value) {
    SetBeforeValue(std::forward<BeforeValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_afterValue;

  Aws::String m_beforeValue;
  bool m_afterValueHasBeenSet = false;
  bool m_beforeValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
