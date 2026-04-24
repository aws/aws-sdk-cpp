/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ListenerConfig.h>
#include <aws/rtbfabric/model/ResponderGatewayStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {
class CreateResponderGatewayResult {
 public:
  AWS_RTBFABRIC_API CreateResponderGatewayResult() = default;
  AWS_RTBFABRIC_API CreateResponderGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API CreateResponderGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  CreateResponderGatewayResult& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the request.</p>
   */
  inline ResponderGatewayStatus GetStatus() const { return m_status; }
  inline void SetStatus(ResponderGatewayStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateResponderGatewayResult& WithStatus(ResponderGatewayStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The listener configuration for the responder gateway.</p>
   */
  inline const ListenerConfig& GetListenerConfig() const { return m_listenerConfig; }
  template <typename ListenerConfigT = ListenerConfig>
  void SetListenerConfig(ListenerConfigT&& value) {
    m_listenerConfigHasBeenSet = true;
    m_listenerConfig = std::forward<ListenerConfigT>(value);
  }
  template <typename ListenerConfigT = ListenerConfig>
  CreateResponderGatewayResult& WithListenerConfig(ListenerConfigT&& value) {
    SetListenerConfig(std::forward<ListenerConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The external inbound endpoint for the responder gateway.</p>
   */
  inline const Aws::String& GetExternalInboundEndpoint() const { return m_externalInboundEndpoint; }
  template <typename ExternalInboundEndpointT = Aws::String>
  void SetExternalInboundEndpoint(ExternalInboundEndpointT&& value) {
    m_externalInboundEndpointHasBeenSet = true;
    m_externalInboundEndpoint = std::forward<ExternalInboundEndpointT>(value);
  }
  template <typename ExternalInboundEndpointT = Aws::String>
  CreateResponderGatewayResult& WithExternalInboundEndpoint(ExternalInboundEndpointT&& value) {
    SetExternalInboundEndpoint(std::forward<ExternalInboundEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateResponderGatewayResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_gatewayId;

  ResponderGatewayStatus m_status{ResponderGatewayStatus::NOT_SET};

  ListenerConfig m_listenerConfig;

  Aws::String m_externalInboundEndpoint;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gatewayIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_listenerConfigHasBeenSet = false;
  bool m_externalInboundEndpointHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
