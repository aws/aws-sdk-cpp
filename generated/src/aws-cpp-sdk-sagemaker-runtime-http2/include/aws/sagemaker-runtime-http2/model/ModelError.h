/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerRuntimeHTTP2 {
namespace Model {

/**
 * <p>An error occurred while processing the model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-runtime-http2-2025-10-01/ModelError">AWS
 * API Reference</a></p>
 */
class ModelError {
 public:
  AWS_SAGEMAKERRUNTIMEHTTP2_API ModelError() = default;
  AWS_SAGEMAKERRUNTIMEHTTP2_API ModelError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERRUNTIMEHTTP2_API ModelError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERRUNTIMEHTTP2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Error message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ModelError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>HTTP status code returned by model.</p>
   */
  inline int GetOriginalStatusCode() const { return m_originalStatusCode; }
  inline bool OriginalStatusCodeHasBeenSet() const { return m_originalStatusCodeHasBeenSet; }
  inline void SetOriginalStatusCode(int value) {
    m_originalStatusCodeHasBeenSet = true;
    m_originalStatusCode = value;
  }
  inline ModelError& WithOriginalStatusCode(int value) {
    SetOriginalStatusCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Original error message from the model.</p>
   */
  inline const Aws::String& GetOriginalMessage() const { return m_originalMessage; }
  inline bool OriginalMessageHasBeenSet() const { return m_originalMessageHasBeenSet; }
  template <typename OriginalMessageT = Aws::String>
  void SetOriginalMessage(OriginalMessageT&& value) {
    m_originalMessageHasBeenSet = true;
    m_originalMessage = std::forward<OriginalMessageT>(value);
  }
  template <typename OriginalMessageT = Aws::String>
  ModelError& WithOriginalMessage(OriginalMessageT&& value) {
    SetOriginalMessage(std::forward<OriginalMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CloudWatch log stream ARN.</p>
   */
  inline const Aws::String& GetLogStreamArn() const { return m_logStreamArn; }
  inline bool LogStreamArnHasBeenSet() const { return m_logStreamArnHasBeenSet; }
  template <typename LogStreamArnT = Aws::String>
  void SetLogStreamArn(LogStreamArnT&& value) {
    m_logStreamArnHasBeenSet = true;
    m_logStreamArn = std::forward<LogStreamArnT>(value);
  }
  template <typename LogStreamArnT = Aws::String>
  ModelError& WithLogStreamArn(LogStreamArnT&& value) {
    SetLogStreamArn(std::forward<LogStreamArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error code.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  ModelError& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  int m_originalStatusCode{0};

  Aws::String m_originalMessage;

  Aws::String m_logStreamArn;

  Aws::String m_errorCode;
  bool m_messageHasBeenSet = false;
  bool m_originalStatusCodeHasBeenSet = false;
  bool m_originalMessageHasBeenSet = false;
  bool m_logStreamArnHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
