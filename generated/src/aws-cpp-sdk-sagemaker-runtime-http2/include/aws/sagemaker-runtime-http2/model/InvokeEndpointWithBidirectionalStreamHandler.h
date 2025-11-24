/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2Errors.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>
#include <aws/sagemaker-runtime-http2/model/InvokeEndpointWithBidirectionalStreamInitialResponse.h>
#include <aws/sagemaker-runtime-http2/model/ResponsePayloadPart.h>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
namespace Model {
enum class InvokeEndpointWithBidirectionalStreamEventType { INITIAL_RESPONSE, PAYLOADPART, UNKNOWN };

class InvokeEndpointWithBidirectionalStreamHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const InvokeEndpointWithBidirectionalStreamInitialResponse&)>
      InvokeEndpointWithBidirectionalStreamInitialResponseCallback;
  typedef std::function<void(const InvokeEndpointWithBidirectionalStreamInitialResponse&, const Utils::Event::InitialResponseType)>
      InvokeEndpointWithBidirectionalStreamInitialResponseCallbackEx;
  typedef std::function<void(const ResponsePayloadPart&)> ResponsePayloadPartCallback;
  typedef std::function<void(const Aws::Client::AWSError<SageMakerRuntimeHTTP2Errors>& error)> ErrorCallback;

 public:
  AWS_SAGEMAKERRUNTIMEHTTP2_API InvokeEndpointWithBidirectionalStreamHandler();
  AWS_SAGEMAKERRUNTIMEHTTP2_API InvokeEndpointWithBidirectionalStreamHandler& operator=(
      const InvokeEndpointWithBidirectionalStreamHandler&) = default;
  AWS_SAGEMAKERRUNTIMEHTTP2_API InvokeEndpointWithBidirectionalStreamHandler(const InvokeEndpointWithBidirectionalStreamHandler&) = default;

  AWS_SAGEMAKERRUNTIMEHTTP2_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial InvokeEndpointWithBidirectionalStream Operation response.
   *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
   *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const InvokeEndpointWithBidirectionalStreamInitialResponseCallbackEx& callback) {
    m_onInitialResponse = callback;
  }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const InvokeEndpointWithBidirectionalStreamInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const InvokeEndpointWithBidirectionalStreamInitialResponse& rs,
                                          const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
  }
  ///@}
  inline void SetResponsePayloadPartCallback(const ResponsePayloadPartCallback& callback) { m_onResponsePayloadPart = callback; }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline InvokeEndpointWithBidirectionalStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

 private:
  AWS_SAGEMAKERRUNTIMEHTTP2_API void HandleEventInMessage();
  AWS_SAGEMAKERRUNTIMEHTTP2_API void HandleErrorInMessage();
  AWS_SAGEMAKERRUNTIMEHTTP2_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  InvokeEndpointWithBidirectionalStreamInitialResponseCallbackEx m_onInitialResponse;
  ResponsePayloadPartCallback m_onResponsePayloadPart;
  ErrorCallback m_onError;
};

namespace InvokeEndpointWithBidirectionalStreamEventMapper {
AWS_SAGEMAKERRUNTIMEHTTP2_API InvokeEndpointWithBidirectionalStreamEventType
GetInvokeEndpointWithBidirectionalStreamEventTypeForName(const Aws::String& name);

AWS_SAGEMAKERRUNTIMEHTTP2_API Aws::String GetNameForInvokeEndpointWithBidirectionalStreamEventType(
    InvokeEndpointWithBidirectionalStreamEventType value);
}  // namespace InvokeEndpointWithBidirectionalStreamEventMapper
}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
