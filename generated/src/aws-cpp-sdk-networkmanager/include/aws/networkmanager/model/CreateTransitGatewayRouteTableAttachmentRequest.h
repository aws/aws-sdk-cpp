/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Tag.h>

#include <utility>

namespace Aws {
namespace NetworkManager {
namespace Model {

/**
 */
class CreateTransitGatewayRouteTableAttachmentRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API CreateTransitGatewayRouteTableAttachmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayRouteTableAttachment"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the peer for the </p>
   */
  inline const Aws::String& GetPeeringId() const { return m_peeringId; }
  inline bool PeeringIdHasBeenSet() const { return m_peeringIdHasBeenSet; }
  template <typename PeeringIdT = Aws::String>
  void SetPeeringId(PeeringIdT&& value) {
    m_peeringIdHasBeenSet = true;
    m_peeringId = std::forward<PeeringIdT>(value);
  }
  template <typename PeeringIdT = Aws::String>
  CreateTransitGatewayRouteTableAttachmentRequest& WithPeeringId(PeeringIdT&& value) {
    SetPeeringId(std::forward<PeeringIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the transit gateway route table for the attachment request. For
   * example, <code>"TransitGatewayRouteTableArn":
   * "arn:aws:ec2:us-west-2:123456789012:transit-gateway-route-table/tgw-rtb-9876543210123456"</code>.</p>
   */
  inline const Aws::String& GetTransitGatewayRouteTableArn() const { return m_transitGatewayRouteTableArn; }
  inline bool TransitGatewayRouteTableArnHasBeenSet() const { return m_transitGatewayRouteTableArnHasBeenSet; }
  template <typename TransitGatewayRouteTableArnT = Aws::String>
  void SetTransitGatewayRouteTableArn(TransitGatewayRouteTableArnT&& value) {
    m_transitGatewayRouteTableArnHasBeenSet = true;
    m_transitGatewayRouteTableArn = std::forward<TransitGatewayRouteTableArnT>(value);
  }
  template <typename TransitGatewayRouteTableArnT = Aws::String>
  CreateTransitGatewayRouteTableAttachmentRequest& WithTransitGatewayRouteTableArn(TransitGatewayRouteTableArnT&& value) {
    SetTransitGatewayRouteTableArn(std::forward<TransitGatewayRouteTableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing policy label to apply to the Transit Gateway route table
   * attachment for traffic routing decisions.</p>
   */
  inline const Aws::String& GetRoutingPolicyLabel() const { return m_routingPolicyLabel; }
  inline bool RoutingPolicyLabelHasBeenSet() const { return m_routingPolicyLabelHasBeenSet; }
  template <typename RoutingPolicyLabelT = Aws::String>
  void SetRoutingPolicyLabel(RoutingPolicyLabelT&& value) {
    m_routingPolicyLabelHasBeenSet = true;
    m_routingPolicyLabel = std::forward<RoutingPolicyLabelT>(value);
  }
  template <typename RoutingPolicyLabelT = Aws::String>
  CreateTransitGatewayRouteTableAttachmentRequest& WithRoutingPolicyLabel(RoutingPolicyLabelT&& value) {
    SetRoutingPolicyLabel(std::forward<RoutingPolicyLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of key-value tags associated with the request.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateTransitGatewayRouteTableAttachmentRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateTransitGatewayRouteTableAttachmentRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client token associated with the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateTransitGatewayRouteTableAttachmentRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_peeringId;

  Aws::String m_transitGatewayRouteTableArn;

  Aws::String m_routingPolicyLabel;

  Aws::Vector<Tag> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_peeringIdHasBeenSet = false;
  bool m_transitGatewayRouteTableArnHasBeenSet = false;
  bool m_routingPolicyLabelHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
