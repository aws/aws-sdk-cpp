/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeRequest.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>
#include <aws/sagemaker-gateway-runtime/model/InvokeGlobalInferenceGatewayWithResponseStreamHandler.h>

#include <utility>

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Model {

/**
 * <p>The request for InvokeGlobalInferenceGatewayWithResponseStream. It has the
 * same members as the InvokeGlobalInferenceGateway request.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-gateway-runtime-2026-10-01/InvokeGlobalInferenceGatewayWithResponseStreamInput">AWS
 * API Reference</a></p>
 */
class InvokeGlobalInferenceGatewayWithResponseStreamRequest : public StreamingSageMakerGatewayRuntimeRequest {
 public:
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayWithResponseStreamRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeGlobalInferenceGatewayWithResponseStream"; }

  inline virtual bool HasEventStreamResponse() const override { return true; }
  AWS_SAGEMAKERGATEWAYRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Underlying Event Stream Decoder.
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline InvokeGlobalInferenceGatewayWithResponseStreamHandler& GetEventStreamHandler() { return m_handler; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline void SetEventStreamHandler(const InvokeGlobalInferenceGatewayWithResponseStreamHandler& value) {
    m_handler = value;
    m_decoder.ResetEventStreamHandler(&m_handler);
  }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline InvokeGlobalInferenceGatewayWithResponseStreamRequest& WithEventStreamHandler(
      const InvokeGlobalInferenceGatewayWithResponseStreamHandler& value) {
    SetEventStreamHandler(value);
    return *this;
  }

  ///@{
  /**
   * <p>The ID of the Global Inference Gateway to invoke, as for
   * InvokeGlobalInferenceGateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  InvokeGlobalInferenceGatewayWithResponseStreamRequest& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME type you want for the response. It is passed to the model
   * server.</p>
   */
  inline const Aws::String& GetAccept() const { return m_accept; }
  inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
  template <typename AcceptT = Aws::String>
  void SetAccept(AcceptT&& value) {
    m_acceptHasBeenSet = true;
    m_accept = std::forward<AcceptT>(value);
  }
  template <typename AcceptT = Aws::String>
  InvokeGlobalInferenceGatewayWithResponseStreamRequest& WithAccept(AcceptT&& value) {
    SetAccept(std::forward<AcceptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer identity token (a JWT), as for InvokeGlobalInferenceGateway. It
   * is passed unchanged to the inference gateway, which validates it.</p>
   */
  inline const Aws::String& GetCustomerIdentityToken() const { return m_customerIdentityToken; }
  inline bool CustomerIdentityTokenHasBeenSet() const { return m_customerIdentityTokenHasBeenSet; }
  template <typename CustomerIdentityTokenT = Aws::String>
  void SetCustomerIdentityToken(CustomerIdentityTokenT&& value) {
    m_customerIdentityTokenHasBeenSet = true;
    m_customerIdentityToken = std::forward<CustomerIdentityTokenT>(value);
  }
  template <typename CustomerIdentityTokenT = Aws::String>
  InvokeGlobalInferenceGatewayWithResponseStreamRequest& WithCustomerIdentityToken(CustomerIdentityTokenT&& value) {
    SetCustomerIdentityToken(std::forward<CustomerIdentityTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayId;

  Aws::String m_accept;

  Aws::String m_customerIdentityToken;

  InvokeGlobalInferenceGatewayWithResponseStreamHandler m_handler;
  Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  bool m_gatewayIdHasBeenSet = false;
  bool m_acceptHasBeenSet = false;
  bool m_customerIdentityTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
