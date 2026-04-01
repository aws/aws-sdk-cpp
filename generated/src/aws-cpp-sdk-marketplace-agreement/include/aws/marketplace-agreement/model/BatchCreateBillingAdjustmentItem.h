/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>A successfully created billing adjustment request item.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BatchCreateBillingAdjustmentItem">AWS
 * API Reference</a></p>
 */
class BatchCreateBillingAdjustmentItem {
 public:
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentItem() = default;
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the created billing adjustment request.</p>
   */
  inline const Aws::String& GetBillingAdjustmentRequestId() const { return m_billingAdjustmentRequestId; }
  inline bool BillingAdjustmentRequestIdHasBeenSet() const { return m_billingAdjustmentRequestIdHasBeenSet; }
  template <typename BillingAdjustmentRequestIdT = Aws::String>
  void SetBillingAdjustmentRequestId(BillingAdjustmentRequestIdT&& value) {
    m_billingAdjustmentRequestIdHasBeenSet = true;
    m_billingAdjustmentRequestId = std::forward<BillingAdjustmentRequestIdT>(value);
  }
  template <typename BillingAdjustmentRequestIdT = Aws::String>
  BatchCreateBillingAdjustmentItem& WithBillingAdjustmentRequestId(BillingAdjustmentRequestIdT&& value) {
    SetBillingAdjustmentRequestId(std::forward<BillingAdjustmentRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client token provided in the corresponding request entry.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchCreateBillingAdjustmentItem& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_billingAdjustmentRequestId;

  Aws::String m_clientToken;
  bool m_billingAdjustmentRequestIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
