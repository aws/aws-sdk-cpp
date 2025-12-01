/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/VariablePaymentTermConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
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
  AWS_AGREEMENTSERVICE_API VariablePaymentTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API VariablePaymentTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  bool m_typeHasBeenSet = false;

  Aws::String m_currencyCode;
  bool m_currencyCodeHasBeenSet = false;

  Aws::String m_maxTotalChargeAmount;
  bool m_maxTotalChargeAmountHasBeenSet = false;

  VariablePaymentTermConfiguration m_configuration;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
