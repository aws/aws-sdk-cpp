/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ClientRoutingPolicy.h>
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
class UpdateResponderGatewayResult {
 public:
  AWS_RTBFABRIC_API UpdateResponderGatewayResult() = default;
  AWS_RTBFABRIC_API UpdateResponderGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API UpdateResponderGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  UpdateResponderGatewayResult& WithGatewayId(GatewayIdT&& value) {
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
  inline UpdateResponderGatewayResult& WithStatus(ResponderGatewayStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client routing policy of the gateway. If the operation changed this
   * policy, the gateway uses the new policy after its status returns to
   * <code>ACTIVE</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/rtb-fabric/latest/userguide/working-with-responder-gateways.html#configuring-availability-zone-affinity">Configuring
   * Availability Zone affinity</a> in the <i>Amazon Web Services RTB Fabric User
   * Guide</i>.</p>
   */
  inline ClientRoutingPolicy GetClientRoutingPolicy() const { return m_clientRoutingPolicy; }
  inline void SetClientRoutingPolicy(ClientRoutingPolicy value) {
    m_clientRoutingPolicyHasBeenSet = true;
    m_clientRoutingPolicy = value;
  }
  inline UpdateResponderGatewayResult& WithClientRoutingPolicy(ClientRoutingPolicy value) {
    SetClientRoutingPolicy(value);
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
  UpdateResponderGatewayResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_gatewayId;

  ResponderGatewayStatus m_status{ResponderGatewayStatus::NOT_SET};

  ClientRoutingPolicy m_clientRoutingPolicy{ClientRoutingPolicy::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gatewayIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_clientRoutingPolicyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
