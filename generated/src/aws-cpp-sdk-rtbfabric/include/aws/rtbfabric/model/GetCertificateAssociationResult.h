/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/CertificateAssociationStatus.h>
#include <aws/rtbfabric/model/ErrorDetail.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {
class GetCertificateAssociationResult {
 public:
  AWS_RTBFABRIC_API GetCertificateAssociationResult() = default;
  AWS_RTBFABRIC_API GetCertificateAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API GetCertificateAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  GetCertificateAssociationResult& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACM certificate.</p>
   */
  inline const Aws::String& GetAcmCertificateArn() const { return m_acmCertificateArn; }
  template <typename AcmCertificateArnT = Aws::String>
  void SetAcmCertificateArn(AcmCertificateArnT&& value) {
    m_acmCertificateArnHasBeenSet = true;
    m_acmCertificateArn = std::forward<AcmCertificateArnT>(value);
  }
  template <typename AcmCertificateArnT = Aws::String>
  GetCertificateAssociationResult& WithAcmCertificateArn(AcmCertificateArnT&& value) {
    SetAcmCertificateArn(std::forward<AcmCertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the certificate association.</p>
   */
  inline CertificateAssociationStatus GetStatus() const { return m_status; }
  inline void SetStatus(CertificateAssociationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetCertificateAssociationResult& WithStatus(CertificateAssociationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the certificate was associated.</p>
   */
  inline const Aws::Utils::DateTime& GetAssociatedAt() const { return m_associatedAt; }
  template <typename AssociatedAtT = Aws::Utils::DateTime>
  void SetAssociatedAt(AssociatedAtT&& value) {
    m_associatedAtHasBeenSet = true;
    m_associatedAt = std::forward<AssociatedAtT>(value);
  }
  template <typename AssociatedAtT = Aws::Utils::DateTime>
  GetCertificateAssociationResult& WithAssociatedAt(AssociatedAtT&& value) {
    SetAssociatedAt(std::forward<AssociatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the certificate association was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetCertificateAssociationResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The causes of the failure, such as a deleted subnet. Present only when the
   * resource has failed.</p>
   */
  inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const { return m_errorDetails; }
  template <typename ErrorDetailsT = Aws::Vector<ErrorDetail>>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = Aws::Vector<ErrorDetail>>
  GetCertificateAssociationResult& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  template <typename ErrorDetailsT = ErrorDetail>
  GetCertificateAssociationResult& AddErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value));
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
  GetCertificateAssociationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_gatewayId;

  Aws::String m_acmCertificateArn;

  CertificateAssociationStatus m_status{CertificateAssociationStatus::NOT_SET};

  Aws::Utils::DateTime m_associatedAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<ErrorDetail> m_errorDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gatewayIdHasBeenSet = false;
  bool m_acmCertificateArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_associatedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
