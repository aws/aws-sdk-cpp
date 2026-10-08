/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/VariablePaymentTermConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Defines a payment model where sellers can submit variable payment requests up
 * to a maximum charge amount, with configurable approval strategies and expiration
 * timelines.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/VariablePaymentTerm">AWS
 * API Reference</a></p>
 */
class VariablePaymentTerm {
 public:
  AWS_AGREEMENTSERVICE_API VariablePaymentTerm() = default;
  AWS_AGREEMENTSERVICE_API VariablePaymentTerm(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API VariablePaymentTerm& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Type of the term.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  VariablePaymentTerm& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the term.</p>
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
   * <p>Defines the currency for the prices mentioned in the term.</p>
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
   * <p>The maximum total amount that can be charged to the customer through variable
   * payment requests under this term.</p>
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

  ///@{
  /**
   * <p>Additional parameters specified by the acceptor while accepting the term.</p>
   */
  inline const VariablePaymentTermConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = VariablePaymentTermConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = VariablePaymentTermConfiguration>
  VariablePaymentTerm& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;

  Aws::String m_id;

  Aws::String m_currencyCode;

  Aws::String m_maxTotalChargeAmount;

  VariablePaymentTermConfiguration m_configuration;
  bool m_typeHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_maxTotalChargeAmountHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
