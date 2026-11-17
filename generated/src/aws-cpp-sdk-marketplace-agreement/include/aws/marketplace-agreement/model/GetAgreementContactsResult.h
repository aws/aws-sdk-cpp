/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AcceptorContact.h>

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
class GetAgreementContactsResult {
 public:
  AWS_AGREEMENTSERVICE_API GetAgreementContactsResult() = default;
  AWS_AGREEMENTSERVICE_API GetAgreementContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_AGREEMENTSERVICE_API GetAgreementContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The contact information that the acceptor provided when creating the
   * agreement.</p>
   */
  inline const AcceptorContact& GetAcceptorContact() const { return m_acceptorContact; }
  template <typename AcceptorContactT = AcceptorContact>
  void SetAcceptorContact(AcceptorContactT&& value) {
    m_acceptorContactHasBeenSet = true;
    m_acceptorContact = std::forward<AcceptorContactT>(value);
  }
  template <typename AcceptorContactT = AcceptorContact>
  GetAgreementContactsResult& WithAcceptorContact(AcceptorContactT&& value) {
    SetAcceptorContact(std::forward<AcceptorContactT>(value));
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
  GetAgreementContactsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AcceptorContact m_acceptorContact;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_acceptorContactHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
