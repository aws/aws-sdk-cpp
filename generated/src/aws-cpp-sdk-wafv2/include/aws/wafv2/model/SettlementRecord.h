/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/Currency.h>
#include <aws/wafv2/model/SettlementStatus.h>

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
 * <p>A single settlement transaction record for AI bot monetization. Contains
 * details about the payment including timestamp, amount, status, and the parties
 * involved.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/SettlementRecord">AWS
 * API Reference</a></p>
 */
class SettlementRecord {
 public:
  AWS_WAFV2_API SettlementRecord() = default;
  AWS_WAFV2_API SettlementRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API SettlementRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when the settlement was recorded.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  SettlementRecord& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The blockchain wallet address of the paying AI agent.</p>
   */
  inline const Aws::String& GetPayerAddress() const { return m_payerAddress; }
  inline bool PayerAddressHasBeenSet() const { return m_payerAddressHasBeenSet; }
  template <typename PayerAddressT = Aws::String>
  void SetPayerAddress(PayerAddressT&& value) {
    m_payerAddressHasBeenSet = true;
    m_payerAddress = std::forward<PayerAddressT>(value);
  }
  template <typename PayerAddressT = Aws::String>
  SettlementRecord& WithPayerAddress(PayerAddressT&& value) {
    SetPayerAddress(std::forward<PayerAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your receiving wallet address.</p>
   */
  inline const Aws::String& GetWalletAddress() const { return m_walletAddress; }
  inline bool WalletAddressHasBeenSet() const { return m_walletAddressHasBeenSet; }
  template <typename WalletAddressT = Aws::String>
  void SetWalletAddress(WalletAddressT&& value) {
    m_walletAddressHasBeenSet = true;
    m_walletAddress = std::forward<WalletAddressT>(value);
  }
  template <typename WalletAddressT = Aws::String>
  SettlementRecord& WithWalletAddress(WalletAddressT&& value) {
    SetWalletAddress(std::forward<WalletAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the settlement. Possible values:</p> <ul> <li> <p>
   * <code>SETTLED</code> - The payment was successfully settled on the blockchain
   * and the transfer from the payer's wallet to the publisher's wallet is confirmed.
   * The <code>TransactionId</code> field contains the on-chain transaction hash.
   * Content is served to the client.</p> </li> <li> <p> <code>PENDING</code> - The
   * blockchain transaction has been submitted but not yet confirmed on-chain. This
   * is a transient state that automatically resolves to either <code>SETTLED</code>
   * or <code>FAILED</code>. No action is required. While pending, content is not
   * served and the API returns a 402 response. Clients can retry the request.</p>
   * </li> <li> <p> <code>FAILED</code> - The payment settlement was attempted but
   * failed. Possible causes include insufficient funds, an expired payment
   * authorization, or a reverted blockchain transaction. The
   * <code>failureReason</code> field contains a machine-readable error code. Content
   * is not served.</p> </li> <li> <p> <code>SERVICE_ERROR</code> - Settlement could
   * not be completed due to an internal service issue or an issue with the payment
   * network. Content is not served. The client's payment authorization remains valid
   * and the request can be retried.</p> </li> <li> <p>
   * <code>SKIPPED_ORIGIN_ERROR</code> - The origin returned a non-2xx response, so
   * settlement was intentionally skipped. The client is not charged.</p> </li> <li>
   * <p> <code>DUPLICATE</code> - A prior request with the same payment payload has
   * already been settled. This status typically appears when a previous attempt
   * timed out but the payment was ultimately processed. The client is not charged
   * again.</p> </li> </ul>
   */
  inline SettlementStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SettlementStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SettlementRecord& WithStatus(SettlementStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment amount in the specified currency.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  SettlementRecord& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency of the payment amount.</p>
   */
  inline Currency GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  inline void SetCurrency(Currency value) {
    m_currencyHasBeenSet = true;
    m_currency = value;
  }
  inline SettlementRecord& WithCurrency(Currency value) {
    SetCurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The blockchain network on which the settlement occurred.</p>
   */
  inline const Aws::String& GetNetwork() const { return m_network; }
  inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
  template <typename NetworkT = Aws::String>
  void SetNetwork(NetworkT&& value) {
    m_networkHasBeenSet = true;
    m_network = std::forward<NetworkT>(value);
  }
  template <typename NetworkT = Aws::String>
  SettlementRecord& WithNetwork(NetworkT&& value) {
    SetNetwork(std::forward<NetworkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The blockchain transaction identifier. You can use this to verify the
   * transaction on a blockchain explorer.</p>
   */
  inline const Aws::String& GetTransactionId() const { return m_transactionId; }
  inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
  template <typename TransactionIdT = Aws::String>
  void SetTransactionId(TransactionIdT&& value) {
    m_transactionIdHasBeenSet = true;
    m_transactionId = std::forward<TransactionIdT>(value);
  }
  template <typename TransactionIdT = Aws::String>
  SettlementRecord& WithTransactionId(TransactionIdT&& value) {
    SetTransactionId(std::forward<TransactionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The WAF request ID associated with this settlement.</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  SettlementRecord& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the AI bot that made the payment.</p>
   */
  inline const Aws::String& GetSourceName() const { return m_sourceName; }
  inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
  template <typename SourceNameT = Aws::String>
  void SetSourceName(SourceNameT&& value) {
    m_sourceNameHasBeenSet = true;
    m_sourceName = std::forward<SourceNameT>(value);
  }
  template <typename SourceNameT = Aws::String>
  SettlementRecord& WithSourceName(SourceNameT&& value) {
    SetSourceName(std::forward<SourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organization associated with the AI bot.</p>
   */
  inline const Aws::String& GetOrganization() const { return m_organization; }
  inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
  template <typename OrganizationT = Aws::String>
  void SetOrganization(OrganizationT&& value) {
    m_organizationHasBeenSet = true;
    m_organization = std::forward<OrganizationT>(value);
  }
  template <typename OrganizationT = Aws::String>
  SettlementRecord& WithOrganization(OrganizationT&& value) {
    SetOrganization(std::forward<OrganizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the AI bot source.</p>
   */
  inline const Aws::String& GetSourceCategory() const { return m_sourceCategory; }
  inline bool SourceCategoryHasBeenSet() const { return m_sourceCategoryHasBeenSet; }
  template <typename SourceCategoryT = Aws::String>
  void SetSourceCategory(SourceCategoryT&& value) {
    m_sourceCategoryHasBeenSet = true;
    m_sourceCategory = std::forward<SourceCategoryT>(value);
  }
  template <typename SourceCategoryT = Aws::String>
  SettlementRecord& WithSourceCategory(SourceCategoryT&& value) {
    SetSourceCategory(std::forward<SourceCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The declared intent of the AI bot request.</p>
   */
  inline const Aws::String& GetIntent() const { return m_intent; }
  inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
  template <typename IntentT = Aws::String>
  void SetIntent(IntentT&& value) {
    m_intentHasBeenSet = true;
    m_intent = std::forward<IntentT>(value);
  }
  template <typename IntentT = Aws::String>
  SettlementRecord& WithIntent(IntentT&& value) {
    SetIntent(std::forward<IntentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the AI bot's identity was verified.</p>
   */
  inline bool GetVerified() const { return m_verified; }
  inline bool VerifiedHasBeenSet() const { return m_verifiedHasBeenSet; }
  inline void SetVerified(bool value) {
    m_verifiedHasBeenSet = true;
    m_verified = value;
  }
  inline SettlementRecord& WithVerified(bool value) {
    SetVerified(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content path that was accessed.</p>
   */
  inline const Aws::String& GetContentPath() const { return m_contentPath; }
  inline bool ContentPathHasBeenSet() const { return m_contentPathHasBeenSet; }
  template <typename ContentPathT = Aws::String>
  void SetContentPath(ContentPathT&& value) {
    m_contentPathHasBeenSet = true;
    m_contentPath = std::forward<ContentPathT>(value);
  }
  template <typename ContentPathT = Aws::String>
  SettlementRecord& WithContentPath(ContentPathT&& value) {
    SetContentPath(std::forward<ContentPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the web ACL that processed the request.</p>
   */
  inline const Aws::String& GetWebAclArn() const { return m_webAclArn; }
  inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }
  template <typename WebAclArnT = Aws::String>
  void SetWebAclArn(WebAclArnT&& value) {
    m_webAclArnHasBeenSet = true;
    m_webAclArn = std::forward<WebAclArnT>(value);
  }
  template <typename WebAclArnT = Aws::String>
  SettlementRecord& WithWebAclArn(WebAclArnT&& value) {
    SetWebAclArn(std::forward<WebAclArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the original web request.</p>
   */
  inline const Aws::Utils::DateTime& GetRequestTimestamp() const { return m_requestTimestamp; }
  inline bool RequestTimestampHasBeenSet() const { return m_requestTimestampHasBeenSet; }
  template <typename RequestTimestampT = Aws::Utils::DateTime>
  void SetRequestTimestamp(RequestTimestampT&& value) {
    m_requestTimestampHasBeenSet = true;
    m_requestTimestamp = std::forward<RequestTimestampT>(value);
  }
  template <typename RequestTimestampT = Aws::Utils::DateTime>
  SettlementRecord& WithRequestTimestamp(RequestTimestampT&& value) {
    SetRequestTimestamp(std::forward<RequestTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_timestamp{};

  Aws::String m_payerAddress;

  Aws::String m_walletAddress;

  SettlementStatus m_status{SettlementStatus::NOT_SET};

  Aws::String m_amount;

  Currency m_currency{Currency::NOT_SET};

  Aws::String m_network;

  Aws::String m_transactionId;

  Aws::String m_requestId;

  Aws::String m_sourceName;

  Aws::String m_organization;

  Aws::String m_sourceCategory;

  Aws::String m_intent;

  bool m_verified{false};

  Aws::String m_contentPath;

  Aws::String m_webAclArn;

  Aws::Utils::DateTime m_requestTimestamp{};
  bool m_timestampHasBeenSet = false;
  bool m_payerAddressHasBeenSet = false;
  bool m_walletAddressHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_amountHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
  bool m_networkHasBeenSet = false;
  bool m_transactionIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_sourceNameHasBeenSet = false;
  bool m_organizationHasBeenSet = false;
  bool m_sourceCategoryHasBeenSet = false;
  bool m_intentHasBeenSet = false;
  bool m_verifiedHasBeenSet = false;
  bool m_contentPathHasBeenSet = false;
  bool m_webAclArnHasBeenSet = false;
  bool m_requestTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
