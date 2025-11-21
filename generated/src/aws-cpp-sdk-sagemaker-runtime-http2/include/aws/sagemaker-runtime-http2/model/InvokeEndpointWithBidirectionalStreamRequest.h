/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2Request.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>
#include <aws/sagemaker-runtime-http2/model/InvokeEndpointWithBidirectionalStreamHandler.h>
#include <aws/sagemaker-runtime-http2/model/RequestStreamEvent.h>

#include <memory>
#include <utility>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
namespace Model {

/**
 */
class InvokeEndpointWithBidirectionalStreamRequest : public SageMakerRuntimeHTTP2Request {
 public:
  AWS_SAGEMAKERRUNTIMEHTTP2_API InvokeEndpointWithBidirectionalStreamRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeEndpointWithBidirectionalStream"; }

  inline virtual bool IsEventStreamRequest() const override { return true; }
  inline virtual bool HasEventStreamResponse() const override { return true; }
  // SerializePayload will not be invoked.
  // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
  AWS_SAGEMAKERRUNTIMEHTTP2_API Aws::String SerializePayload() const override { return {}; }
  AWS_SAGEMAKERRUNTIMEHTTP2_API std::shared_ptr<Aws::IOStream> GetBody() const override;
  AWS_SAGEMAKERRUNTIMEHTTP2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Underlying Event Stream Decoder.
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline InvokeEndpointWithBidirectionalStreamHandler& GetEventStreamHandler() { return m_handler; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline void SetEventStreamHandler(const InvokeEndpointWithBidirectionalStreamHandler& value) {
    m_handler = value;
    m_decoder.ResetEventStreamHandler(&m_handler);
  }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline InvokeEndpointWithBidirectionalStreamRequest& WithEventStreamHandler(const InvokeEndpointWithBidirectionalStreamHandler& value) {
    SetEventStreamHandler(value);
    return *this;
  }

  ///@{
  /**
   * <p>The name of the endpoint to invoke.</p>
   */
  inline const Aws::String& GetEndpointName() const { return m_endpointName; }
  inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
  template <typename EndpointNameT = Aws::String>
  void SetEndpointName(EndpointNameT&& value) {
    m_endpointNameHasBeenSet = true;
    m_endpointName = std::forward<EndpointNameT>(value);
  }
  template <typename EndpointNameT = Aws::String>
  InvokeEndpointWithBidirectionalStreamRequest& WithEndpointName(EndpointNameT&& value) {
    SetEndpointName(std::forward<EndpointNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request payload stream.</p>
   */
  AWS_SAGEMAKERRUNTIMEHTTP2_API std::shared_ptr<RequestStreamEvent> GetMemberBody() const { return m_body; }
  AWS_SAGEMAKERRUNTIMEHTTP2_API void SetBody(const std::shared_ptr<RequestStreamEvent>& value) {
    m_bodyHasBeenSet = true;
    m_body = value;
  }
  AWS_SAGEMAKERRUNTIMEHTTP2_API InvokeEndpointWithBidirectionalStreamRequest& WithBody(const std::shared_ptr<RequestStreamEvent>& value) {
    SetBody(value);
    return *this;
  }

  ///@}

  ///@{
  /**
   * <p>Target variant for the request.</p>
   */
  inline const Aws::String& GetTargetVariant() const { return m_targetVariant; }
  inline bool TargetVariantHasBeenSet() const { return m_targetVariantHasBeenSet; }
  template <typename TargetVariantT = Aws::String>
  void SetTargetVariant(TargetVariantT&& value) {
    m_targetVariantHasBeenSet = true;
    m_targetVariant = std::forward<TargetVariantT>(value);
  }
  template <typename TargetVariantT = Aws::String>
  InvokeEndpointWithBidirectionalStreamRequest& WithTargetVariant(TargetVariantT&& value) {
    SetTargetVariant(std::forward<TargetVariantT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Model invocation path.</p>
   */
  inline const Aws::String& GetModelInvocationPath() const { return m_modelInvocationPath; }
  inline bool ModelInvocationPathHasBeenSet() const { return m_modelInvocationPathHasBeenSet; }
  template <typename ModelInvocationPathT = Aws::String>
  void SetModelInvocationPath(ModelInvocationPathT&& value) {
    m_modelInvocationPathHasBeenSet = true;
    m_modelInvocationPath = std::forward<ModelInvocationPathT>(value);
  }
  template <typename ModelInvocationPathT = Aws::String>
  InvokeEndpointWithBidirectionalStreamRequest& WithModelInvocationPath(ModelInvocationPathT&& value) {
    SetModelInvocationPath(std::forward<ModelInvocationPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Model query string.</p>
   */
  inline const Aws::String& GetModelQueryString() const { return m_modelQueryString; }
  inline bool ModelQueryStringHasBeenSet() const { return m_modelQueryStringHasBeenSet; }
  template <typename ModelQueryStringT = Aws::String>
  void SetModelQueryString(ModelQueryStringT&& value) {
    m_modelQueryStringHasBeenSet = true;
    m_modelQueryString = std::forward<ModelQueryStringT>(value);
  }
  template <typename ModelQueryStringT = Aws::String>
  InvokeEndpointWithBidirectionalStreamRequest& WithModelQueryString(ModelQueryStringT&& value) {
    SetModelQueryString(std::forward<ModelQueryStringT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpointName;
  bool m_endpointNameHasBeenSet = false;

  std::shared_ptr<RequestStreamEvent> m_body;
  bool m_bodyHasBeenSet = false;

  Aws::String m_targetVariant;
  bool m_targetVariantHasBeenSet = false;

  Aws::String m_modelInvocationPath;
  bool m_modelInvocationPathHasBeenSet = false;

  Aws::String m_modelQueryString;
  bool m_modelQueryStringHasBeenSet = false;
  InvokeEndpointWithBidirectionalStreamHandler m_handler;
  Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};
};

}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
