/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class CancelAgreementCancellationRequestRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API CancelAgreementCancellationRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelAgreementCancellationRequest"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with the cancellation
   * request.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  CancelAgreementCancellationRequestRequest& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the cancellation request to cancel.</p>
   */
  inline const Aws::String& GetAgreementCancellationRequestId() const { return m_agreementCancellationRequestId; }
  inline bool AgreementCancellationRequestIdHasBeenSet() const { return m_agreementCancellationRequestIdHasBeenSet; }
  template <typename AgreementCancellationRequestIdT = Aws::String>
  void SetAgreementCancellationRequestId(AgreementCancellationRequestIdT&& value) {
    m_agreementCancellationRequestIdHasBeenSet = true;
    m_agreementCancellationRequestId = std::forward<AgreementCancellationRequestIdT>(value);
  }
  template <typename AgreementCancellationRequestIdT = Aws::String>
  CancelAgreementCancellationRequestRequest& WithAgreementCancellationRequestId(AgreementCancellationRequestIdT&& value) {
    SetAgreementCancellationRequestId(std::forward<AgreementCancellationRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A required message explaining why the cancellation request is being withdrawn
   * (1-2000 characters).</p>
   */
  inline const Aws::String& GetCancellationReason() const { return m_cancellationReason; }
  inline bool CancellationReasonHasBeenSet() const { return m_cancellationReasonHasBeenSet; }
  template <typename CancellationReasonT = Aws::String>
  void SetCancellationReason(CancellationReasonT&& value) {
    m_cancellationReasonHasBeenSet = true;
    m_cancellationReason = std::forward<CancellationReasonT>(value);
  }
  template <typename CancellationReasonT = Aws::String>
  CancelAgreementCancellationRequestRequest& WithCancellationReason(CancellationReasonT&& value) {
    SetCancellationReason(std::forward<CancellationReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementId;

  Aws::String m_agreementCancellationRequestId;

  Aws::String m_cancellationReason;
  bool m_agreementIdHasBeenSet = false;
  bool m_agreementCancellationRequestIdHasBeenSet = false;
  bool m_cancellationReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
