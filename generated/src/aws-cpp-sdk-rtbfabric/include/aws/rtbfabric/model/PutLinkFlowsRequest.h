/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/Flow.h>

#include <utility>

namespace Aws {
namespace RTBFabric {
namespace Model {

/**
 */
class PutLinkFlowsRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API PutLinkFlowsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutLinkFlows"; }

  AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  PutLinkFlowsRequest& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the link.</p>
   */
  inline const Aws::String& GetLinkId() const { return m_linkId; }
  inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
  template <typename LinkIdT = Aws::String>
  void SetLinkId(LinkIdT&& value) {
    m_linkIdHasBeenSet = true;
    m_linkId = std::forward<LinkIdT>(value);
  }
  template <typename LinkIdT = Aws::String>
  PutLinkFlowsRequest& WithLinkId(LinkIdT&& value) {
    SetLinkId(std::forward<LinkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If you retry with the same token and
   * parameters, you get the original response without an error. If you retry with
   * the same token but different parameters, the call fails with
   * ValidationException. If you don't provide a token, the SDK generates one, and
   * RTB Fabric remembers it for 8 hours. A retry returns the original
   * <code>updateId</code> before <code>lockToken</code> is checked.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutLinkFlowsRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The concurrency token that you read from GetLink. If the link changed since
   * that read, by any operation, the call fails with ConflictException.</p>
   */
  inline const Aws::String& GetLockToken() const { return m_lockToken; }
  inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }
  template <typename LockTokenT = Aws::String>
  void SetLockToken(LockTokenT&& value) {
    m_lockTokenHasBeenSet = true;
    m_lockToken = std::forward<LockTokenT>(value);
  }
  template <typename LockTokenT = Aws::String>
  PutLinkFlowsRequest& WithLockToken(LockTokenT&& value) {
    SetLockToken(std::forward<LockTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The link's flows, replacing the current ones. An empty list removes every
   * flow.</p>
   */
  inline const Aws::Vector<Flow>& GetFlows() const { return m_flows; }
  inline bool FlowsHasBeenSet() const { return m_flowsHasBeenSet; }
  template <typename FlowsT = Aws::Vector<Flow>>
  void SetFlows(FlowsT&& value) {
    m_flowsHasBeenSet = true;
    m_flows = std::forward<FlowsT>(value);
  }
  template <typename FlowsT = Aws::Vector<Flow>>
  PutLinkFlowsRequest& WithFlows(FlowsT&& value) {
    SetFlows(std::forward<FlowsT>(value));
    return *this;
  }
  template <typename FlowsT = Flow>
  PutLinkFlowsRequest& AddFlows(FlowsT&& value) {
    m_flowsHasBeenSet = true;
    m_flows.emplace_back(std::forward<FlowsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayId;

  Aws::String m_linkId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_lockToken;

  Aws::Vector<Flow> m_flows;
  bool m_gatewayIdHasBeenSet = false;
  bool m_linkIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_lockTokenHasBeenSet = false;
  bool m_flowsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
