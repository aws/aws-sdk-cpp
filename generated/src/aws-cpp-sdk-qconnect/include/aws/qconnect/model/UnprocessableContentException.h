/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/UnprocessableContentReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>The server has a failure of processing the message</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UnprocessableContentException">AWS
 * API Reference</a></p>
 */
class UnprocessableContentException {
 public:
  AWS_QCONNECT_API UnprocessableContentException() = default;
  AWS_QCONNECT_API UnprocessableContentException(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API UnprocessableContentException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  UnprocessableContentException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the content could not be processed.</p>
   */
  inline UnprocessableContentReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(UnprocessableContentReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline UnprocessableContentException& WithReason(UnprocessableContentReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  UnprocessableContentReason m_reason{UnprocessableContentReason::NOT_SET};
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
