/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/CertificateAssociationStatus.h>

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
class DisassociateCertificateResult {
 public:
  AWS_RTBFABRIC_API DisassociateCertificateResult() = default;
  AWS_RTBFABRIC_API DisassociateCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API DisassociateCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  DisassociateCertificateResult& WithGatewayId(GatewayIdT&& value) {
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
  DisassociateCertificateResult& WithAcmCertificateArn(AcmCertificateArnT&& value) {
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
  inline DisassociateCertificateResult& WithStatus(CertificateAssociationStatus value) {
    SetStatus(value);
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
  DisassociateCertificateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_gatewayId;

  Aws::String m_acmCertificateArn;

  CertificateAssociationStatus m_status{CertificateAssociationStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gatewayIdHasBeenSet = false;
  bool m_acmCertificateArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
