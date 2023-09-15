/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/sagemaker-runtime/model/PayloadPart.h>
#include <aws/sagemaker-runtime/model/ModelStreamError.h>
#include <aws/sagemaker-runtime/model/InternalStreamFailure.h>
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
   * <p>A stream of payload parts. Each part contains a portion of the response for a
   * streaming inference request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.sagemaker-2017-05-13/ResponseStream">AWS
   * API Reference</a></p>
   */
  class ResponseStream
  {
  public:
    AWS_SAGEMAKERRUNTIME_API ResponseStream();
    AWS_SAGEMAKERRUNTIME_API ResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API ResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A wrapper for pieces of the payload that's returned in response to a
     * streaming inference request. A streaming inference response consists of one or
     * more payload parts. </p>
     */
    inline const PayloadPart& GetPayloadPart() const{ return m_payloadPart; }

    /**
     * <p>A wrapper for pieces of the payload that's returned in response to a
     * streaming inference request. A streaming inference response consists of one or
     * more payload parts. </p>
     */
    inline bool PayloadPartHasBeenSet() const { return m_payloadPartHasBeenSet; }

    /**
     * <p>A wrapper for pieces of the payload that's returned in response to a
     * streaming inference request. A streaming inference response consists of one or
     * more payload parts. </p>
     */
    inline void SetPayloadPart(const PayloadPart& value) { m_payloadPartHasBeenSet = true; m_payloadPart = value; }

    /**
     * <p>A wrapper for pieces of the payload that's returned in response to a
     * streaming inference request. A streaming inference response consists of one or
     * more payload parts. </p>
     */
    inline void SetPayloadPart(PayloadPart&& value) { m_payloadPartHasBeenSet = true; m_payloadPart = std::move(value); }

    /**
     * <p>A wrapper for pieces of the payload that's returned in response to a
     * streaming inference request. A streaming inference response consists of one or
     * more payload parts. </p>
     */
    inline ResponseStream& WithPayloadPart(const PayloadPart& value) { SetPayloadPart(value); return *this;}

    /**
     * <p>A wrapper for pieces of the payload that's returned in response to a
     * streaming inference request. A streaming inference response consists of one or
     * more payload parts. </p>
     */
    inline ResponseStream& WithPayloadPart(PayloadPart&& value) { SetPayloadPart(std::move(value)); return *this;}


    /**
     * <p> An error occurred while streaming the response body. This error can have the
     * following error codes:</p> <dl> <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The
     * model failed to finish sending the response within the timeout period allowed by
     * Amazon SageMaker.</p> </dd> <dt>StreamBroken</dt> <dd> <p>The Transmission
     * Control Protocol (TCP) connection between the client and the model was reset or
     * closed.</p> </dd> </dl>
     */
    inline const ModelStreamError& GetModelStreamError() const{ return m_modelStreamError; }

    /**
     * <p> An error occurred while streaming the response body. This error can have the
     * following error codes:</p> <dl> <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The
     * model failed to finish sending the response within the timeout period allowed by
     * Amazon SageMaker.</p> </dd> <dt>StreamBroken</dt> <dd> <p>The Transmission
     * Control Protocol (TCP) connection between the client and the model was reset or
     * closed.</p> </dd> </dl>
     */
    inline bool ModelStreamErrorHasBeenSet() const { return m_modelStreamErrorHasBeenSet; }

    /**
     * <p> An error occurred while streaming the response body. This error can have the
     * following error codes:</p> <dl> <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The
     * model failed to finish sending the response within the timeout period allowed by
     * Amazon SageMaker.</p> </dd> <dt>StreamBroken</dt> <dd> <p>The Transmission
     * Control Protocol (TCP) connection between the client and the model was reset or
     * closed.</p> </dd> </dl>
     */
    inline void SetModelStreamError(const ModelStreamError& value) { m_modelStreamErrorHasBeenSet = true; m_modelStreamError = value; }

    /**
     * <p> An error occurred while streaming the response body. This error can have the
     * following error codes:</p> <dl> <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The
     * model failed to finish sending the response within the timeout period allowed by
     * Amazon SageMaker.</p> </dd> <dt>StreamBroken</dt> <dd> <p>The Transmission
     * Control Protocol (TCP) connection between the client and the model was reset or
     * closed.</p> </dd> </dl>
     */
    inline void SetModelStreamError(ModelStreamError&& value) { m_modelStreamErrorHasBeenSet = true; m_modelStreamError = std::move(value); }

    /**
     * <p> An error occurred while streaming the response body. This error can have the
     * following error codes:</p> <dl> <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The
     * model failed to finish sending the response within the timeout period allowed by
     * Amazon SageMaker.</p> </dd> <dt>StreamBroken</dt> <dd> <p>The Transmission
     * Control Protocol (TCP) connection between the client and the model was reset or
     * closed.</p> </dd> </dl>
     */
    inline ResponseStream& WithModelStreamError(const ModelStreamError& value) { SetModelStreamError(value); return *this;}

    /**
     * <p> An error occurred while streaming the response body. This error can have the
     * following error codes:</p> <dl> <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The
     * model failed to finish sending the response within the timeout period allowed by
     * Amazon SageMaker.</p> </dd> <dt>StreamBroken</dt> <dd> <p>The Transmission
     * Control Protocol (TCP) connection between the client and the model was reset or
     * closed.</p> </dd> </dl>
     */
    inline ResponseStream& WithModelStreamError(ModelStreamError&& value) { SetModelStreamError(std::move(value)); return *this;}


    /**
     * <p>The stream processing failed because of an unknown error, exception or
     * failure. Try your request again.</p>
     */
    inline const InternalStreamFailure& GetInternalStreamFailure() const{ return m_internalStreamFailure; }

    /**
     * <p>The stream processing failed because of an unknown error, exception or
     * failure. Try your request again.</p>
     */
    inline bool InternalStreamFailureHasBeenSet() const { return m_internalStreamFailureHasBeenSet; }

    /**
     * <p>The stream processing failed because of an unknown error, exception or
     * failure. Try your request again.</p>
     */
    inline void SetInternalStreamFailure(const InternalStreamFailure& value) { m_internalStreamFailureHasBeenSet = true; m_internalStreamFailure = value; }

    /**
     * <p>The stream processing failed because of an unknown error, exception or
     * failure. Try your request again.</p>
     */
    inline void SetInternalStreamFailure(InternalStreamFailure&& value) { m_internalStreamFailureHasBeenSet = true; m_internalStreamFailure = std::move(value); }

    /**
     * <p>The stream processing failed because of an unknown error, exception or
     * failure. Try your request again.</p>
     */
    inline ResponseStream& WithInternalStreamFailure(const InternalStreamFailure& value) { SetInternalStreamFailure(value); return *this;}

    /**
     * <p>The stream processing failed because of an unknown error, exception or
     * failure. Try your request again.</p>
     */
    inline ResponseStream& WithInternalStreamFailure(InternalStreamFailure&& value) { SetInternalStreamFailure(std::move(value)); return *this;}

  private:

    PayloadPart m_payloadPart;
    bool m_payloadPartHasBeenSet = false;

    ModelStreamError m_modelStreamError;
    bool m_modelStreamErrorHasBeenSet = false;

    InternalStreamFailure m_internalStreamFailure;
    bool m_internalStreamFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
