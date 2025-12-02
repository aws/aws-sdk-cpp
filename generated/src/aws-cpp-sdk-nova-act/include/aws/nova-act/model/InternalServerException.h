/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/InternalServerExceptionReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>An internal server error occurred. Please try again later.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/InternalServerException">AWS
 * API Reference</a></p>
 */
class InternalServerException {
 public:
  AWS_NOVAACT_API InternalServerException() = default;
  AWS_NOVAACT_API InternalServerException(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API InternalServerException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service encountered an internal error. Try again later.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  InternalServerException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds to wait before retrying the request.</p>
   */
  inline int GetRetryAfterSeconds() const { return m_retryAfterSeconds; }
  inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }
  inline void SetRetryAfterSeconds(int value) {
    m_retryAfterSecondsHasBeenSet = true;
    m_retryAfterSeconds = value;
  }
  inline InternalServerException& WithRetryAfterSeconds(int value) {
    SetRetryAfterSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the internal server error.</p>
   */
  inline InternalServerExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(InternalServerExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline InternalServerException& WithReason(InternalServerExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;
  bool m_messageHasBeenSet = false;

  int m_retryAfterSeconds{0};
  bool m_retryAfterSecondsHasBeenSet = false;

  InternalServerExceptionReason m_reason{InternalServerExceptionReason::NOT_SET};
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
