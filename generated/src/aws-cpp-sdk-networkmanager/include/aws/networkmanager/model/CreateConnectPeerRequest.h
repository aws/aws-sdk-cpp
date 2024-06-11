/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/BgpOptions.h>
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
  class CreateConnectPeerRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API CreateConnectPeerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnectPeer"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the connection attachment.</p>
     */
    inline const Aws::String& GetConnectAttachmentId() const{ return m_connectAttachmentId; }
    inline bool ConnectAttachmentIdHasBeenSet() const { return m_connectAttachmentIdHasBeenSet; }
    inline void SetConnectAttachmentId(const Aws::String& value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId = value; }
    inline void SetConnectAttachmentId(Aws::String&& value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId = std::move(value); }
    inline void SetConnectAttachmentId(const char* value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId.assign(value); }
    inline CreateConnectPeerRequest& WithConnectAttachmentId(const Aws::String& value) { SetConnectAttachmentId(value); return *this;}
    inline CreateConnectPeerRequest& WithConnectAttachmentId(Aws::String&& value) { SetConnectAttachmentId(std::move(value)); return *this;}
    inline CreateConnectPeerRequest& WithConnectAttachmentId(const char* value) { SetConnectAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Connect peer core network address. This only applies only when the protocol
     * is <code>GRE</code>.</p>
     */
    inline const Aws::String& GetCoreNetworkAddress() const{ return m_coreNetworkAddress; }
    inline bool CoreNetworkAddressHasBeenSet() const { return m_coreNetworkAddressHasBeenSet; }
    inline void SetCoreNetworkAddress(const Aws::String& value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress = value; }
    inline void SetCoreNetworkAddress(Aws::String&& value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress = std::move(value); }
    inline void SetCoreNetworkAddress(const char* value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress.assign(value); }
    inline CreateConnectPeerRequest& WithCoreNetworkAddress(const Aws::String& value) { SetCoreNetworkAddress(value); return *this;}
    inline CreateConnectPeerRequest& WithCoreNetworkAddress(Aws::String&& value) { SetCoreNetworkAddress(std::move(value)); return *this;}
    inline CreateConnectPeerRequest& WithCoreNetworkAddress(const char* value) { SetCoreNetworkAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer address.</p>
     */
    inline const Aws::String& GetPeerAddress() const{ return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    inline void SetPeerAddress(const Aws::String& value) { m_peerAddressHasBeenSet = true; m_peerAddress = value; }
    inline void SetPeerAddress(Aws::String&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::move(value); }
    inline void SetPeerAddress(const char* value) { m_peerAddressHasBeenSet = true; m_peerAddress.assign(value); }
    inline CreateConnectPeerRequest& WithPeerAddress(const Aws::String& value) { SetPeerAddress(value); return *this;}
    inline CreateConnectPeerRequest& WithPeerAddress(Aws::String&& value) { SetPeerAddress(std::move(value)); return *this;}
    inline CreateConnectPeerRequest& WithPeerAddress(const char* value) { SetPeerAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer BGP options. This only applies only when the protocol is
     * <code>GRE</code>.</p>
     */
    inline const BgpOptions& GetBgpOptions() const{ return m_bgpOptions; }
    inline bool BgpOptionsHasBeenSet() const { return m_bgpOptionsHasBeenSet; }
    inline void SetBgpOptions(const BgpOptions& value) { m_bgpOptionsHasBeenSet = true; m_bgpOptions = value; }
    inline void SetBgpOptions(BgpOptions&& value) { m_bgpOptionsHasBeenSet = true; m_bgpOptions = std::move(value); }
    inline CreateConnectPeerRequest& WithBgpOptions(const BgpOptions& value) { SetBgpOptions(value); return *this;}
    inline CreateConnectPeerRequest& WithBgpOptions(BgpOptions&& value) { SetBgpOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inside IP addresses used for BGP peering.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const{ return m_insideCidrBlocks; }
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }
    inline void SetInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = value; }
    inline void SetInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::move(value); }
    inline CreateConnectPeerRequest& WithInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { SetInsideCidrBlocks(value); return *this;}
    inline CreateConnectPeerRequest& WithInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { SetInsideCidrBlocks(std::move(value)); return *this;}
    inline CreateConnectPeerRequest& AddInsideCidrBlocks(const Aws::String& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }
    inline CreateConnectPeerRequest& AddInsideCidrBlocks(Aws::String&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(std::move(value)); return *this; }
    inline CreateConnectPeerRequest& AddInsideCidrBlocks(const char* value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with the peer request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateConnectPeerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateConnectPeerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConnectPeerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateConnectPeerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The client token associated with the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateConnectPeerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateConnectPeerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateConnectPeerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ARN for the Connect peer. This only applies only when the protocol
     * is NO_ENCAP.</p>
     */
    inline const Aws::String& GetSubnetArn() const{ return m_subnetArn; }
    inline bool SubnetArnHasBeenSet() const { return m_subnetArnHasBeenSet; }
    inline void SetSubnetArn(const Aws::String& value) { m_subnetArnHasBeenSet = true; m_subnetArn = value; }
    inline void SetSubnetArn(Aws::String&& value) { m_subnetArnHasBeenSet = true; m_subnetArn = std::move(value); }
    inline void SetSubnetArn(const char* value) { m_subnetArnHasBeenSet = true; m_subnetArn.assign(value); }
    inline CreateConnectPeerRequest& WithSubnetArn(const Aws::String& value) { SetSubnetArn(value); return *this;}
    inline CreateConnectPeerRequest& WithSubnetArn(Aws::String&& value) { SetSubnetArn(std::move(value)); return *this;}
    inline CreateConnectPeerRequest& WithSubnetArn(const char* value) { SetSubnetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_connectAttachmentId;
    bool m_connectAttachmentIdHasBeenSet = false;

    Aws::String m_coreNetworkAddress;
    bool m_coreNetworkAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    BgpOptions m_bgpOptions;
    bool m_bgpOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_insideCidrBlocks;
    bool m_insideCidrBlocksHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
