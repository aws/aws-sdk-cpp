/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerInferenceRouterRuntime {
namespace Model {

/**
 * <p>The model in the destination that served the request returned an error. Check
 * <code>OriginalStatusCode</code>, <code>OriginalMessage</code>, and the
 * destination's logs in Amazon CloudWatch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-inference-router-runtime-2026-01-01/ModelError">AWS
 * API Reference</a></p>
 */
class ModelError {
 public:
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API ModelError() = default;
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API ModelError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API ModelError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A message that describes the error.</p>
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
   * <p>The HTTP status code that the model container returned.</p>
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
   * <p>The error message that the model container returned.</p>
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
   * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log stream for the
   * destination that served the request.</p>
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
 private:
  Aws::String m_message;

  int m_originalStatusCode{0};

  Aws::String m_originalMessage;

  Aws::String m_logStreamArn;
  bool m_messageHasBeenSet = false;
  bool m_originalStatusCodeHasBeenSet = false;
  bool m_originalMessageHasBeenSet = false;
  bool m_logStreamArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws
