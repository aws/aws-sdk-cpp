/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeErrors.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>
#include <aws/sagemaker-gateway-runtime/model/InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse.h>
#include <aws/sagemaker-gateway-runtime/model/PayloadPart.h>

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Model {
enum class InvokeGlobalInferenceGatewayWithResponseStreamEventType { INITIAL_RESPONSE, PAYLOADPART, UNKNOWN };

class InvokeGlobalInferenceGatewayWithResponseStreamHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse&)>
      InvokeGlobalInferenceGatewayWithResponseStreamInitialResponseCallback;
  typedef std::function<void(const InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse&, const Utils::Event::InitialResponseType)>
      InvokeGlobalInferenceGatewayWithResponseStreamInitialResponseCallbackEx;
  typedef std::function<void(const PayloadPart&)> PayloadPartCallback;
  typedef std::function<void(const Aws::Client::AWSError<SageMakerGatewayRuntimeErrors>& error)> ErrorCallback;

 public:
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayWithResponseStreamHandler();
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayWithResponseStreamHandler& operator=(
      const InvokeGlobalInferenceGatewayWithResponseStreamHandler&) = default;
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayWithResponseStreamHandler(
      const InvokeGlobalInferenceGatewayWithResponseStreamHandler&) = default;

  AWS_SAGEMAKERGATEWAYRUNTIME_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial InvokeGlobalInferenceGatewayWithResponseStream Operation
   * response. This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection. This callback may
   * get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const InvokeGlobalInferenceGatewayWithResponseStreamInitialResponseCallbackEx& callback) {
    m_onInitialResponse = callback;
  }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const InvokeGlobalInferenceGatewayWithResponseStreamInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse& rs,
                                          const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
  }
  ///@}
  inline void SetPayloadPartCallback(const PayloadPartCallback& callback) { m_onPayloadPart = callback; }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline InvokeGlobalInferenceGatewayWithResponseStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() {
    return m_onInitialResponse;
  }

 private:
  AWS_SAGEMAKERGATEWAYRUNTIME_API void HandleEventInMessage();
  AWS_SAGEMAKERGATEWAYRUNTIME_API void HandleErrorInMessage();
  AWS_SAGEMAKERGATEWAYRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  InvokeGlobalInferenceGatewayWithResponseStreamInitialResponseCallbackEx m_onInitialResponse;
  PayloadPartCallback m_onPayloadPart;
  ErrorCallback m_onError;
};

namespace InvokeGlobalInferenceGatewayWithResponseStreamEventMapper {
AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayWithResponseStreamEventType
GetInvokeGlobalInferenceGatewayWithResponseStreamEventTypeForName(const Aws::String& name);

AWS_SAGEMAKERGATEWAYRUNTIME_API Aws::String GetNameForInvokeGlobalInferenceGatewayWithResponseStreamEventType(
    InvokeGlobalInferenceGatewayWithResponseStreamEventType value);
}  // namespace InvokeGlobalInferenceGatewayWithResponseStreamEventMapper
}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
