/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementCancellationRequestReasonCode.h>
#include <aws/marketplace-agreement/model/AgreementCancellationRequestStatus.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {
class RejectAgreementCancellationRequestResult {
 public:
  AWS_AGREEMENTSERVICE_API RejectAgreementCancellationRequestResult() = default;
  AWS_AGREEMENTSERVICE_API RejectAgreementCancellationRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_AGREEMENTSERVICE_API RejectAgreementCancellationRequestResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with this cancellation
   * request.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  RejectAgreementCancellationRequestResult& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the rejected cancellation request.</p>
   */
  inline const Aws::String& GetAgreementCancellationRequestId() const { return m_agreementCancellationRequestId; }
  template <typename AgreementCancellationRequestIdT = Aws::String>
  void SetAgreementCancellationRequestId(AgreementCancellationRequestIdT&& value) {
    m_agreementCancellationRequestIdHasBeenSet = true;
    m_agreementCancellationRequestId = std::forward<AgreementCancellationRequestIdT>(value);
  }
  template <typename AgreementCancellationRequestIdT = Aws::String>
  RejectAgreementCancellationRequestResult& WithAgreementCancellationRequestId(AgreementCancellationRequestIdT&& value) {
    SetAgreementCancellationRequestId(std::forward<AgreementCancellationRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated status of the cancellation request, which is
   * <code>REJECTED</code>.</p>
   */
  inline AgreementCancellationRequestStatus GetStatus() const { return m_status; }
  inline void SetStatus(AgreementCancellationRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RejectAgreementCancellationRequestResult& WithStatus(AgreementCancellationRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rejection reason provided by the buyer.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  RejectAgreementCancellationRequestResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The original reason code provided when the cancellation request was
   * created.</p>
   */
  inline AgreementCancellationRequestReasonCode GetReasonCode() const { return m_reasonCode; }
  inline void SetReasonCode(AgreementCancellationRequestReasonCode value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = value;
  }
  inline RejectAgreementCancellationRequestResult& WithReasonCode(AgreementCancellationRequestReasonCode value) {
    SetReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detailed description of the cancellation reason, if provided.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RejectAgreementCancellationRequestResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the cancellation request was originally created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  RejectAgreementCancellationRequestResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the cancellation request was rejected.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  RejectAgreementCancellationRequestResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  RejectAgreementCancellationRequestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_agreementId;

  Aws::String m_agreementCancellationRequestId;

  AgreementCancellationRequestStatus m_status{AgreementCancellationRequestStatus::NOT_SET};

  Aws::String m_statusMessage;

  AgreementCancellationRequestReasonCode m_reasonCode{AgreementCancellationRequestReasonCode::NOT_SET};

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agreementIdHasBeenSet = false;
  bool m_agreementCancellationRequestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_reasonCodeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
