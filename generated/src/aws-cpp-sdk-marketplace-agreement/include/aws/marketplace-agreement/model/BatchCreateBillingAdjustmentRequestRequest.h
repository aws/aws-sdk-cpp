/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BatchCreateBillingAdjustmentRequestEntry.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class BatchCreateBillingAdjustmentRequestRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchCreateBillingAdjustmentRequest"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A list of billing adjustment request entries. Each entry specifies the
   * invoice and adjustment details.</p>
   */
  inline const Aws::Vector<BatchCreateBillingAdjustmentRequestEntry>& GetBillingAdjustmentRequestEntries() const {
    return m_billingAdjustmentRequestEntries;
  }
  inline bool BillingAdjustmentRequestEntriesHasBeenSet() const { return m_billingAdjustmentRequestEntriesHasBeenSet; }
  template <typename BillingAdjustmentRequestEntriesT = Aws::Vector<BatchCreateBillingAdjustmentRequestEntry>>
  void SetBillingAdjustmentRequestEntries(BillingAdjustmentRequestEntriesT&& value) {
    m_billingAdjustmentRequestEntriesHasBeenSet = true;
    m_billingAdjustmentRequestEntries = std::forward<BillingAdjustmentRequestEntriesT>(value);
  }
  template <typename BillingAdjustmentRequestEntriesT = Aws::Vector<BatchCreateBillingAdjustmentRequestEntry>>
  BatchCreateBillingAdjustmentRequestRequest& WithBillingAdjustmentRequestEntries(BillingAdjustmentRequestEntriesT&& value) {
    SetBillingAdjustmentRequestEntries(std::forward<BillingAdjustmentRequestEntriesT>(value));
    return *this;
  }
  template <typename BillingAdjustmentRequestEntriesT = BatchCreateBillingAdjustmentRequestEntry>
  BatchCreateBillingAdjustmentRequestRequest& AddBillingAdjustmentRequestEntries(BillingAdjustmentRequestEntriesT&& value) {
    m_billingAdjustmentRequestEntriesHasBeenSet = true;
    m_billingAdjustmentRequestEntries.emplace_back(std::forward<BillingAdjustmentRequestEntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BatchCreateBillingAdjustmentRequestEntry> m_billingAdjustmentRequestEntries;
  bool m_billingAdjustmentRequestEntriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
