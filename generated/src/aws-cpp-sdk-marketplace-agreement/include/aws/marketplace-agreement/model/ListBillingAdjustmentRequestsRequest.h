/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BillingAdjustmentStatus.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class ListBillingAdjustmentRequestsRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API ListBillingAdjustmentRequestsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBillingAdjustmentRequests"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the agreement to list billing adjustment requests
   * for.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  ListBillingAdjustmentRequestsRequest& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter to return billing adjustment requests with the specified
   * status.</p>
   */
  inline BillingAdjustmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BillingAdjustmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListBillingAdjustmentRequestsRequest& WithStatus(BillingAdjustmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter to return billing adjustment requests created after the
   * specified POSIX timestamp (Unix epoch seconds).</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
  inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
  template <typename CreatedAfterT = Aws::Utils::DateTime>
  void SetCreatedAfter(CreatedAfterT&& value) {
    m_createdAfterHasBeenSet = true;
    m_createdAfter = std::forward<CreatedAfterT>(value);
  }
  template <typename CreatedAfterT = Aws::Utils::DateTime>
  ListBillingAdjustmentRequestsRequest& WithCreatedAfter(CreatedAfterT&& value) {
    SetCreatedAfter(std::forward<CreatedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter to return billing adjustment requests created before the
   * specified POSIX timestamp (Unix epoch seconds).</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
  inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
  template <typename CreatedBeforeT = Aws::Utils::DateTime>
  void SetCreatedBefore(CreatedBeforeT&& value) {
    m_createdBeforeHasBeenSet = true;
    m_createdBefore = std::forward<CreatedBeforeT>(value);
  }
  template <typename CreatedBeforeT = Aws::Utils::DateTime>
  ListBillingAdjustmentRequestsRequest& WithCreatedBefore(CreatedBeforeT&& value) {
    SetCreatedBefore(std::forward<CreatedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of billing adjustment requests to return in the
   * response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListBillingAdjustmentRequestsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter to return billing adjustment requests by catalog (e.g.,
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
  ListBillingAdjustmentRequestsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter to return billing adjustment requests by agreement type
   * (e.g., <code>PurchaseAgreement</code>).</p>
   */
  inline const Aws::String& GetAgreementType() const { return m_agreementType; }
  inline bool AgreementTypeHasBeenSet() const { return m_agreementTypeHasBeenSet; }
  template <typename AgreementTypeT = Aws::String>
  void SetAgreementType(AgreementTypeT&& value) {
    m_agreementTypeHasBeenSet = true;
    m_agreementType = std::forward<AgreementTypeT>(value);
  }
  template <typename AgreementTypeT = Aws::String>
  ListBillingAdjustmentRequestsRequest& WithAgreementType(AgreementTypeT&& value) {
    SetAgreementType(std::forward<AgreementTypeT>(value));
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
  ListBillingAdjustmentRequestsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementId;

  BillingAdjustmentStatus m_status{BillingAdjustmentStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAfter{};

  Aws::Utils::DateTime m_createdBefore{};

  int m_maxResults{0};

  Aws::String m_catalog;

  Aws::String m_agreementType;

  Aws::String m_nextToken;
  bool m_agreementIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAfterHasBeenSet = false;
  bool m_createdBeforeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_agreementTypeHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
