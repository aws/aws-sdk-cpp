/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/PaymentNetwork.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>The cryptocurrency payment configuration for AI bot monetization. Contains
 * the list of blockchain payment networks where you receive
 * payments.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CryptoConfig">AWS
 * API Reference</a></p>
 */
class CryptoConfig {
 public:
  AWS_WAFV2_API CryptoConfig() = default;
  AWS_WAFV2_API CryptoConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API CryptoConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The blockchain payment networks configured to receive payments. You can
   * specify 1 to 2 networks. All networks must be in the same environment-either all
   * production networks (Base, Solana) or all test networks (Base Sepolia, Solana
   * Devnet).</p>
   */
  inline const Aws::Vector<PaymentNetwork>& GetPaymentNetworks() const { return m_paymentNetworks; }
  inline bool PaymentNetworksHasBeenSet() const { return m_paymentNetworksHasBeenSet; }
  template <typename PaymentNetworksT = Aws::Vector<PaymentNetwork>>
  void SetPaymentNetworks(PaymentNetworksT&& value) {
    m_paymentNetworksHasBeenSet = true;
    m_paymentNetworks = std::forward<PaymentNetworksT>(value);
  }
  template <typename PaymentNetworksT = Aws::Vector<PaymentNetwork>>
  CryptoConfig& WithPaymentNetworks(PaymentNetworksT&& value) {
    SetPaymentNetworks(std::forward<PaymentNetworksT>(value));
    return *this;
  }
  template <typename PaymentNetworksT = PaymentNetwork>
  CryptoConfig& AddPaymentNetworks(PaymentNetworksT&& value) {
    m_paymentNetworksHasBeenSet = true;
    m_paymentNetworks.emplace_back(std::forward<PaymentNetworksT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PaymentNetwork> m_paymentNetworks;
  bool m_paymentNetworksHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
