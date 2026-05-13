/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/CertificateAssociationSummary.h>

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
class ListCertificateAssociationsResult {
 public:
  AWS_RTBFABRIC_API ListCertificateAssociationsResult() = default;
  AWS_RTBFABRIC_API ListCertificateAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API ListCertificateAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of certificate associations for the gateway.</p>
   */
  inline const Aws::Vector<CertificateAssociationSummary>& GetCertificateAssociations() const { return m_certificateAssociations; }
  template <typename CertificateAssociationsT = Aws::Vector<CertificateAssociationSummary>>
  void SetCertificateAssociations(CertificateAssociationsT&& value) {
    m_certificateAssociationsHasBeenSet = true;
    m_certificateAssociations = std::forward<CertificateAssociationsT>(value);
  }
  template <typename CertificateAssociationsT = Aws::Vector<CertificateAssociationSummary>>
  ListCertificateAssociationsResult& WithCertificateAssociations(CertificateAssociationsT&& value) {
    SetCertificateAssociations(std::forward<CertificateAssociationsT>(value));
    return *this;
  }
  template <typename CertificateAssociationsT = CertificateAssociationSummary>
  ListCertificateAssociationsResult& AddCertificateAssociations(CertificateAssociationsT&& value) {
    m_certificateAssociationsHasBeenSet = true;
    m_certificateAssociations.emplace_back(std::forward<CertificateAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>nextToken</code> is returned, there are more results available. The
   * value of <code>nextToken</code> is a unique pagination token for each page. Make
   * the call again using the returned token to retrieve the next page. Keep all
   * other arguments unchanged. Each pagination token expires after 24 hours. Using
   * an expired pagination token will return an <i>HTTP 400 InvalidToken
   * error</i>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCertificateAssociationsResult& WithNextToken(NextTokenT&& value) {
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
  ListCertificateAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CertificateAssociationSummary> m_certificateAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_certificateAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
