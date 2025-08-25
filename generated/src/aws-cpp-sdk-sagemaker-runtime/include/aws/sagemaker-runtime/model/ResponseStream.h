/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/sagemaker-runtime/model/PayloadPart.h>
#include <aws/sagemaker-runtime/model/ModelStreamError.h>
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
    AWS_SAGEMAKERRUNTIME_API ResponseStream() = default;
    AWS_SAGEMAKERRUNTIME_API ResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API ResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A wrapper for pieces of the payload that's returned in response to a
     * streaming inference request. A streaming inference response consists of one or
     * more payload parts. </p>
     */
    inline const PayloadPart& GetPayloadPart() const { return m_payloadPart; }
    inline bool PayloadPartHasBeenSet() const { return m_payloadPartHasBeenSet; }
    template<typename PayloadPartT = PayloadPart>
    void SetPayloadPart(PayloadPartT&& value) { m_payloadPartHasBeenSet = true; m_payloadPart = std::forward<PayloadPartT>(value); }
    template<typename PayloadPartT = PayloadPart>
    ResponseStream& WithPayloadPart(PayloadPartT&& value) { SetPayloadPart(std::forward<PayloadPartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An error occurred while streaming the response body. This error can have the
     * following error codes:</p> <dl> <dt>ModelInvocationTimeExceeded</dt> <dd> <p>The
     * model failed to finish sending the response within the timeout period allowed by
     * Amazon SageMaker AI.</p> </dd> <dt>StreamBroken</dt> <dd> <p>The Transmission
     * Control Protocol (TCP) connection between the client and the model was reset or
     * closed.</p> </dd> </dl>
     */
    inline const ModelStreamError& GetModelStreamError() const { return m_modelStreamError; }
    inline bool ModelStreamErrorHasBeenSet() const { return m_modelStreamErrorHasBeenSet; }
    template<typename ModelStreamErrorT = ModelStreamError>
    void SetModelStreamError(ModelStreamErrorT&& value) { m_modelStreamErrorHasBeenSet = true; m_modelStreamError = std::forward<ModelStreamErrorT>(value); }
    template<typename ModelStreamErrorT = ModelStreamError>
    ResponseStream& WithModelStreamError(ModelStreamErrorT&& value) { SetModelStreamError(std::forward<ModelStreamErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream processing failed because of an unknown error, exception or
     * failure. Try your request again.</p>
     */
    inline const SageMakerRuntimeError& GetInternalStreamFailure() const { return m_internalStreamFailure; }
    inline bool InternalStreamFailureHasBeenSet() const { return m_internalStreamFailureHasBeenSet; }
    template<typename InternalStreamFailureT = SageMakerRuntimeError>
    void SetInternalStreamFailure(InternalStreamFailureT&& value) { m_internalStreamFailureHasBeenSet = true; m_internalStreamFailure = std::forward<InternalStreamFailureT>(value); }
    template<typename InternalStreamFailureT = SageMakerRuntimeError>
    ResponseStream& WithInternalStreamFailure(InternalStreamFailureT&& value) { SetInternalStreamFailure(std::forward<InternalStreamFailureT>(value)); return *this;}
    ///@}
  private:

    PayloadPart m_payloadPart;
    bool m_payloadPartHasBeenSet = false;

    ModelStreamError m_modelStreamError;
    bool m_modelStreamErrorHasBeenSet = false;

    SageMakerRuntimeError m_internalStreamFailure;
    bool m_internalStreamFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
