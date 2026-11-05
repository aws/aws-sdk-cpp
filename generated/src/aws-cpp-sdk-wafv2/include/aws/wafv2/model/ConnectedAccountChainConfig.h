/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ConnectedAccountChain.h>
#include <aws/wafv2/model/ConnectedAccountPrice.h>

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
 * <p>A per-network configuration for a connected account, specifying the
 * blockchain network and the price per request. Unlike
 * <code>PaymentNetwork</code>, you do not provide a wallet address; the receiving
 * address is managed for the connected account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ConnectedAccountChainConfig">AWS
 * API Reference</a></p>
 */
class ConnectedAccountChainConfig {
 public:
  AWS_WAFV2_API ConnectedAccountChainConfig() = default;
  AWS_WAFV2_API ConnectedAccountChainConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API ConnectedAccountChainConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The blockchain network for receiving payments through the connected account.
   * Test networks are not supported for connected accounts.</p> <p>Valid values:</p>
   * <ul> <li> <p> <code>BASE</code> - Base mainnet.</p> </li> <li> <p>
   * <code>SOLANA</code> - Solana mainnet.</p> </li> </ul>
   */
  inline ConnectedAccountChain GetChain() const { return m_chain; }
  inline bool ChainHasBeenSet() const { return m_chainHasBeenSet; }
  inline void SetChain(ConnectedAccountChain value) {
    m_chainHasBeenSet = true;
    m_chain = value;
  }
  inline ConnectedAccountChainConfig& WithChain(ConnectedAccountChain value) {
    SetChain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The price configuration for this network. Currently supports a single price
   * entry in USDC.</p>
   */
  inline const Aws::Vector<ConnectedAccountPrice>& GetPrices() const { return m_prices; }
  inline bool PricesHasBeenSet() const { return m_pricesHasBeenSet; }
  template <typename PricesT = Aws::Vector<ConnectedAccountPrice>>
  void SetPrices(PricesT&& value) {
    m_pricesHasBeenSet = true;
    m_prices = std::forward<PricesT>(value);
  }
  template <typename PricesT = Aws::Vector<ConnectedAccountPrice>>
  ConnectedAccountChainConfig& WithPrices(PricesT&& value) {
    SetPrices(std::forward<PricesT>(value));
    return *this;
  }
  template <typename PricesT = ConnectedAccountPrice>
  ConnectedAccountChainConfig& AddPrices(PricesT&& value) {
    m_pricesHasBeenSet = true;
    m_prices.emplace_back(std::forward<PricesT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectedAccountChain m_chain{ConnectedAccountChain::NOT_SET};

  Aws::Vector<ConnectedAccountPrice> m_prices;
  bool m_chainHasBeenSet = false;
  bool m_pricesHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
