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
  class CreateTransitGatewayRouteTableAttachmentRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API CreateTransitGatewayRouteTableAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayRouteTableAttachment"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the peer for the </p>
     */
    inline const Aws::String& GetPeeringId() const{ return m_peeringId; }

    /**
     * <p>The ID of the peer for the </p>
     */
    inline bool PeeringIdHasBeenSet() const { return m_peeringIdHasBeenSet; }

    /**
     * <p>The ID of the peer for the </p>
     */
    inline void SetPeeringId(const Aws::String& value) { m_peeringIdHasBeenSet = true; m_peeringId = value; }

    /**
     * <p>The ID of the peer for the </p>
     */
    inline void SetPeeringId(Aws::String&& value) { m_peeringIdHasBeenSet = true; m_peeringId = std::move(value); }

    /**
     * <p>The ID of the peer for the </p>
     */
    inline void SetPeeringId(const char* value) { m_peeringIdHasBeenSet = true; m_peeringId.assign(value); }

    /**
     * <p>The ID of the peer for the </p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithPeeringId(const Aws::String& value) { SetPeeringId(value); return *this;}

    /**
     * <p>The ID of the peer for the </p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithPeeringId(Aws::String&& value) { SetPeeringId(std::move(value)); return *this;}

    /**
     * <p>The ID of the peer for the </p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithPeeringId(const char* value) { SetPeeringId(value); return *this;}


    /**
     * <p>The ARN of the transit gateway route table for the attachment request.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableArn() const{ return m_transitGatewayRouteTableArn; }

    /**
     * <p>The ARN of the transit gateway route table for the attachment request.</p>
     */
    inline bool TransitGatewayRouteTableArnHasBeenSet() const { return m_transitGatewayRouteTableArnHasBeenSet; }

    /**
     * <p>The ARN of the transit gateway route table for the attachment request.</p>
     */
    inline void SetTransitGatewayRouteTableArn(const Aws::String& value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn = value; }

    /**
     * <p>The ARN of the transit gateway route table for the attachment request.</p>
     */
    inline void SetTransitGatewayRouteTableArn(Aws::String&& value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn = std::move(value); }

    /**
     * <p>The ARN of the transit gateway route table for the attachment request.</p>
     */
    inline void SetTransitGatewayRouteTableArn(const char* value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn.assign(value); }

    /**
     * <p>The ARN of the transit gateway route table for the attachment request.</p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithTransitGatewayRouteTableArn(const Aws::String& value) { SetTransitGatewayRouteTableArn(value); return *this;}

    /**
     * <p>The ARN of the transit gateway route table for the attachment request.</p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithTransitGatewayRouteTableArn(Aws::String&& value) { SetTransitGatewayRouteTableArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the transit gateway route table for the attachment request.</p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithTransitGatewayRouteTableArn(const char* value) { SetTransitGatewayRouteTableArn(value); return *this;}


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
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


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
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateTransitGatewayRouteTableAttachmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_peeringId;
    bool m_peeringIdHasBeenSet = false;

    Aws::String m_transitGatewayRouteTableArn;
    bool m_transitGatewayRouteTableArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
