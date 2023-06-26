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
  class CreateSiteToSiteVpnAttachmentRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API CreateSiteToSiteVpnAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSiteToSiteVpnAttachment"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of a core network where you're creating a site-to-site VPN
     * attachment.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network where you're creating a site-to-site VPN
     * attachment.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network where you're creating a site-to-site VPN
     * attachment.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network where you're creating a site-to-site VPN
     * attachment.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network where you're creating a site-to-site VPN
     * attachment.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network where you're creating a site-to-site VPN
     * attachment.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network where you're creating a site-to-site VPN
     * attachment.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network where you're creating a site-to-site VPN
     * attachment.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ARN identifying the VPN attachment.</p>
     */
    inline const Aws::String& GetVpnConnectionArn() const{ return m_vpnConnectionArn; }

    /**
     * <p>The ARN identifying the VPN attachment.</p>
     */
    inline bool VpnConnectionArnHasBeenSet() const { return m_vpnConnectionArnHasBeenSet; }

    /**
     * <p>The ARN identifying the VPN attachment.</p>
     */
    inline void SetVpnConnectionArn(const Aws::String& value) { m_vpnConnectionArnHasBeenSet = true; m_vpnConnectionArn = value; }

    /**
     * <p>The ARN identifying the VPN attachment.</p>
     */
    inline void SetVpnConnectionArn(Aws::String&& value) { m_vpnConnectionArnHasBeenSet = true; m_vpnConnectionArn = std::move(value); }

    /**
     * <p>The ARN identifying the VPN attachment.</p>
     */
    inline void SetVpnConnectionArn(const char* value) { m_vpnConnectionArnHasBeenSet = true; m_vpnConnectionArn.assign(value); }

    /**
     * <p>The ARN identifying the VPN attachment.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& WithVpnConnectionArn(const Aws::String& value) { SetVpnConnectionArn(value); return *this;}

    /**
     * <p>The ARN identifying the VPN attachment.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& WithVpnConnectionArn(Aws::String&& value) { SetVpnConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifying the VPN attachment.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& WithVpnConnectionArn(const char* value) { SetVpnConnectionArn(value); return *this;}


    /**
     * <p>The tags associated with the request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the request.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the request.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the request.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the request.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the request.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the request.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the request.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


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
    inline CreateSiteToSiteVpnAttachmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateSiteToSiteVpnAttachmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_vpnConnectionArn;
    bool m_vpnConnectionArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
