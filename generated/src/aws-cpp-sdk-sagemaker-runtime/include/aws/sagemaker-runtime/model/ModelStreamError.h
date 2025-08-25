/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMakerRuntime
{
namespace Model
{

  /**
   * <p> An error occurred while streaming the response body. This error can have the
   * following error codes:</p> <dl> <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The
   * model failed to finish sending the response within the timeout period allowed by
   * Amazon SageMaker AI.</p> </dd> <dt>StreamBroken</dt> <dd> <p>The Transmission
   * Control Protocol (TCP) connection between the client and the model was reset or
   * closed.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.sagemaker-2017-05-13/ModelStreamError">AWS
   * API Reference</a></p>
   */
  class ModelStreamError
  {
  public:
    AWS_SAGEMAKERRUNTIME_API ModelStreamError() = default;
    AWS_SAGEMAKERRUNTIME_API ModelStreamError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API ModelStreamError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ModelStreamError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This error can have the following error codes:</p> <dl>
     * <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The model failed to finish sending
     * the response within the timeout period allowed by Amazon SageMaker AI.</p> </dd>
     * <dt>StreamBroken</dt> <dd> <p>The Transmission Control Protocol (TCP) connection
     * between the client and the model was reset or closed.</p> </dd> </dl>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    ModelStreamError& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
