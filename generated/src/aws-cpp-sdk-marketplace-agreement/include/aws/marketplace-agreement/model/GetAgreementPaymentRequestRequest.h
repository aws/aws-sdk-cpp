/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class GetAgreementPaymentRequestRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API GetAgreementPaymentRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAgreementPaymentRequest"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier of the payment request.</p>
   */
  inline const Aws::String& GetPaymentRequestId() const { return m_paymentRequestId; }
  inline bool PaymentRequestIdHasBeenSet() const { return m_paymentRequestIdHasBeenSet; }
  template <typename PaymentRequestIdT = Aws::String>
  void SetPaymentRequestId(PaymentRequestIdT&& value) {
    m_paymentRequestIdHasBeenSet = true;
    m_paymentRequestId = std::forward<PaymentRequestIdT>(value);
  }
  template <typename PaymentRequestIdT = Aws::String>
  GetAgreementPaymentRequestRequest& WithPaymentRequestId(PaymentRequestIdT&& value) {
    SetPaymentRequestId(std::forward<PaymentRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with the payment
   * request.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  GetAgreementPaymentRequestRequest& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_paymentRequestId;

  Aws::String m_agreementId;
  bool m_paymentRequestIdHasBeenSet = false;
  bool m_agreementIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
