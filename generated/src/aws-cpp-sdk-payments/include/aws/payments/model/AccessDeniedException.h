/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/AccessDeniedExceptionReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {

/**
 * <p>The request is denied because you don't have sufficient access to perform
 * this operation. Verify that you have the required permissions and try again.
 * This error is also returned, instead of <code>ResourceNotFoundException</code>,
 * when you aren't authorized for the resource, so the response doesn't reveal
 * whether the resource exists.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/AccessDeniedException">AWS
 * API Reference</a></p>
 */
class AccessDeniedException {
 public:
  AWS_PAYMENTS_API AccessDeniedException() = default;
  AWS_PAYMENTS_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  AccessDeniedException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that access was denied. The following values are valid:</p> <ul>
   * <li> <p> <code>NOT_AUTHORIZED</code> – Your IAM policies don't allow this
   * action.</p> </li> <li> <p> <code>INVALID_ACCOUNT_STATE</code> – Your Amazon Web
   * Services account isn't in a state that allows this action, for example because
   * registration isn't complete or the account is suspended.</p> </li> <li> <p>
   * <code>OTHER</code> – Access was denied for another reason.</p> </li> </ul>
   */
  inline AccessDeniedExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(AccessDeniedExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline AccessDeniedException& WithReason(AccessDeniedExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  AccessDeniedExceptionReason m_reason{AccessDeniedExceptionReason::NOT_SET};
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
