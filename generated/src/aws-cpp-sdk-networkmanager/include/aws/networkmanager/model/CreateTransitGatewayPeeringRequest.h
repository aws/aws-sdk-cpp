/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class CreateTransitGatewayPeeringRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API CreateTransitGatewayPeeringRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayPeering"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ARN of the transit gateway for the peering request.</p>
     */
    inline const Aws::String& GetTransitGatewayArn() const{ return m_transitGatewayArn; }

    /**
     * <p>The ARN of the transit gateway for the peering request.</p>
     */
    inline bool TransitGatewayArnHasBeenSet() const { return m_transitGatewayArnHasBeenSet; }

    /**
     * <p>The ARN of the transit gateway for the peering request.</p>
     */
    inline void SetTransitGatewayArn(const Aws::String& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = value; }

    /**
     * <p>The ARN of the transit gateway for the peering request.</p>
     */
    inline void SetTransitGatewayArn(Aws::String&& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = std::move(value); }

    /**
     * <p>The ARN of the transit gateway for the peering request.</p>
     */
    inline void SetTransitGatewayArn(const char* value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn.assign(value); }

    /**
     * <p>The ARN of the transit gateway for the peering request.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithTransitGatewayArn(const Aws::String& value) { SetTransitGatewayArn(value); return *this;}

    /**
     * <p>The ARN of the transit gateway for the peering request.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithTransitGatewayArn(Aws::String&& value) { SetTransitGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the transit gateway for the peering request.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithTransitGatewayArn(const char* value) { SetTransitGatewayArn(value); return *this;}


    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline CreateTransitGatewayPeeringRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline CreateTransitGatewayPeeringRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The client token associated with the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateTransitGatewayPeeringRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_transitGatewayArn;
    bool m_transitGatewayArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
