/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ConnectedAccountChainConfig.h>

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
 * <p>A connected account configuration for AI bot monetization. Specifies the
 * connected account that payments settle to and the per-network pricing.
 * Settlement through a connected account is an alternative to the self-managed
 * wallets in <code>CryptoConfig</code>; wallet addresses are managed for the
 * connected account rather than configured by you. If the referenced connected
 * account is not active or not enabled for crypto settlement, the
 * <code>CreateWebACL</code>, <code>UpdateWebACL</code>,
 * <code>CreateRuleGroup</code>, or <code>UpdateRuleGroup</code> request that
 * includes it is rejected. Specifically, a request that references the account is
 * rejected with <code>WAFInvalidOperationException</code> if the account or its
 * crypto settlement capability isn't active,
 * <code>WAFNonexistentItemException</code> if the ARN no longer exists,
 * <code>AccessDeniedException</code> if you don't have
 * <code>payments:GetConnectedAccount</code>, or
 * <code>WAFInvalidParameterException</code> if the ARN is invalid or the partition
 * is unsupported. Connected accounts are available only in the commercial Amazon
 * Web Services partition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ConnectedAccountConfig">AWS
 * API Reference</a></p>
 */
class ConnectedAccountConfig {
 public:
  AWS_WAFV2_API ConnectedAccountConfig() = default;
  AWS_WAFV2_API ConnectedAccountConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API ConnectedAccountConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connected account that payments settle
   * to. You obtain this ARN from Payment preferences &gt; Connected accounts in the
   * Amazon Web Services Billing and Cost Management console. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-connected-accounts.html">Managing
   * connected accounts</a>. The connected account must be active and enabled for
   * crypto settlement; otherwise the request is rejected. To use a connected
   * account, you must have the <code>payments:GetConnectedAccount</code> permission
   * on this ARN.</p>
   */
  inline const Aws::String& GetConnectedAccountArn() const { return m_connectedAccountArn; }
  inline bool ConnectedAccountArnHasBeenSet() const { return m_connectedAccountArnHasBeenSet; }
  template <typename ConnectedAccountArnT = Aws::String>
  void SetConnectedAccountArn(ConnectedAccountArnT&& value) {
    m_connectedAccountArnHasBeenSet = true;
    m_connectedAccountArn = std::forward<ConnectedAccountArnT>(value);
  }
  template <typename ConnectedAccountArnT = Aws::String>
  ConnectedAccountConfig& WithConnectedAccountArn(ConnectedAccountArnT&& value) {
    SetConnectedAccountArn(std::forward<ConnectedAccountArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-network configurations for the connected account. You can specify 1
   * to 2 networks. Each entry specifies a blockchain network and the price for each
   * request.</p>
   */
  inline const Aws::Vector<ConnectedAccountChainConfig>& GetPaymentNetworks() const { return m_paymentNetworks; }
  inline bool PaymentNetworksHasBeenSet() const { return m_paymentNetworksHasBeenSet; }
  template <typename PaymentNetworksT = Aws::Vector<ConnectedAccountChainConfig>>
  void SetPaymentNetworks(PaymentNetworksT&& value) {
    m_paymentNetworksHasBeenSet = true;
    m_paymentNetworks = std::forward<PaymentNetworksT>(value);
  }
  template <typename PaymentNetworksT = Aws::Vector<ConnectedAccountChainConfig>>
  ConnectedAccountConfig& WithPaymentNetworks(PaymentNetworksT&& value) {
    SetPaymentNetworks(std::forward<PaymentNetworksT>(value));
    return *this;
  }
  template <typename PaymentNetworksT = ConnectedAccountChainConfig>
  ConnectedAccountConfig& AddPaymentNetworks(PaymentNetworksT&& value) {
    m_paymentNetworksHasBeenSet = true;
    m_paymentNetworks.emplace_back(std::forward<PaymentNetworksT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectedAccountArn;

  Aws::Vector<ConnectedAccountChainConfig> m_paymentNetworks;
  bool m_connectedAccountArnHasBeenSet = false;
  bool m_paymentNetworksHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
