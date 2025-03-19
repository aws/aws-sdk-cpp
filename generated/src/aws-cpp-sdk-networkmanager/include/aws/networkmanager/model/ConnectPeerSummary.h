/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/ConnectPeerState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
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
   * <p>Summary description of a Connect peer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectPeerSummary">AWS
   * API Reference</a></p>
   */
  class ConnectPeerSummary
  {
  public:
    AWS_NETWORKMANAGER_API ConnectPeerSummary() = default;
    AWS_NETWORKMANAGER_API ConnectPeerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectPeerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    template<typename CoreNetworkIdT = Aws::String>
    void SetCoreNetworkId(CoreNetworkIdT&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::forward<CoreNetworkIdT>(value); }
    template<typename CoreNetworkIdT = Aws::String>
    ConnectPeerSummary& WithCoreNetworkId(CoreNetworkIdT&& value) { SetCoreNetworkId(std::forward<CoreNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a Connect peer attachment.</p>
     */
    inline const Aws::String& GetConnectAttachmentId() const { return m_connectAttachmentId; }
    inline bool ConnectAttachmentIdHasBeenSet() const { return m_connectAttachmentIdHasBeenSet; }
    template<typename ConnectAttachmentIdT = Aws::String>
    void SetConnectAttachmentId(ConnectAttachmentIdT&& value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId = std::forward<ConnectAttachmentIdT>(value); }
    template<typename ConnectAttachmentIdT = Aws::String>
    ConnectPeerSummary& WithConnectAttachmentId(ConnectAttachmentIdT&& value) { SetConnectAttachmentId(std::forward<ConnectAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a Connect peer.</p>
     */
    inline const Aws::String& GetConnectPeerId() const { return m_connectPeerId; }
    inline bool ConnectPeerIdHasBeenSet() const { return m_connectPeerIdHasBeenSet; }
    template<typename ConnectPeerIdT = Aws::String>
    void SetConnectPeerId(ConnectPeerIdT&& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = std::forward<ConnectPeerIdT>(value); }
    template<typename ConnectPeerIdT = Aws::String>
    ConnectPeerSummary& WithConnectPeerId(ConnectPeerIdT&& value) { SetConnectPeerId(std::forward<ConnectPeerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the edge is located.</p>
     */
    inline const Aws::String& GetEdgeLocation() const { return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    template<typename EdgeLocationT = Aws::String>
    void SetEdgeLocation(EdgeLocationT&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::forward<EdgeLocationT>(value); }
    template<typename EdgeLocationT = Aws::String>
    ConnectPeerSummary& WithEdgeLocation(EdgeLocationT&& value) { SetEdgeLocation(std::forward<EdgeLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a Connect peer.</p>
     */
    inline ConnectPeerState GetConnectPeerState() const { return m_connectPeerState; }
    inline bool ConnectPeerStateHasBeenSet() const { return m_connectPeerStateHasBeenSet; }
    inline void SetConnectPeerState(ConnectPeerState value) { m_connectPeerStateHasBeenSet = true; m_connectPeerState = value; }
    inline ConnectPeerSummary& WithConnectPeerState(ConnectPeerState value) { SetConnectPeerState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when a Connect peer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ConnectPeerSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value tags associated with the Connect peer summary.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ConnectPeerSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ConnectPeerSummary& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnet ARN for the Connect peer summary.</p>
     */
    inline const Aws::String& GetSubnetArn() const { return m_subnetArn; }
    inline bool SubnetArnHasBeenSet() const { return m_subnetArnHasBeenSet; }
    template<typename SubnetArnT = Aws::String>
    void SetSubnetArn(SubnetArnT&& value) { m_subnetArnHasBeenSet = true; m_subnetArn = std::forward<SubnetArnT>(value); }
    template<typename SubnetArnT = Aws::String>
    ConnectPeerSummary& WithSubnetArn(SubnetArnT&& value) { SetSubnetArn(std::forward<SubnetArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_connectAttachmentId;
    bool m_connectAttachmentIdHasBeenSet = false;

    Aws::String m_connectPeerId;
    bool m_connectPeerIdHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    ConnectPeerState m_connectPeerState{ConnectPeerState::NOT_SET};
    bool m_connectPeerStateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
