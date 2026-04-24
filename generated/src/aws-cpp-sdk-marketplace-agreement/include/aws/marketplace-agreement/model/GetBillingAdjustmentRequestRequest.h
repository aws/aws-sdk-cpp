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
class GetBillingAdjustmentRequestRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API GetBillingAdjustmentRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetBillingAdjustmentRequest"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with the billing adjustment
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
  GetBillingAdjustmentRequestRequest& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the billing adjustment request.</p>
   */
  inline const Aws::String& GetBillingAdjustmentRequestId() const { return m_billingAdjustmentRequestId; }
  inline bool BillingAdjustmentRequestIdHasBeenSet() const { return m_billingAdjustmentRequestIdHasBeenSet; }
  template <typename BillingAdjustmentRequestIdT = Aws::String>
  void SetBillingAdjustmentRequestId(BillingAdjustmentRequestIdT&& value) {
    m_billingAdjustmentRequestIdHasBeenSet = true;
    m_billingAdjustmentRequestId = std::forward<BillingAdjustmentRequestIdT>(value);
  }
  template <typename BillingAdjustmentRequestIdT = Aws::String>
  GetBillingAdjustmentRequestRequest& WithBillingAdjustmentRequestId(BillingAdjustmentRequestIdT&& value) {
    SetBillingAdjustmentRequestId(std::forward<BillingAdjustmentRequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementId;

  Aws::String m_billingAdjustmentRequestId;
  bool m_agreementIdHasBeenSet = false;
  bool m_billingAdjustmentRequestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
