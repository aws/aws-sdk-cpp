/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ConnectedAccountConfig.h>
#include <aws/wafv2/model/CryptoConfig.h>
#include <aws/wafv2/model/CurrencyMode.h>

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
 * <p>The monetization configuration for a web ACL or rule group. Specifies the
 * payment settlement options (self-managed crypto wallets in
 * <code>CryptoConfig</code>, a connected account in
 * <code>ConnectedAccountConfigs</code>, or both) and the currency mode for
 * artificial intelligence (AI) bot monetization. You must provide this
 * configuration when any rule in the web ACL or rule group uses the
 * <code>Monetize</code> action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/MonetizationConfig">AWS
 * API Reference</a></p>
 */
class MonetizationConfig {
 public:
  AWS_WAFV2_API MonetizationConfig() = default;
  AWS_WAFV2_API MonetizationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API MonetizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The cryptocurrency payment configuration, including the blockchain networks
   * and wallet addresses where you receive payments.</p>
   */
  inline const CryptoConfig& GetCryptoConfig() const { return m_cryptoConfig; }
  inline bool CryptoConfigHasBeenSet() const { return m_cryptoConfigHasBeenSet; }
  template <typename CryptoConfigT = CryptoConfig>
  void SetCryptoConfig(CryptoConfigT&& value) {
    m_cryptoConfigHasBeenSet = true;
    m_cryptoConfig = std::forward<CryptoConfigT>(value);
  }
  template <typename CryptoConfigT = CryptoConfig>
  MonetizationConfig& WithCryptoConfig(CryptoConfigT&& value) {
    SetCryptoConfig(std::forward<CryptoConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connected account configurations for settling AI bot payments through a
   * connected account with a supported third-party payment provider (Stripe), as an
   * alternative to the self-managed wallets in <code>CryptoConfig</code>. You can
   * provide <code>CryptoConfig</code>, <code>ConnectedAccountConfigs</code>, or
   * both; however, a given blockchain network (chain) can be used by only one of
   * them. Currently supports exactly one connected account.</p>
   */
  inline const Aws::Vector<ConnectedAccountConfig>& GetConnectedAccountConfigs() const { return m_connectedAccountConfigs; }
  inline bool ConnectedAccountConfigsHasBeenSet() const { return m_connectedAccountConfigsHasBeenSet; }
  template <typename ConnectedAccountConfigsT = Aws::Vector<ConnectedAccountConfig>>
  void SetConnectedAccountConfigs(ConnectedAccountConfigsT&& value) {
    m_connectedAccountConfigsHasBeenSet = true;
    m_connectedAccountConfigs = std::forward<ConnectedAccountConfigsT>(value);
  }
  template <typename ConnectedAccountConfigsT = Aws::Vector<ConnectedAccountConfig>>
  MonetizationConfig& WithConnectedAccountConfigs(ConnectedAccountConfigsT&& value) {
    SetConnectedAccountConfigs(std::forward<ConnectedAccountConfigsT>(value));
    return *this;
  }
  template <typename ConnectedAccountConfigsT = ConnectedAccountConfig>
  MonetizationConfig& AddConnectedAccountConfigs(ConnectedAccountConfigsT&& value) {
    m_connectedAccountConfigsHasBeenSet = true;
    m_connectedAccountConfigs.emplace_back(std::forward<ConnectedAccountConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the configuration uses real or test currency. If not
   * specified, defaults to <code>REAL</code>. Connected account configurations
   * support production settlement only; <code>TEST</code> is not supported when
   * <code>ConnectedAccountConfigs</code> is present.</p> <p>Valid values:</p> <ul>
   * <li> <p> <code>REAL</code> - Settle payments in USDC on production blockchain
   * networks (Base, Solana).</p> </li> <li> <p> <code>TEST</code> - Settle on
   * testnet networks (Base Sepolia, Solana Devnet) with tokens that have no monetary
   * value.</p> </li> </ul>
   */
  inline CurrencyMode GetCurrencyMode() const { return m_currencyMode; }
  inline bool CurrencyModeHasBeenSet() const { return m_currencyModeHasBeenSet; }
  inline void SetCurrencyMode(CurrencyMode value) {
    m_currencyModeHasBeenSet = true;
    m_currencyMode = value;
  }
  inline MonetizationConfig& WithCurrencyMode(CurrencyMode value) {
    SetCurrencyMode(value);
    return *this;
  }
  ///@}
 private:
  CryptoConfig m_cryptoConfig;

  Aws::Vector<ConnectedAccountConfig> m_connectedAccountConfigs;

  CurrencyMode m_currencyMode{CurrencyMode::NOT_SET};
  bool m_cryptoConfigHasBeenSet = false;
  bool m_connectedAccountConfigsHasBeenSet = false;
  bool m_currencyModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
