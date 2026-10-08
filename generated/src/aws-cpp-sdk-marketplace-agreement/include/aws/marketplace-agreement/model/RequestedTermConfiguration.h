/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/ConfigurableUpfrontPricingTermConfiguration.h>
#include <aws/marketplace-agreement/model/RenewalTermConfiguration.h>
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
 * <p>A tagged union that represents the term configuration provided by the
 * acceptor. Only one configuration is accepted per term.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/RequestedTermConfiguration">AWS
 * API Reference</a></p>
 */
class RequestedTermConfiguration {
 public:
  AWS_AGREEMENTSERVICE_API RequestedTermConfiguration() = default;
  AWS_AGREEMENTSERVICE_API RequestedTermConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API RequestedTermConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const ConfigurableUpfrontPricingTermConfiguration& GetConfigurableUpfrontPricingTermConfiguration() const {
    return m_configurableUpfrontPricingTermConfiguration;
  }
  inline bool ConfigurableUpfrontPricingTermConfigurationHasBeenSet() const {
    return m_configurableUpfrontPricingTermConfigurationHasBeenSet;
  }
  template <typename ConfigurableUpfrontPricingTermConfigurationT = ConfigurableUpfrontPricingTermConfiguration>
  void SetConfigurableUpfrontPricingTermConfiguration(ConfigurableUpfrontPricingTermConfigurationT&& value) {
    m_configurableUpfrontPricingTermConfigurationHasBeenSet = true;
    m_configurableUpfrontPricingTermConfiguration = std::forward<ConfigurableUpfrontPricingTermConfigurationT>(value);
  }
  template <typename ConfigurableUpfrontPricingTermConfigurationT = ConfigurableUpfrontPricingTermConfiguration>
  RequestedTermConfiguration& WithConfigurableUpfrontPricingTermConfiguration(ConfigurableUpfrontPricingTermConfigurationT&& value) {
    SetConfigurableUpfrontPricingTermConfiguration(std::forward<ConfigurableUpfrontPricingTermConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RenewalTermConfiguration& GetRenewalTermConfiguration() const { return m_renewalTermConfiguration; }
  inline bool RenewalTermConfigurationHasBeenSet() const { return m_renewalTermConfigurationHasBeenSet; }
  template <typename RenewalTermConfigurationT = RenewalTermConfiguration>
  void SetRenewalTermConfiguration(RenewalTermConfigurationT&& value) {
    m_renewalTermConfigurationHasBeenSet = true;
    m_renewalTermConfiguration = std::forward<RenewalTermConfigurationT>(value);
  }
  template <typename RenewalTermConfigurationT = RenewalTermConfiguration>
  RequestedTermConfiguration& WithRenewalTermConfiguration(RenewalTermConfigurationT&& value) {
    SetRenewalTermConfiguration(std::forward<RenewalTermConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const VariablePaymentTermConfiguration& GetVariablePaymentTermConfiguration() const { return m_variablePaymentTermConfiguration; }
  inline bool VariablePaymentTermConfigurationHasBeenSet() const { return m_variablePaymentTermConfigurationHasBeenSet; }
  template <typename VariablePaymentTermConfigurationT = VariablePaymentTermConfiguration>
  void SetVariablePaymentTermConfiguration(VariablePaymentTermConfigurationT&& value) {
    m_variablePaymentTermConfigurationHasBeenSet = true;
    m_variablePaymentTermConfiguration = std::forward<VariablePaymentTermConfigurationT>(value);
  }
  template <typename VariablePaymentTermConfigurationT = VariablePaymentTermConfiguration>
  RequestedTermConfiguration& WithVariablePaymentTermConfiguration(VariablePaymentTermConfigurationT&& value) {
    SetVariablePaymentTermConfiguration(std::forward<VariablePaymentTermConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ConfigurableUpfrontPricingTermConfiguration m_configurableUpfrontPricingTermConfiguration;

  RenewalTermConfiguration m_renewalTermConfiguration;

  VariablePaymentTermConfiguration m_variablePaymentTermConfiguration;
  bool m_configurableUpfrontPricingTermConfigurationHasBeenSet = false;
  bool m_renewalTermConfigurationHasBeenSet = false;
  bool m_variablePaymentTermConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
