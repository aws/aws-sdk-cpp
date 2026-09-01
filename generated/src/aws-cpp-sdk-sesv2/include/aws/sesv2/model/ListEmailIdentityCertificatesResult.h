/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/IdentityCertificate.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {
/**
 * <p>Information about the S/MIME certificates that are associated with an email
 * identity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailIdentityCertificatesResponse">AWS
 * API Reference</a></p>
 */
class ListEmailIdentityCertificatesResult {
 public:
  AWS_SESV2_API ListEmailIdentityCertificatesResult() = default;
  AWS_SESV2_API ListEmailIdentityCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SESV2_API ListEmailIdentityCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array that contains the certificate associations for the email identity.
   * Each entry includes the from address, the certificate's status, its Amazon
   * Resource Name (ARN), and its expiry time.</p>
   */
  inline const Aws::Vector<IdentityCertificate>& GetCertificates() const { return m_certificates; }
  template <typename CertificatesT = Aws::Vector<IdentityCertificate>>
  void SetCertificates(CertificatesT&& value) {
    m_certificatesHasBeenSet = true;
    m_certificates = std::forward<CertificatesT>(value);
  }
  template <typename CertificatesT = Aws::Vector<IdentityCertificate>>
  ListEmailIdentityCertificatesResult& WithCertificates(CertificatesT&& value) {
    SetCertificates(std::forward<CertificatesT>(value));
    return *this;
  }
  template <typename CertificatesT = IdentityCertificate>
  ListEmailIdentityCertificatesResult& AddCertificates(CertificatesT&& value) {
    m_certificatesHasBeenSet = true;
    m_certificates.emplace_back(std::forward<CertificatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token that indicates that there are additional certificates to list. To
   * view additional certificates, issue another request to
   * <code>ListEmailIdentityCertificates</code>, and pass this token in the
   * <code>NextToken</code> parameter.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEmailIdentityCertificatesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListEmailIdentityCertificatesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<IdentityCertificate> m_certificates;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_certificatesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
