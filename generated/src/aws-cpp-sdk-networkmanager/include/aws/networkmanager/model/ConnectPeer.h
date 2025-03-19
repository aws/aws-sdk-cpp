/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/ConnectPeerState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/ConnectPeerConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
#include <aws/networkmanager/model/ConnectPeerError.h>
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
   * <p>Describes a core network Connect peer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectPeer">AWS
   * API Reference</a></p>
   */
  class ConnectPeer
  {
  public:
    AWS_NETWORKMANAGER_API ConnectPeer() = default;
    AWS_NETWORKMANAGER_API ConnectPeer(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectPeer& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ConnectPeer& WithCoreNetworkId(CoreNetworkIdT&& value) { SetCoreNetworkId(std::forward<CoreNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the attachment to connect.</p>
     */
    inline const Aws::String& GetConnectAttachmentId() const { return m_connectAttachmentId; }
    inline bool ConnectAttachmentIdHasBeenSet() const { return m_connectAttachmentIdHasBeenSet; }
    template<typename ConnectAttachmentIdT = Aws::String>
    void SetConnectAttachmentId(ConnectAttachmentIdT&& value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId = std::forward<ConnectAttachmentIdT>(value); }
    template<typename ConnectAttachmentIdT = Aws::String>
    ConnectPeer& WithConnectAttachmentId(ConnectAttachmentIdT&& value) { SetConnectAttachmentId(std::forward<ConnectAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline const Aws::String& GetConnectPeerId() const { return m_connectPeerId; }
    inline bool ConnectPeerIdHasBeenSet() const { return m_connectPeerIdHasBeenSet; }
    template<typename ConnectPeerIdT = Aws::String>
    void SetConnectPeerId(ConnectPeerIdT&& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = std::forward<ConnectPeerIdT>(value); }
    template<typename ConnectPeerIdT = Aws::String>
    ConnectPeer& WithConnectPeerId(ConnectPeerIdT&& value) { SetConnectPeerId(std::forward<ConnectPeerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer Regions where edges are located.</p>
     */
    inline const Aws::String& GetEdgeLocation() const { return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    template<typename EdgeLocationT = Aws::String>
    void SetEdgeLocation(EdgeLocationT&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::forward<EdgeLocationT>(value); }
    template<typename EdgeLocationT = Aws::String>
    ConnectPeer& WithEdgeLocation(EdgeLocationT&& value) { SetEdgeLocation(std::forward<EdgeLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Connect peer.</p>
     */
    inline ConnectPeerState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ConnectPeerState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ConnectPeer& WithState(ConnectPeerState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the Connect peer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ConnectPeer& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Connect peer.</p>
     */
    inline const ConnectPeerConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ConnectPeerConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ConnectPeerConfiguration>
    ConnectPeer& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value tags associated with the Connect peer.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ConnectPeer& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ConnectPeer& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    ConnectPeer& WithSubnetArn(SubnetArnT&& value) { SetSubnetArn(std::forward<SubnetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the error associated with the attachment request.</p>
     */
    inline const Aws::Vector<ConnectPeerError>& GetLastModificationErrors() const { return m_lastModificationErrors; }
    inline bool LastModificationErrorsHasBeenSet() const { return m_lastModificationErrorsHasBeenSet; }
    template<typename LastModificationErrorsT = Aws::Vector<ConnectPeerError>>
    void SetLastModificationErrors(LastModificationErrorsT&& value) { m_lastModificationErrorsHasBeenSet = true; m_lastModificationErrors = std::forward<LastModificationErrorsT>(value); }
    template<typename LastModificationErrorsT = Aws::Vector<ConnectPeerError>>
    ConnectPeer& WithLastModificationErrors(LastModificationErrorsT&& value) { SetLastModificationErrors(std::forward<LastModificationErrorsT>(value)); return *this;}
    template<typename LastModificationErrorsT = ConnectPeerError>
    ConnectPeer& AddLastModificationErrors(LastModificationErrorsT&& value) { m_lastModificationErrorsHasBeenSet = true; m_lastModificationErrors.emplace_back(std::forward<LastModificationErrorsT>(value)); return *this; }
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

    ConnectPeerState m_state{ConnectPeerState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ConnectPeerConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet = false;

    Aws::Vector<ConnectPeerError> m_lastModificationErrors;
    bool m_lastModificationErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
