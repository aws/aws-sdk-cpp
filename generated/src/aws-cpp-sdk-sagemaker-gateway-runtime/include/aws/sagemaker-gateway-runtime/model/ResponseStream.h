/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>
#include <aws/sagemaker-gateway-runtime/model/ModelStreamError.h>
#include <aws/sagemaker-gateway-runtime/model/PayloadPart.h>

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
 * <p>The events in the response stream. The response arrives as PayloadPart
 * events. A failure after the stream starts arrives as one InternalStreamFailure
 * event, and then the stream ends.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-gateway-runtime-2026-10-01/ResponseStream">AWS
 * API Reference</a></p>
 */
class ResponseStream {
 public:
  AWS_SAGEMAKERGATEWAYRUNTIME_API ResponseStream() = default;
  AWS_SAGEMAKERGATEWAYRUNTIME_API ResponseStream(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERGATEWAYRUNTIME_API ResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERGATEWAYRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A part of the model server's response.</p>
   */
  inline const PayloadPart& GetPayloadPart() const { return m_payloadPart; }
  inline bool PayloadPartHasBeenSet() const { return m_payloadPartHasBeenSet; }
  template <typename PayloadPartT = PayloadPart>
  void SetPayloadPart(PayloadPartT&& value) {
    m_payloadPartHasBeenSet = true;
    m_payloadPart = std::forward<PayloadPartT>(value);
  }
  template <typename PayloadPartT = PayloadPart>
  ResponseStream& WithPayloadPart(PayloadPartT&& value) {
    SetPayloadPart(std::forward<PayloadPartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for a model error during the stream. Not currently sent.</p>
   */
  inline const ModelStreamError& GetModelStreamError() const { return m_modelStreamError; }
  inline bool ModelStreamErrorHasBeenSet() const { return m_modelStreamErrorHasBeenSet; }
  template <typename ModelStreamErrorT = ModelStreamError>
  void SetModelStreamError(ModelStreamErrorT&& value) {
    m_modelStreamErrorHasBeenSet = true;
    m_modelStreamError = std::forward<ModelStreamErrorT>(value);
  }
  template <typename ModelStreamErrorT = ModelStreamError>
  ResponseStream& WithModelStreamError(ModelStreamErrorT&& value) {
    SetModelStreamError(std::forward<ModelStreamErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A failure after the stream started. The stream ends after this event.</p>
   */
  inline const SageMakerGatewayRuntimeError& GetInternalStreamFailure() const { return m_internalStreamFailure; }
  inline bool InternalStreamFailureHasBeenSet() const { return m_internalStreamFailureHasBeenSet; }
  template <typename InternalStreamFailureT = SageMakerGatewayRuntimeError>
  void SetInternalStreamFailure(InternalStreamFailureT&& value) {
    m_internalStreamFailureHasBeenSet = true;
    m_internalStreamFailure = std::forward<InternalStreamFailureT>(value);
  }
  template <typename InternalStreamFailureT = SageMakerGatewayRuntimeError>
  ResponseStream& WithInternalStreamFailure(InternalStreamFailureT&& value) {
    SetInternalStreamFailure(std::forward<InternalStreamFailureT>(value));
    return *this;
  }
  ///@}
 private:
  PayloadPart m_payloadPart;

  ModelStreamError m_modelStreamError;

  SageMakerGatewayRuntimeError m_internalStreamFailure;
  bool m_payloadPartHasBeenSet = false;
  bool m_modelStreamErrorHasBeenSet = false;
  bool m_internalStreamFailureHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
