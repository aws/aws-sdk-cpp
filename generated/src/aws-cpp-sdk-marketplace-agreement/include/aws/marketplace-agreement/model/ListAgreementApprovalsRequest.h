/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementApprovalPartyType.h>
#include <aws/marketplace-agreement/model/AgreementApprovalStatus.h>
#include <aws/marketplace-agreement/model/AgreementApprovalType.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class ListAgreementApprovalsRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API ListAgreementApprovalsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAgreementApprovals"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>An optional parameter to filter agreement approvals by catalog (for example,
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
  ListAgreementApprovalsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The party type for the agreement approvals. Required parameter. Use
   * <code>REQUESTER</code> to list agreement approvals for agreement requests that
   * you created, or <code>AWS_ORGANIZATION_ADMIN</code> to list agreement approvals
   * as an AWS Organizations administrator.</p>
   */
  inline AgreementApprovalPartyType GetPartyType() const { return m_partyType; }
  inline bool PartyTypeHasBeenSet() const { return m_partyTypeHasBeenSet; }
  inline void SetPartyType(AgreementApprovalPartyType value) {
    m_partyTypeHasBeenSet = true;
    m_partyType = value;
  }
  inline ListAgreementApprovalsRequest& WithPartyType(AgreementApprovalPartyType value) {
    SetPartyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional parameter to filter agreement approvals for a specific agreement
   * request.</p>
   */
  inline const Aws::String& GetAgreementRequestId() const { return m_agreementRequestId; }
  inline bool AgreementRequestIdHasBeenSet() const { return m_agreementRequestIdHasBeenSet; }
  template <typename AgreementRequestIdT = Aws::String>
  void SetAgreementRequestId(AgreementRequestIdT&& value) {
    m_agreementRequestIdHasBeenSet = true;
    m_agreementRequestId = std::forward<AgreementRequestIdT>(value);
  }
  template <typename AgreementRequestIdT = Aws::String>
  ListAgreementApprovalsRequest& WithAgreementRequestId(AgreementRequestIdT&& value) {
    SetAgreementRequestId(std::forward<AgreementRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional parameter to filter agreement approvals by type. The only valid
   * value is <code>BUYER_AGREEMENT_APPROVAL</code>.</p>
   */
  inline AgreementApprovalType GetApprovalType() const { return m_approvalType; }
  inline bool ApprovalTypeHasBeenSet() const { return m_approvalTypeHasBeenSet; }
  inline void SetApprovalType(AgreementApprovalType value) {
    m_approvalTypeHasBeenSet = true;
    m_approvalType = value;
  }
  inline ListAgreementApprovalsRequest& WithApprovalType(AgreementApprovalType value) {
    SetApprovalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional parameter to filter agreement approvals by status. Valid values
   * include <code>PENDING_APPROVAL</code>, <code>APPROVED</code>,
   * <code>REJECTED</code>, <code>EXPIRED</code>, and <code>CANCELLED</code>. If you
   * don't specify a status, agreement approvals of all statuses are returned.</p>
   */
  inline AgreementApprovalStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AgreementApprovalStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListAgreementApprovalsRequest& WithStatus(AgreementApprovalStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of agreement approvals to return in a single response
   * (1-50). Default is 20.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAgreementApprovalsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to specify where to start pagination.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAgreementApprovalsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  AgreementApprovalPartyType m_partyType{AgreementApprovalPartyType::NOT_SET};

  Aws::String m_agreementRequestId;

  AgreementApprovalType m_approvalType{AgreementApprovalType::NOT_SET};

  AgreementApprovalStatus m_status{AgreementApprovalStatus::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_partyTypeHasBeenSet = false;
  bool m_agreementRequestIdHasBeenSet = false;
  bool m_approvalTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
