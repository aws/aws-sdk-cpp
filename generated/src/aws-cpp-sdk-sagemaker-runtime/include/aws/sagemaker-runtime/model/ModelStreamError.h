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
   * Amazon SageMaker.</p> </dd> <dt>StreamBroken</dt> <dd> <p>The Transmission
   * Control Protocol (TCP) connection between the client and the model was reset or
   * closed.</p> </dd> </dl><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.sagemaker-2017-05-13/ModelStreamError">AWS
   * API Reference</a></p>
   */
  class ModelStreamError
  {
  public:
    AWS_SAGEMAKERRUNTIME_API ModelStreamError();
    AWS_SAGEMAKERRUNTIME_API ModelStreamError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API ModelStreamError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ModelStreamError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ModelStreamError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ModelStreamError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>This error can have the following error codes:</p> <dl>
     * <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The model failed to finish sending
     * the response within the timeout period allowed by Amazon SageMaker.</p> </dd>
     * <dt>StreamBroken</dt> <dd> <p>The Transmission Control Protocol (TCP) connection
     * between the client and the model was reset or closed.</p> </dd> </dl>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>This error can have the following error codes:</p> <dl>
     * <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The model failed to finish sending
     * the response within the timeout period allowed by Amazon SageMaker.</p> </dd>
     * <dt>StreamBroken</dt> <dd> <p>The Transmission Control Protocol (TCP) connection
     * between the client and the model was reset or closed.</p> </dd> </dl>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>This error can have the following error codes:</p> <dl>
     * <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The model failed to finish sending
     * the response within the timeout period allowed by Amazon SageMaker.</p> </dd>
     * <dt>StreamBroken</dt> <dd> <p>The Transmission Control Protocol (TCP) connection
     * between the client and the model was reset or closed.</p> </dd> </dl>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>This error can have the following error codes:</p> <dl>
     * <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The model failed to finish sending
     * the response within the timeout period allowed by Amazon SageMaker.</p> </dd>
     * <dt>StreamBroken</dt> <dd> <p>The Transmission Control Protocol (TCP) connection
     * between the client and the model was reset or closed.</p> </dd> </dl>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>This error can have the following error codes:</p> <dl>
     * <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The model failed to finish sending
     * the response within the timeout period allowed by Amazon SageMaker.</p> </dd>
     * <dt>StreamBroken</dt> <dd> <p>The Transmission Control Protocol (TCP) connection
     * between the client and the model was reset or closed.</p> </dd> </dl>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>This error can have the following error codes:</p> <dl>
     * <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The model failed to finish sending
     * the response within the timeout period allowed by Amazon SageMaker.</p> </dd>
     * <dt>StreamBroken</dt> <dd> <p>The Transmission Control Protocol (TCP) connection
     * between the client and the model was reset or closed.</p> </dd> </dl>
     */
    inline ModelStreamError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>This error can have the following error codes:</p> <dl>
     * <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The model failed to finish sending
     * the response within the timeout period allowed by Amazon SageMaker.</p> </dd>
     * <dt>StreamBroken</dt> <dd> <p>The Transmission Control Protocol (TCP) connection
     * between the client and the model was reset or closed.</p> </dd> </dl>
     */
    inline ModelStreamError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>This error can have the following error codes:</p> <dl>
     * <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The model failed to finish sending
     * the response within the timeout period allowed by Amazon SageMaker.</p> </dd>
     * <dt>StreamBroken</dt> <dd> <p>The Transmission Control Protocol (TCP) connection
     * between the client and the model was reset or closed.</p> </dd> </dl>
     */
    inline ModelStreamError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
