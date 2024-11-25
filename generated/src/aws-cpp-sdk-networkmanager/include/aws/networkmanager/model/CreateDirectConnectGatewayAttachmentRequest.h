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
  class CreateDirectConnectGatewayAttachmentRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API CreateDirectConnectGatewayAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDirectConnectGatewayAttachment"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Cloud WAN core network that the Direct Connect gateway
     * attachment should be attached to.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }
    inline CreateDirectConnectGatewayAttachmentRequest& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}
    inline CreateDirectConnectGatewayAttachmentRequest& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}
    inline CreateDirectConnectGatewayAttachmentRequest& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Direct Connect gateway attachment.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayArn() const{ return m_directConnectGatewayArn; }
    inline bool DirectConnectGatewayArnHasBeenSet() const { return m_directConnectGatewayArnHasBeenSet; }
    inline void SetDirectConnectGatewayArn(const Aws::String& value) { m_directConnectGatewayArnHasBeenSet = true; m_directConnectGatewayArn = value; }
    inline void SetDirectConnectGatewayArn(Aws::String&& value) { m_directConnectGatewayArnHasBeenSet = true; m_directConnectGatewayArn = std::move(value); }
    inline void SetDirectConnectGatewayArn(const char* value) { m_directConnectGatewayArnHasBeenSet = true; m_directConnectGatewayArn.assign(value); }
    inline CreateDirectConnectGatewayAttachmentRequest& WithDirectConnectGatewayArn(const Aws::String& value) { SetDirectConnectGatewayArn(value); return *this;}
    inline CreateDirectConnectGatewayAttachmentRequest& WithDirectConnectGatewayArn(Aws::String&& value) { SetDirectConnectGatewayArn(std::move(value)); return *this;}
    inline CreateDirectConnectGatewayAttachmentRequest& WithDirectConnectGatewayArn(const char* value) { SetDirectConnectGatewayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more core network edge locations that the Direct Connect gateway
     * attachment is associated with. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const{ return m_edgeLocations; }
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
    inline void SetEdgeLocations(const Aws::Vector<Aws::String>& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = value; }
    inline void SetEdgeLocations(Aws::Vector<Aws::String>&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::move(value); }
    inline CreateDirectConnectGatewayAttachmentRequest& WithEdgeLocations(const Aws::Vector<Aws::String>& value) { SetEdgeLocations(value); return *this;}
    inline CreateDirectConnectGatewayAttachmentRequest& WithEdgeLocations(Aws::Vector<Aws::String>&& value) { SetEdgeLocations(std::move(value)); return *this;}
    inline CreateDirectConnectGatewayAttachmentRequest& AddEdgeLocations(const Aws::String& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }
    inline CreateDirectConnectGatewayAttachmentRequest& AddEdgeLocations(Aws::String&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(std::move(value)); return *this; }
    inline CreateDirectConnectGatewayAttachmentRequest& AddEdgeLocations(const char* value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key value tags to apply to the Direct Connect gateway attachment during
     * creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDirectConnectGatewayAttachmentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDirectConnectGatewayAttachmentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDirectConnectGatewayAttachmentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDirectConnectGatewayAttachmentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>client token</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDirectConnectGatewayAttachmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDirectConnectGatewayAttachmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDirectConnectGatewayAttachmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_directConnectGatewayArn;
    bool m_directConnectGatewayArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLocations;
    bool m_edgeLocationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
