/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>
#include <aws/sagemaker-gateway-runtime/model/StreamErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerGatewayRuntime {
namespace Model {

/**
 * <p>Reserved for a model error during the stream. Not currently sent; a failure
 * after the stream starts is reported as InternalStreamFailure.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-gateway-runtime-2026-10-01/ModelStreamError">AWS
 * API Reference</a></p>
 */
class ModelStreamError {
 public:
  AWS_SAGEMAKERGATEWAYRUNTIME_API ModelStreamError() = default;
  AWS_SAGEMAKERGATEWAYRUNTIME_API ModelStreamError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERGATEWAYRUNTIME_API ModelStreamError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERGATEWAYRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the error.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ModelStreamError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code: <code>StreamBroken</code> if the model server's stream broke
   * before it completed, or <code>ModelInvocationTimeExceeded</code> if the model
   * exceeded its allowed invocation time.</p>
   */
  inline StreamErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(StreamErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline ModelStreamError& WithErrorCode(StreamErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  StreamErrorCode m_errorCode{StreamErrorCode::NOT_SET};
  bool m_messageHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
