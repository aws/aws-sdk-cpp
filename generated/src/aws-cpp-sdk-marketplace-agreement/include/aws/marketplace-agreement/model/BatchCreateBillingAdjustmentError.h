/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BillingAdjustmentErrorCode.h>

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
 * <p>An error for a billing adjustment request entry that failed
 * validation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BatchCreateBillingAdjustmentError">AWS
 * API Reference</a></p>
 */
class BatchCreateBillingAdjustmentError {
 public:
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentError() = default;
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentError(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code indicating the reason for failure.</p>
   */
  inline BillingAdjustmentErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(BillingAdjustmentErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline BatchCreateBillingAdjustmentError& WithCode(BillingAdjustmentErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message describing the error.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchCreateBillingAdjustmentError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client token of the request entry that failed.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchCreateBillingAdjustmentError& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  BillingAdjustmentErrorCode m_code{BillingAdjustmentErrorCode::NOT_SET};

  Aws::String m_message;

  Aws::String m_clientToken;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
