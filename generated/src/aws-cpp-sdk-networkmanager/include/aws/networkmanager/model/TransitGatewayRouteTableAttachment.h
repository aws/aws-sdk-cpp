/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Attachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a transit gateway route table attachment.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TransitGatewayRouteTableAttachment">AWS
   * API Reference</a></p>
   */
  class TransitGatewayRouteTableAttachment
  {
  public:
    AWS_NETWORKMANAGER_API TransitGatewayRouteTableAttachment() = default;
    AWS_NETWORKMANAGER_API TransitGatewayRouteTableAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API TransitGatewayRouteTableAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Attachment& GetAttachment() const { return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    template<typename AttachmentT = Attachment>
    void SetAttachment(AttachmentT&& value) { m_attachmentHasBeenSet = true; m_attachment = std::forward<AttachmentT>(value); }
    template<typename AttachmentT = Attachment>
    TransitGatewayRouteTableAttachment& WithAttachment(AttachmentT&& value) { SetAttachment(std::forward<AttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline const Aws::String& GetPeeringId() const { return m_peeringId; }
    inline bool PeeringIdHasBeenSet() const { return m_peeringIdHasBeenSet; }
    template<typename PeeringIdT = Aws::String>
    void SetPeeringId(PeeringIdT&& value) { m_peeringIdHasBeenSet = true; m_peeringId = std::forward<PeeringIdT>(value); }
    template<typename PeeringIdT = Aws::String>
    TransitGatewayRouteTableAttachment& WithPeeringId(PeeringIdT&& value) { SetPeeringId(std::forward<PeeringIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the transit gateway attachment route table. For example,
     * <code>"TransitGatewayRouteTableArn":
     * "arn:aws:ec2:us-west-2:123456789012:transit-gateway-route-table/tgw-rtb-9876543210123456"</code>.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableArn() const { return m_transitGatewayRouteTableArn; }
    inline bool TransitGatewayRouteTableArnHasBeenSet() const { return m_transitGatewayRouteTableArnHasBeenSet; }
    template<typename TransitGatewayRouteTableArnT = Aws::String>
    void SetTransitGatewayRouteTableArn(TransitGatewayRouteTableArnT&& value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn = std::forward<TransitGatewayRouteTableArnT>(value); }
    template<typename TransitGatewayRouteTableArnT = Aws::String>
    TransitGatewayRouteTableAttachment& WithTransitGatewayRouteTableArn(TransitGatewayRouteTableArnT&& value) { SetTransitGatewayRouteTableArn(std::forward<TransitGatewayRouteTableArnT>(value)); return *this;}
    ///@}
  private:

    Attachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::String m_peeringId;
    bool m_peeringIdHasBeenSet = false;

    Aws::String m_transitGatewayRouteTableArn;
    bool m_transitGatewayRouteTableArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
