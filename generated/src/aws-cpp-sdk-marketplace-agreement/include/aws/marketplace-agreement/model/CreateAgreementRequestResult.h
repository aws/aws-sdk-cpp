/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/ChargeSummary.h>

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
class CreateAgreementRequestResult {
 public:
  AWS_AGREEMENTSERVICE_API CreateAgreementRequestResult() = default;
  AWS_AGREEMENTSERVICE_API CreateAgreementRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_AGREEMENTSERVICE_API CreateAgreementRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the agreement request created. Use this identifier
   * with <code>AcceptAgreementRequest</code> to accept the agreement.</p>
   */
  inline const Aws::String& GetAgreementRequestId() const { return m_agreementRequestId; }
  template <typename AgreementRequestIdT = Aws::String>
  void SetAgreementRequestId(AgreementRequestIdT&& value) {
    m_agreementRequestIdHasBeenSet = true;
    m_agreementRequestId = std::forward<AgreementRequestIdT>(value);
  }
  template <typename AgreementRequestIdT = Aws::String>
  CreateAgreementRequestResult& WithAgreementRequestId(AgreementRequestIdT&& value) {
    SetAgreementRequestId(std::forward<AgreementRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides details of the charges associated with the agreement request. This
   * is only applicable when a request is created for
   * <code>PurchaseAgreement</code>.</p>
   */
  inline const ChargeSummary& GetChargeSummary() const { return m_chargeSummary; }
  template <typename ChargeSummaryT = ChargeSummary>
  void SetChargeSummary(ChargeSummaryT&& value) {
    m_chargeSummaryHasBeenSet = true;
    m_chargeSummary = std::forward<ChargeSummaryT>(value);
  }
  template <typename ChargeSummaryT = ChargeSummary>
  CreateAgreementRequestResult& WithChargeSummary(ChargeSummaryT&& value) {
    SetChargeSummary(std::forward<ChargeSummaryT>(value));
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
  CreateAgreementRequestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_agreementRequestId;

  ChargeSummary m_chargeSummary;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agreementRequestIdHasBeenSet = false;
  bool m_chargeSummaryHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
