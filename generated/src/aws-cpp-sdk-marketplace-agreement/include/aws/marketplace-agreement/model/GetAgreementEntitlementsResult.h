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
#include <aws/marketplace-agreement/model/AgreementEntitlement.h>

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
class GetAgreementEntitlementsResult {
 public:
  AWS_AGREEMENTSERVICE_API GetAgreementEntitlementsResult() = default;
  AWS_AGREEMENTSERVICE_API GetAgreementEntitlementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_AGREEMENTSERVICE_API GetAgreementEntitlementsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>A list of agreement entitlements which are part of the latest agreement.</p>
   */
  inline const Aws::Vector<AgreementEntitlement>& GetAgreementEntitlements() const { return m_agreementEntitlements; }
  template <typename AgreementEntitlementsT = Aws::Vector<AgreementEntitlement>>
  void SetAgreementEntitlements(AgreementEntitlementsT&& value) {
    m_agreementEntitlementsHasBeenSet = true;
    m_agreementEntitlements = std::forward<AgreementEntitlementsT>(value);
  }
  template <typename AgreementEntitlementsT = Aws::Vector<AgreementEntitlement>>
  GetAgreementEntitlementsResult& WithAgreementEntitlements(AgreementEntitlementsT&& value) {
    SetAgreementEntitlements(std::forward<AgreementEntitlementsT>(value));
    return *this;
  }
  template <typename AgreementEntitlementsT = AgreementEntitlement>
  GetAgreementEntitlementsResult& AddAgreementEntitlements(AgreementEntitlementsT&& value) {
    m_agreementEntitlementsHasBeenSet = true;
    m_agreementEntitlements.emplace_back(std::forward<AgreementEntitlementsT>(value));
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
  GetAgreementEntitlementsResult& WithNextToken(NextTokenT&& value) {
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
  GetAgreementEntitlementsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AgreementEntitlement> m_agreementEntitlements;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agreementEntitlementsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
