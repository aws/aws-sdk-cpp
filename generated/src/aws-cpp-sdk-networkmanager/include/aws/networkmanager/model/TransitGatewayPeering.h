/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Peering.h>
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
   * <p>Describes a transit gateway peering attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TransitGatewayPeering">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPeering
  {
  public:
    AWS_NETWORKMANAGER_API TransitGatewayPeering();
    AWS_NETWORKMANAGER_API TransitGatewayPeering(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API TransitGatewayPeering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes a transit gateway peer connection.</p>
     */
    inline const Peering& GetPeering() const{ return m_peering; }

    /**
     * <p>Describes a transit gateway peer connection.</p>
     */
    inline bool PeeringHasBeenSet() const { return m_peeringHasBeenSet; }

    /**
     * <p>Describes a transit gateway peer connection.</p>
     */
    inline void SetPeering(const Peering& value) { m_peeringHasBeenSet = true; m_peering = value; }

    /**
     * <p>Describes a transit gateway peer connection.</p>
     */
    inline void SetPeering(Peering&& value) { m_peeringHasBeenSet = true; m_peering = std::move(value); }

    /**
     * <p>Describes a transit gateway peer connection.</p>
     */
    inline TransitGatewayPeering& WithPeering(const Peering& value) { SetPeering(value); return *this;}

    /**
     * <p>Describes a transit gateway peer connection.</p>
     */
    inline TransitGatewayPeering& WithPeering(Peering&& value) { SetPeering(std::move(value)); return *this;}


    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayArn() const{ return m_transitGatewayArn; }

    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline bool TransitGatewayArnHasBeenSet() const { return m_transitGatewayArnHasBeenSet; }

    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline void SetTransitGatewayArn(const Aws::String& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = value; }

    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline void SetTransitGatewayArn(Aws::String&& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = std::move(value); }

    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline void SetTransitGatewayArn(const char* value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn.assign(value); }

    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline TransitGatewayPeering& WithTransitGatewayArn(const Aws::String& value) { SetTransitGatewayArn(value); return *this;}

    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline TransitGatewayPeering& WithTransitGatewayArn(Aws::String&& value) { SetTransitGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline TransitGatewayPeering& WithTransitGatewayArn(const char* value) { SetTransitGatewayArn(value); return *this;}


    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayPeeringAttachmentId() const{ return m_transitGatewayPeeringAttachmentId; }

    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline bool TransitGatewayPeeringAttachmentIdHasBeenSet() const { return m_transitGatewayPeeringAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline void SetTransitGatewayPeeringAttachmentId(const Aws::String& value) { m_transitGatewayPeeringAttachmentIdHasBeenSet = true; m_transitGatewayPeeringAttachmentId = value; }

    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline void SetTransitGatewayPeeringAttachmentId(Aws::String&& value) { m_transitGatewayPeeringAttachmentIdHasBeenSet = true; m_transitGatewayPeeringAttachmentId = std::move(value); }

    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline void SetTransitGatewayPeeringAttachmentId(const char* value) { m_transitGatewayPeeringAttachmentIdHasBeenSet = true; m_transitGatewayPeeringAttachmentId.assign(value); }

    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline TransitGatewayPeering& WithTransitGatewayPeeringAttachmentId(const Aws::String& value) { SetTransitGatewayPeeringAttachmentId(value); return *this;}

    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline TransitGatewayPeering& WithTransitGatewayPeeringAttachmentId(Aws::String&& value) { SetTransitGatewayPeeringAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway peering attachment.</p>
     */
    inline TransitGatewayPeering& WithTransitGatewayPeeringAttachmentId(const char* value) { SetTransitGatewayPeeringAttachmentId(value); return *this;}

  private:

    Peering m_peering;
    bool m_peeringHasBeenSet = false;

    Aws::String m_transitGatewayArn;
    bool m_transitGatewayArnHasBeenSet = false;

    Aws::String m_transitGatewayPeeringAttachmentId;
    bool m_transitGatewayPeeringAttachmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
