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
    AWS_NETWORKMANAGER_API TransitGatewayRouteTableAttachment();
    AWS_NETWORKMANAGER_API TransitGatewayRouteTableAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API TransitGatewayRouteTableAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Attachment& GetAttachment() const{ return m_attachment; }

    
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    
    inline void SetAttachment(const Attachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    
    inline void SetAttachment(Attachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    
    inline TransitGatewayRouteTableAttachment& WithAttachment(const Attachment& value) { SetAttachment(value); return *this;}

    
    inline TransitGatewayRouteTableAttachment& WithAttachment(Attachment&& value) { SetAttachment(std::move(value)); return *this;}


    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline const Aws::String& GetPeeringId() const{ return m_peeringId; }

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline bool PeeringIdHasBeenSet() const { return m_peeringIdHasBeenSet; }

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline void SetPeeringId(const Aws::String& value) { m_peeringIdHasBeenSet = true; m_peeringId = value; }

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline void SetPeeringId(Aws::String&& value) { m_peeringIdHasBeenSet = true; m_peeringId = std::move(value); }

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline void SetPeeringId(const char* value) { m_peeringIdHasBeenSet = true; m_peeringId.assign(value); }

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline TransitGatewayRouteTableAttachment& WithPeeringId(const Aws::String& value) { SetPeeringId(value); return *this;}

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline TransitGatewayRouteTableAttachment& WithPeeringId(Aws::String&& value) { SetPeeringId(std::move(value)); return *this;}

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline TransitGatewayRouteTableAttachment& WithPeeringId(const char* value) { SetPeeringId(value); return *this;}


    /**
     * <p>The ARN of the transit gateway attachment route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableArn() const{ return m_transitGatewayRouteTableArn; }

    /**
     * <p>The ARN of the transit gateway attachment route table.</p>
     */
    inline bool TransitGatewayRouteTableArnHasBeenSet() const { return m_transitGatewayRouteTableArnHasBeenSet; }

    /**
     * <p>The ARN of the transit gateway attachment route table.</p>
     */
    inline void SetTransitGatewayRouteTableArn(const Aws::String& value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn = value; }

    /**
     * <p>The ARN of the transit gateway attachment route table.</p>
     */
    inline void SetTransitGatewayRouteTableArn(Aws::String&& value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn = std::move(value); }

    /**
     * <p>The ARN of the transit gateway attachment route table.</p>
     */
    inline void SetTransitGatewayRouteTableArn(const char* value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn.assign(value); }

    /**
     * <p>The ARN of the transit gateway attachment route table.</p>
     */
    inline TransitGatewayRouteTableAttachment& WithTransitGatewayRouteTableArn(const Aws::String& value) { SetTransitGatewayRouteTableArn(value); return *this;}

    /**
     * <p>The ARN of the transit gateway attachment route table.</p>
     */
    inline TransitGatewayRouteTableAttachment& WithTransitGatewayRouteTableArn(Aws::String&& value) { SetTransitGatewayRouteTableArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the transit gateway attachment route table.</p>
     */
    inline TransitGatewayRouteTableAttachment& WithTransitGatewayRouteTableArn(const char* value) { SetTransitGatewayRouteTableArn(value); return *this;}

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
