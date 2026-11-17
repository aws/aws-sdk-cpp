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
#include <aws/marketplace-agreement/model/AgreementApprovalSummary.h>

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
class StartAgreementApprovalsResult {
 public:
  AWS_AGREEMENTSERVICE_API StartAgreementApprovalsResult() = default;
  AWS_AGREEMENTSERVICE_API StartAgreementApprovalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_AGREEMENTSERVICE_API StartAgreementApprovalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>An array of <code>AgreementApprovalSummary</code> objects, one for each
   * agreement approval that was started.</p>
   */
  inline const Aws::Vector<AgreementApprovalSummary>& GetApprovalSummaries() const { return m_approvalSummaries; }
  template <typename ApprovalSummariesT = Aws::Vector<AgreementApprovalSummary>>
  void SetApprovalSummaries(ApprovalSummariesT&& value) {
    m_approvalSummariesHasBeenSet = true;
    m_approvalSummaries = std::forward<ApprovalSummariesT>(value);
  }
  template <typename ApprovalSummariesT = Aws::Vector<AgreementApprovalSummary>>
  StartAgreementApprovalsResult& WithApprovalSummaries(ApprovalSummariesT&& value) {
    SetApprovalSummaries(std::forward<ApprovalSummariesT>(value));
    return *this;
  }
  template <typename ApprovalSummariesT = AgreementApprovalSummary>
  StartAgreementApprovalsResult& AddApprovalSummaries(ApprovalSummariesT&& value) {
    m_approvalSummariesHasBeenSet = true;
    m_approvalSummaries.emplace_back(std::forward<ApprovalSummariesT>(value));
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
  StartAgreementApprovalsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AgreementApprovalSummary> m_approvalSummaries;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_approvalSummariesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
