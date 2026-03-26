/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/PaymentRequestStatus.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class ListAgreementPaymentRequestsRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API ListAgreementPaymentRequestsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAgreementPaymentRequests"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The party type for the payment requests. Required parameter. Use
   * <code>Proposer</code> to list payment requests where you are the seller, or
   * <code>Acceptor</code> to list payment requests where you are the buyer.</p>
   */
  inline const Aws::String& GetPartyType() const { return m_partyType; }
  inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }
  template <typename PartyTypeT = Aws::String>
  void SetPartyType(PartyTypeT&& value) {
    m_partyTypeHasBeenSet = true;
    m_partyType = std::forward<PartyTypeT>(value);
  }
  template <typename PartyTypeT = Aws::String>
  ListAgreementPaymentRequestsRequest& WithPartyType(PartyTypeT&& value) {
    SetPartyType(std::forward<PartyTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional parameter to list payment requests by agreement type (e.g.,
   * <code>PurchaseAgreement</code>).</p>
   */
  inline const Aws::String& GetAgreementType() const { return m_agreementType; }
  inline bool AgreementTypeHasBeenSet() const { return m_agreementTypeHasBeenSet; }
  template <typename AgreementTypeT = Aws::String>
  void SetAgreementType(AgreementTypeT&& value) {
    m_agreementTypeHasBeenSet = true;
    m_agreementType = std::forward<AgreementTypeT>(value);
  }
  template <typename AgreementTypeT = Aws::String>
  ListAgreementPaymentRequestsRequest& WithAgreementType(AgreementTypeT&& value) {
    SetAgreementType(std::forward<AgreementTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional parameter to list payment requests by catalog (e.g.,
   * <code>AWSMarketplace</code>).</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListAgreementPaymentRequestsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional parameter to list payment requests for a specific agreement.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  ListAgreementPaymentRequestsRequest& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional parameter to list payment requests by status. Valid values
   * include <code>VALIDATING</code>, <code>VALIDATION_FAILED</code>,
   * <code>PENDING_APPROVAL</code>, <code>APPROVED</code>, <code>REJECTED</code>, and
   * <code>CANCELLED</code>.</p>
   */
  inline PaymentRequestStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PaymentRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListAgreementPaymentRequestsRequest& WithStatus(PaymentRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of payment requests to return in a single response (1-50).
   * Default is 50.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAgreementPaymentRequestsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to specify where to start pagination. Use the <code>nextToken</code>
   * value from a previous response to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAgreementPaymentRequestsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_partyType;

  Aws::String m_agreementType;

  Aws::String m_catalog;

  Aws::String m_agreementId;

  PaymentRequestStatus m_status{PaymentRequestStatus::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_partyTypeHasBeenSet = false;
  bool m_agreementTypeHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_agreementIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
