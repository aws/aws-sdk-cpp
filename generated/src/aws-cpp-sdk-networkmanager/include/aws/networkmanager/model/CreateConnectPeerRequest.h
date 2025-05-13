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
    AWS_NETWORKMANAGER_API CreateConnectPeerRequest() = default;

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
    inline const Aws::String& GetConnectAttachmentId() const { return m_connectAttachmentId; }
    inline bool ConnectAttachmentIdHasBeenSet() const { return m_connectAttachmentIdHasBeenSet; }
    template<typename ConnectAttachmentIdT = Aws::String>
    void SetConnectAttachmentId(ConnectAttachmentIdT&& value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId = std::forward<ConnectAttachmentIdT>(value); }
    template<typename ConnectAttachmentIdT = Aws::String>
    CreateConnectPeerRequest& WithConnectAttachmentId(ConnectAttachmentIdT&& value) { SetConnectAttachmentId(std::forward<ConnectAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Connect peer core network address. This only applies only when the protocol
     * is <code>GRE</code>.</p>
     */
    inline const Aws::String& GetCoreNetworkAddress() const { return m_coreNetworkAddress; }
    inline bool CoreNetworkAddressHasBeenSet() const { return m_coreNetworkAddressHasBeenSet; }
    template<typename CoreNetworkAddressT = Aws::String>
    void SetCoreNetworkAddress(CoreNetworkAddressT&& value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress = std::forward<CoreNetworkAddressT>(value); }
    template<typename CoreNetworkAddressT = Aws::String>
    CreateConnectPeerRequest& WithCoreNetworkAddress(CoreNetworkAddressT&& value) { SetCoreNetworkAddress(std::forward<CoreNetworkAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer address.</p>
     */
    inline const Aws::String& GetPeerAddress() const { return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    template<typename PeerAddressT = Aws::String>
    void SetPeerAddress(PeerAddressT&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::forward<PeerAddressT>(value); }
    template<typename PeerAddressT = Aws::String>
    CreateConnectPeerRequest& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer BGP options. This only applies only when the protocol is
     * <code>GRE</code>.</p>
     */
    inline const BgpOptions& GetBgpOptions() const { return m_bgpOptions; }
    inline bool BgpOptionsHasBeenSet() const { return m_bgpOptionsHasBeenSet; }
    template<typename BgpOptionsT = BgpOptions>
    void SetBgpOptions(BgpOptionsT&& value) { m_bgpOptionsHasBeenSet = true; m_bgpOptions = std::forward<BgpOptionsT>(value); }
    template<typename BgpOptionsT = BgpOptions>
    CreateConnectPeerRequest& WithBgpOptions(BgpOptionsT&& value) { SetBgpOptions(std::forward<BgpOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inside IP addresses used for BGP peering.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const { return m_insideCidrBlocks; }
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }
    template<typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
    void SetInsideCidrBlocks(InsideCidrBlocksT&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::forward<InsideCidrBlocksT>(value); }
    template<typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
    CreateConnectPeerRequest& WithInsideCidrBlocks(InsideCidrBlocksT&& value) { SetInsideCidrBlocks(std::forward<InsideCidrBlocksT>(value)); return *this;}
    template<typename InsideCidrBlocksT = Aws::String>
    CreateConnectPeerRequest& AddInsideCidrBlocks(InsideCidrBlocksT&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.emplace_back(std::forward<InsideCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with the peer request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateConnectPeerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateConnectPeerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The client token associated with the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateConnectPeerRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ARN for the Connect peer. This only applies only when the protocol
     * is NO_ENCAP.</p>
     */
    inline const Aws::String& GetSubnetArn() const { return m_subnetArn; }
    inline bool SubnetArnHasBeenSet() const { return m_subnetArnHasBeenSet; }
    template<typename SubnetArnT = Aws::String>
    void SetSubnetArn(SubnetArnT&& value) { m_subnetArnHasBeenSet = true; m_subnetArn = std::forward<SubnetArnT>(value); }
    template<typename SubnetArnT = Aws::String>
    CreateConnectPeerRequest& WithSubnetArn(SubnetArnT&& value) { SetSubnetArn(std::forward<SubnetArnT>(value)); return *this;}
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
