/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/SharedResourceErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MQ {
namespace Model {

/**
 * <p>Information on the error encountered by the resource.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/SharedResourceError">AWS
 * API Reference</a></p>
 */
class SharedResourceError {
 public:
  AWS_MQ_API SharedResourceError() = default;
  AWS_MQ_API SharedResourceError(Aws::Utils::Json::JsonView jsonValue);
  AWS_MQ_API SharedResourceError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code associated with the error.</p>
   */
  inline SharedResourceErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(SharedResourceErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline SharedResourceError& WithCode(SharedResourceErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  SharedResourceError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  SharedResourceErrorCode m_code{SharedResourceErrorCode::NOT_SET};

  Aws::String m_message;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace MQ
}  // namespace Aws
