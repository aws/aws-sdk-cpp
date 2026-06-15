/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/BlockchainChain.h>
#include <aws/wafv2/model/Price.h>

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
 * <p>A blockchain payment network configuration for receiving AI bot monetization
 * payments. Specifies the blockchain chain, your wallet address on that chain, and
 * the price per request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PaymentNetwork">AWS
 * API Reference</a></p>
 */
class PaymentNetwork {
 public:
  AWS_WAFV2_API PaymentNetwork() = default;
  AWS_WAFV2_API PaymentNetwork(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API PaymentNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The blockchain network for receiving payments. Production networks:
   * <code>BASE</code> (Base mainnet), <code>SOLANA</code> (Solana mainnet). Test
   * networks: <code>BASE_SEPOLIA</code> (Base Sepolia testnet),
   * <code>SOLANA_DEVNET</code> (Solana Devnet).</p>
   */
  inline BlockchainChain GetChain() const { return m_chain; }
  inline bool ChainHasBeenSet() const { return m_chainHasBeenSet; }
  inline void SetChain(BlockchainChain value) {
    m_chainHasBeenSet = true;
    m_chain = value;
  }
  inline PaymentNetwork& WithChain(BlockchainChain value) {
    SetChain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your wallet address on the specified blockchain where payments are sent. For
   * EVM chains (Base, Base Sepolia), provide a valid Ethereum address (42 characters
   * including 0x prefix). For Solana chains, provide a valid Base58-encoded public
   * key (32-44 characters).</p> <p>For EVM addresses, WAF performs EIP-55 checksum
   * validation for typo detection when the address uses a mix of lower and upper
   * case letters. You can bypass this validation by providing the address in all
   * lowercase or all uppercase.</p>
   */
  inline const Aws::String& GetWalletAddress() const { return m_walletAddress; }
  inline bool WalletAddressHasBeenSet() const { return m_walletAddressHasBeenSet; }
  template <typename WalletAddressT = Aws::String>
  void SetWalletAddress(WalletAddressT&& value) {
    m_walletAddressHasBeenSet = true;
    m_walletAddress = std::forward<WalletAddressT>(value);
  }
  template <typename WalletAddressT = Aws::String>
  PaymentNetwork& WithWalletAddress(WalletAddressT&& value) {
    SetWalletAddress(std::forward<WalletAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The price configuration for this payment network. Currently supports a single
   * price entry in USDC.</p>
   */
  inline const Aws::Vector<Price>& GetPrices() const { return m_prices; }
  inline bool PricesHasBeenSet() const { return m_pricesHasBeenSet; }
  template <typename PricesT = Aws::Vector<Price>>
  void SetPrices(PricesT&& value) {
    m_pricesHasBeenSet = true;
    m_prices = std::forward<PricesT>(value);
  }
  template <typename PricesT = Aws::Vector<Price>>
  PaymentNetwork& WithPrices(PricesT&& value) {
    SetPrices(std::forward<PricesT>(value));
    return *this;
  }
  template <typename PricesT = Price>
  PaymentNetwork& AddPrices(PricesT&& value) {
    m_pricesHasBeenSet = true;
    m_prices.emplace_back(std::forward<PricesT>(value));
    return *this;
  }
  ///@}
 private:
  BlockchainChain m_chain{BlockchainChain::NOT_SET};

  Aws::String m_walletAddress;

  Aws::Vector<Price> m_prices;
  bool m_chainHasBeenSet = false;
  bool m_walletAddressHasBeenSet = false;
  bool m_pricesHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
