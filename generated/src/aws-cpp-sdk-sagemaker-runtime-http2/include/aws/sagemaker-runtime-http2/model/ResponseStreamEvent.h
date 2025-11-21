/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>
#include <aws/sagemaker-runtime-http2/model/ModelStreamError.h>
#include <aws/sagemaker-runtime-http2/model/ResponsePayloadPart.h>

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
 * <p>Response stream event union.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-runtime-http2-2025-10-01/ResponseStreamEvent">AWS
 * API Reference</a></p>
 */
class ResponseStreamEvent {
 public:
  AWS_SAGEMAKERRUNTIMEHTTP2_API ResponseStreamEvent() = default;
  AWS_SAGEMAKERRUNTIMEHTTP2_API ResponseStreamEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERRUNTIMEHTTP2_API ResponseStreamEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERRUNTIMEHTTP2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Payload part event.</p>
   */
  inline const ResponsePayloadPart& GetPayloadPart() const { return m_payloadPart; }
  inline bool PayloadPartHasBeenSet() const { return m_payloadPartHasBeenSet; }
  template <typename PayloadPartT = ResponsePayloadPart>
  void SetPayloadPart(PayloadPartT&& value) {
    m_payloadPartHasBeenSet = true;
    m_payloadPart = std::forward<PayloadPartT>(value);
  }
  template <typename PayloadPartT = ResponsePayloadPart>
  ResponseStreamEvent& WithPayloadPart(PayloadPartT&& value) {
    SetPayloadPart(std::forward<PayloadPartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Model stream error event.</p>
   */
  inline const ModelStreamError& GetModelStreamError() const { return m_modelStreamError; }
  inline bool ModelStreamErrorHasBeenSet() const { return m_modelStreamErrorHasBeenSet; }
  template <typename ModelStreamErrorT = ModelStreamError>
  void SetModelStreamError(ModelStreamErrorT&& value) {
    m_modelStreamErrorHasBeenSet = true;
    m_modelStreamError = std::forward<ModelStreamErrorT>(value);
  }
  template <typename ModelStreamErrorT = ModelStreamError>
  ResponseStreamEvent& WithModelStreamError(ModelStreamErrorT&& value) {
    SetModelStreamError(std::forward<ModelStreamErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Internal stream failure event.</p>
   */
  inline const SageMakerRuntimeHTTP2Error& GetInternalStreamFailure() const { return m_internalStreamFailure; }
  inline bool InternalStreamFailureHasBeenSet() const { return m_internalStreamFailureHasBeenSet; }
  template <typename InternalStreamFailureT = SageMakerRuntimeHTTP2Error>
  void SetInternalStreamFailure(InternalStreamFailureT&& value) {
    m_internalStreamFailureHasBeenSet = true;
    m_internalStreamFailure = std::forward<InternalStreamFailureT>(value);
  }
  template <typename InternalStreamFailureT = SageMakerRuntimeHTTP2Error>
  ResponseStreamEvent& WithInternalStreamFailure(InternalStreamFailureT&& value) {
    SetInternalStreamFailure(std::forward<InternalStreamFailureT>(value));
    return *this;
  }
  ///@}
 private:
  ResponsePayloadPart m_payloadPart;
  bool m_payloadPartHasBeenSet = false;

  ModelStreamError m_modelStreamError;
  bool m_modelStreamErrorHasBeenSet = false;

  SageMakerRuntimeHTTP2Error m_internalStreamFailure;
  bool m_internalStreamFailureHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
