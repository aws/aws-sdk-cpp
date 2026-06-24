/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/PaymentOption.h>
#include <aws/outposts/model/PaymentTerm.h>
#include <aws/outposts/model/QuoteCapacity.h>
#include <aws/outposts/model/QuoteConstraint.h>
#include <aws/outposts/model/QuoteOption.h>
#include <aws/outposts/model/QuoteStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>Summary information about a quote.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/QuoteSummary">AWS
 * API Reference</a></p>
 */
class QuoteSummary {
 public:
  AWS_OUTPOSTS_API QuoteSummary() = default;
  AWS_OUTPOSTS_API QuoteSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API QuoteSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the quote.</p>
   */
  inline const Aws::String& GetQuoteId() const { return m_quoteId; }
  inline bool QuoteIdHasBeenSet() const { return m_quoteIdHasBeenSet; }
  template <typename QuoteIdT = Aws::String>
  void SetQuoteId(QuoteIdT&& value) {
    m_quoteIdHasBeenSet = true;
    m_quoteId = std::forward<QuoteIdT>(value);
  }
  template <typename QuoteIdT = Aws::String>
  QuoteSummary& WithQuoteId(QuoteIdT&& value) {
    SetQuoteId(std::forward<QuoteIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the account that owns the quote.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  QuoteSummary& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the quote.</p>
   */
  inline QuoteStatus GetQuoteStatus() const { return m_quoteStatus; }
  inline bool QuoteStatusHasBeenSet() const { return m_quoteStatusHasBeenSet; }
  inline void SetQuoteStatus(QuoteStatus value) {
    m_quoteStatusHasBeenSet = true;
    m_quoteStatus = value;
  }
  inline QuoteSummary& WithQuoteStatus(QuoteStatus value) {
    SetQuoteStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message about the status of the quote.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  QuoteSummary& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Outpost associated with the quote.</p>
   */
  inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
  inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
  template <typename OutpostArnT = Aws::String>
  void SetOutpostArn(OutpostArnT&& value) {
    m_outpostArnHasBeenSet = true;
    m_outpostArn = std::forward<OutpostArnT>(value);
  }
  template <typename OutpostArnT = Aws::String>
  QuoteSummary& WithOutpostArn(OutpostArnT&& value) {
    SetOutpostArn(std::forward<OutpostArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country code for the Outpost site location.</p>
   */
  inline const Aws::String& GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  template <typename CountryCodeT = Aws::String>
  void SetCountryCode(CountryCodeT&& value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = std::forward<CountryCodeT>(value);
  }
  template <typename CountryCodeT = Aws::String>
  QuoteSummary& WithCountryCode(CountryCodeT&& value) {
    SetCountryCode(std::forward<CountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity requirements specified in the quote request.</p>
   */
  inline const Aws::Vector<QuoteCapacity>& GetRequestedCapacities() const { return m_requestedCapacities; }
  inline bool RequestedCapacitiesHasBeenSet() const { return m_requestedCapacitiesHasBeenSet; }
  template <typename RequestedCapacitiesT = Aws::Vector<QuoteCapacity>>
  void SetRequestedCapacities(RequestedCapacitiesT&& value) {
    m_requestedCapacitiesHasBeenSet = true;
    m_requestedCapacities = std::forward<RequestedCapacitiesT>(value);
  }
  template <typename RequestedCapacitiesT = Aws::Vector<QuoteCapacity>>
  QuoteSummary& WithRequestedCapacities(RequestedCapacitiesT&& value) {
    SetRequestedCapacities(std::forward<RequestedCapacitiesT>(value));
    return *this;
  }
  template <typename RequestedCapacitiesT = QuoteCapacity>
  QuoteSummary& AddRequestedCapacities(RequestedCapacitiesT&& value) {
    m_requestedCapacitiesHasBeenSet = true;
    m_requestedCapacities.emplace_back(std::forward<RequestedCapacitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The physical constraints specified in the quote request.</p>
   */
  inline const Aws::Vector<QuoteConstraint>& GetRequestedConstraints() const { return m_requestedConstraints; }
  inline bool RequestedConstraintsHasBeenSet() const { return m_requestedConstraintsHasBeenSet; }
  template <typename RequestedConstraintsT = Aws::Vector<QuoteConstraint>>
  void SetRequestedConstraints(RequestedConstraintsT&& value) {
    m_requestedConstraintsHasBeenSet = true;
    m_requestedConstraints = std::forward<RequestedConstraintsT>(value);
  }
  template <typename RequestedConstraintsT = Aws::Vector<QuoteConstraint>>
  QuoteSummary& WithRequestedConstraints(RequestedConstraintsT&& value) {
    SetRequestedConstraints(std::forward<RequestedConstraintsT>(value));
    return *this;
  }
  template <typename RequestedConstraintsT = QuoteConstraint>
  QuoteSummary& AddRequestedConstraints(RequestedConstraintsT&& value) {
    m_requestedConstraintsHasBeenSet = true;
    m_requestedConstraints.emplace_back(std::forward<RequestedConstraintsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment options specified in the quote request.</p>
   */
  inline const Aws::Vector<PaymentOption>& GetRequestedPaymentOptions() const { return m_requestedPaymentOptions; }
  inline bool RequestedPaymentOptionsHasBeenSet() const { return m_requestedPaymentOptionsHasBeenSet; }
  template <typename RequestedPaymentOptionsT = Aws::Vector<PaymentOption>>
  void SetRequestedPaymentOptions(RequestedPaymentOptionsT&& value) {
    m_requestedPaymentOptionsHasBeenSet = true;
    m_requestedPaymentOptions = std::forward<RequestedPaymentOptionsT>(value);
  }
  template <typename RequestedPaymentOptionsT = Aws::Vector<PaymentOption>>
  QuoteSummary& WithRequestedPaymentOptions(RequestedPaymentOptionsT&& value) {
    SetRequestedPaymentOptions(std::forward<RequestedPaymentOptionsT>(value));
    return *this;
  }
  inline QuoteSummary& AddRequestedPaymentOptions(PaymentOption value) {
    m_requestedPaymentOptionsHasBeenSet = true;
    m_requestedPaymentOptions.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment terms specified in the quote request.</p>
   */
  inline const Aws::Vector<PaymentTerm>& GetRequestedPaymentTerms() const { return m_requestedPaymentTerms; }
  inline bool RequestedPaymentTermsHasBeenSet() const { return m_requestedPaymentTermsHasBeenSet; }
  template <typename RequestedPaymentTermsT = Aws::Vector<PaymentTerm>>
  void SetRequestedPaymentTerms(RequestedPaymentTermsT&& value) {
    m_requestedPaymentTermsHasBeenSet = true;
    m_requestedPaymentTerms = std::forward<RequestedPaymentTermsT>(value);
  }
  template <typename RequestedPaymentTermsT = Aws::Vector<PaymentTerm>>
  QuoteSummary& WithRequestedPaymentTerms(RequestedPaymentTermsT&& value) {
    SetRequestedPaymentTerms(std::forward<RequestedPaymentTermsT>(value));
    return *this;
  }
  inline QuoteSummary& AddRequestedPaymentTerms(PaymentTerm value) {
    m_requestedPaymentTermsHasBeenSet = true;
    m_requestedPaymentTerms.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration and pricing options for the quote.</p>
   */
  inline const Aws::Vector<QuoteOption>& GetQuoteOptions() const { return m_quoteOptions; }
  inline bool QuoteOptionsHasBeenSet() const { return m_quoteOptionsHasBeenSet; }
  template <typename QuoteOptionsT = Aws::Vector<QuoteOption>>
  void SetQuoteOptions(QuoteOptionsT&& value) {
    m_quoteOptionsHasBeenSet = true;
    m_quoteOptions = std::forward<QuoteOptionsT>(value);
  }
  template <typename QuoteOptionsT = Aws::Vector<QuoteOption>>
  QuoteSummary& WithQuoteOptions(QuoteOptionsT&& value) {
    SetQuoteOptions(std::forward<QuoteOptionsT>(value));
    return *this;
  }
  template <typename QuoteOptionsT = QuoteOption>
  QuoteSummary& AddQuoteOptions(QuoteOptionsT&& value) {
    m_quoteOptionsHasBeenSet = true;
    m_quoteOptions.emplace_back(std::forward<QuoteOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the order submitted for the quote.</p>
   */
  inline const Aws::String& GetSubmittedOrderId() const { return m_submittedOrderId; }
  inline bool SubmittedOrderIdHasBeenSet() const { return m_submittedOrderIdHasBeenSet; }
  template <typename SubmittedOrderIdT = Aws::String>
  void SetSubmittedOrderId(SubmittedOrderIdT&& value) {
    m_submittedOrderIdHasBeenSet = true;
    m_submittedOrderId = std::forward<SubmittedOrderIdT>(value);
  }
  template <typename SubmittedOrderIdT = Aws::String>
  QuoteSummary& WithSubmittedOrderId(SubmittedOrderIdT&& value) {
    SetSubmittedOrderId(std::forward<SubmittedOrderIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the quote was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
  inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  QuoteSummary& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the quote expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
  inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
  template <typename ExpirationDateT = Aws::Utils::DateTime>
  void SetExpirationDate(ExpirationDateT&& value) {
    m_expirationDateHasBeenSet = true;
    m_expirationDate = std::forward<ExpirationDateT>(value);
  }
  template <typename ExpirationDateT = Aws::Utils::DateTime>
  QuoteSummary& WithExpirationDate(ExpirationDateT&& value) {
    SetExpirationDate(std::forward<ExpirationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the quote.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  QuoteSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_quoteId;

  Aws::String m_accountId;

  QuoteStatus m_quoteStatus{QuoteStatus::NOT_SET};

  Aws::String m_statusMessage;

  Aws::String m_outpostArn;

  Aws::String m_countryCode;

  Aws::Vector<QuoteCapacity> m_requestedCapacities;

  Aws::Vector<QuoteConstraint> m_requestedConstraints;

  Aws::Vector<PaymentOption> m_requestedPaymentOptions;

  Aws::Vector<PaymentTerm> m_requestedPaymentTerms;

  Aws::Vector<QuoteOption> m_quoteOptions;

  Aws::String m_submittedOrderId;

  Aws::Utils::DateTime m_createdDate{};

  Aws::Utils::DateTime m_expirationDate{};

  Aws::String m_description;
  bool m_quoteIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_quoteStatusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_outpostArnHasBeenSet = false;
  bool m_countryCodeHasBeenSet = false;
  bool m_requestedCapacitiesHasBeenSet = false;
  bool m_requestedConstraintsHasBeenSet = false;
  bool m_requestedPaymentOptionsHasBeenSet = false;
  bool m_requestedPaymentTermsHasBeenSet = false;
  bool m_quoteOptionsHasBeenSet = false;
  bool m_submittedOrderIdHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_expirationDateHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
