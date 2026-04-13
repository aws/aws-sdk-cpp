/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/TermType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Defines a variable payment term with a maximum total charge
 * amount.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/VariablePaymentTerm">AWS
 * API Reference</a></p>
 */
class VariablePaymentTerm {
 public:
  AWS_MARKETPLACEDISCOVERY_API VariablePaymentTerm() = default;
  AWS_MARKETPLACEDISCOVERY_API VariablePaymentTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API VariablePaymentTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the term.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  VariablePaymentTerm& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the term.</p>
   */
  inline TermType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TermType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline VariablePaymentTerm& WithType(TermType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the currency for the prices in this term.</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  VariablePaymentTerm& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum total amount that can be charged under this term.</p>
   */
  inline const Aws::String& GetMaxTotalChargeAmount() const { return m_maxTotalChargeAmount; }
  inline bool MaxTotalChargeAmountHasBeenSet() const { return m_maxTotalChargeAmountHasBeenSet; }
  template <typename MaxTotalChargeAmountT = Aws::String>
  void SetMaxTotalChargeAmount(MaxTotalChargeAmountT&& value) {
    m_maxTotalChargeAmountHasBeenSet = true;
    m_maxTotalChargeAmount = std::forward<MaxTotalChargeAmountT>(value);
  }
  template <typename MaxTotalChargeAmountT = Aws::String>
  VariablePaymentTerm& WithMaxTotalChargeAmount(MaxTotalChargeAmountT&& value) {
    SetMaxTotalChargeAmount(std::forward<MaxTotalChargeAmountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  TermType m_type{TermType::NOT_SET};

  Aws::String m_currencyCode;

  Aws::String m_maxTotalChargeAmount;
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_maxTotalChargeAmountHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
