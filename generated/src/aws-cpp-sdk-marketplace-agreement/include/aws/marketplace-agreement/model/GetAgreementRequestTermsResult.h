/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementRequestTerm.h>

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
class GetAgreementRequestTermsResult {
 public:
  AWS_AGREEMENTSERVICE_API GetAgreementRequestTermsResult() = default;
  AWS_AGREEMENTSERVICE_API GetAgreementRequestTermsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_AGREEMENTSERVICE_API GetAgreementRequestTermsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The terms proposed for the agreement request. The terms are fixed when the
   * agreement request is created.</p>
   */
  inline const Aws::Vector<AgreementRequestTerm>& GetTerms() const { return m_terms; }
  template <typename TermsT = Aws::Vector<AgreementRequestTerm>>
  void SetTerms(TermsT&& value) {
    m_termsHasBeenSet = true;
    m_terms = std::forward<TermsT>(value);
  }
  template <typename TermsT = Aws::Vector<AgreementRequestTerm>>
  GetAgreementRequestTermsResult& WithTerms(TermsT&& value) {
    SetTerms(std::forward<TermsT>(value));
    return *this;
  }
  template <typename TermsT = AgreementRequestTerm>
  GetAgreementRequestTermsResult& AddTerms(TermsT&& value) {
    m_termsHasBeenSet = true;
    m_terms.emplace_back(std::forward<TermsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token used for pagination. The field is <code>null</code> if there are no
   * more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetAgreementRequestTermsResult& WithNextToken(NextTokenT&& value) {
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
  GetAgreementRequestTermsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AgreementRequestTerm> m_terms;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_termsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
