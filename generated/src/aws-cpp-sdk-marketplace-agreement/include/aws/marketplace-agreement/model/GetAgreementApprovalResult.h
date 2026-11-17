/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BuyerAgreementApproval.h>

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
class GetAgreementApprovalResult {
 public:
  AWS_AGREEMENTSERVICE_API GetAgreementApprovalResult() = default;
  AWS_AGREEMENTSERVICE_API GetAgreementApprovalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_AGREEMENTSERVICE_API GetAgreementApprovalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The details of the agreement approval, when it is a
   * <code>BUYER_AGREEMENT_APPROVAL</code>.</p>
   */
  inline const BuyerAgreementApproval& GetBuyerAgreementApproval() const { return m_buyerAgreementApproval; }
  template <typename BuyerAgreementApprovalT = BuyerAgreementApproval>
  void SetBuyerAgreementApproval(BuyerAgreementApprovalT&& value) {
    m_buyerAgreementApprovalHasBeenSet = true;
    m_buyerAgreementApproval = std::forward<BuyerAgreementApprovalT>(value);
  }
  template <typename BuyerAgreementApprovalT = BuyerAgreementApproval>
  GetAgreementApprovalResult& WithBuyerAgreementApproval(BuyerAgreementApprovalT&& value) {
    SetBuyerAgreementApproval(std::forward<BuyerAgreementApprovalT>(value));
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
  GetAgreementApprovalResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  BuyerAgreementApproval m_buyerAgreementApproval;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_buyerAgreementApprovalHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
