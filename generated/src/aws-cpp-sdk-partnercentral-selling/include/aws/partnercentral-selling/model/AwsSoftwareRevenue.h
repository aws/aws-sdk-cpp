/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/MonetaryValue.h>

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
 * <p>Seller-provided PARC deal terms for the opportunity, including commitment
 * value, discount percentage, and contract dates.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsSoftwareRevenue">AWS
 * API Reference</a></p>
 */
class AwsSoftwareRevenue {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsSoftwareRevenue() = default;
  AWS_PARTNERCENTRALSELLING_API AwsSoftwareRevenue(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsSoftwareRevenue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const MonetaryValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = MonetaryValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = MonetaryValue>
  AwsSoftwareRevenue& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Discount percentage offered on the software revenue. Percent convention:
   * 15.00 means 15%.</p>
   */
  inline const Aws::String& GetDiscount() const { return m_discount; }
  inline bool DiscountHasBeenSet() const { return m_discountHasBeenSet; }
  template <typename DiscountT = Aws::String>
  void SetDiscount(DiscountT&& value) {
    m_discountHasBeenSet = true;
    m_discount = std::forward<DiscountT>(value);
  }
  template <typename DiscountT = Aws::String>
  AwsSoftwareRevenue& WithDiscount(DiscountT&& value) {
    SetDiscount(std::forward<DiscountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contract effective (start) date in YYYY-MM-DD format.</p>
   */
  inline const Aws::String& GetEffectiveDate() const { return m_effectiveDate; }
  inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
  template <typename EffectiveDateT = Aws::String>
  void SetEffectiveDate(EffectiveDateT&& value) {
    m_effectiveDateHasBeenSet = true;
    m_effectiveDate = std::forward<EffectiveDateT>(value);
  }
  template <typename EffectiveDateT = Aws::String>
  AwsSoftwareRevenue& WithEffectiveDate(EffectiveDateT&& value) {
    SetEffectiveDate(std::forward<EffectiveDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contract expiration (end) date in YYYY-MM-DD format.</p>
   */
  inline const Aws::String& GetExpirationDate() const { return m_expirationDate; }
  inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
  template <typename ExpirationDateT = Aws::String>
  void SetExpirationDate(ExpirationDateT&& value) {
    m_expirationDateHasBeenSet = true;
    m_expirationDate = std::forward<ExpirationDateT>(value);
  }
  template <typename ExpirationDateT = Aws::String>
  AwsSoftwareRevenue& WithExpirationDate(ExpirationDateT&& value) {
    SetExpirationDate(std::forward<ExpirationDateT>(value));
    return *this;
  }
  ///@}
 private:
  MonetaryValue m_value;

  Aws::String m_discount;

  Aws::String m_effectiveDate;

  Aws::String m_expirationDate;
  bool m_valueHasBeenSet = false;
  bool m_discountHasBeenSet = false;
  bool m_effectiveDateHasBeenSet = false;
  bool m_expirationDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
