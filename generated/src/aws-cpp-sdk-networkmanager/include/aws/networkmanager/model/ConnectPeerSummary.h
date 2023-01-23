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
    AWS_NETWORKMANAGER_API ConnectPeerSummary();
    AWS_NETWORKMANAGER_API ConnectPeerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectPeerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ConnectPeerSummary& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline ConnectPeerSummary& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline ConnectPeerSummary& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ID of a Connect peer attachment.</p>
     */
    inline const Aws::String& GetConnectAttachmentId() const{ return m_connectAttachmentId; }

    /**
     * <p>The ID of a Connect peer attachment.</p>
     */
    inline bool ConnectAttachmentIdHasBeenSet() const { return m_connectAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of a Connect peer attachment.</p>
     */
    inline void SetConnectAttachmentId(const Aws::String& value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId = value; }

    /**
     * <p>The ID of a Connect peer attachment.</p>
     */
    inline void SetConnectAttachmentId(Aws::String&& value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId = std::move(value); }

    /**
     * <p>The ID of a Connect peer attachment.</p>
     */
    inline void SetConnectAttachmentId(const char* value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId.assign(value); }

    /**
     * <p>The ID of a Connect peer attachment.</p>
     */
    inline ConnectPeerSummary& WithConnectAttachmentId(const Aws::String& value) { SetConnectAttachmentId(value); return *this;}

    /**
     * <p>The ID of a Connect peer attachment.</p>
     */
    inline ConnectPeerSummary& WithConnectAttachmentId(Aws::String&& value) { SetConnectAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of a Connect peer attachment.</p>
     */
    inline ConnectPeerSummary& WithConnectAttachmentId(const char* value) { SetConnectAttachmentId(value); return *this;}


    /**
     * <p>The ID of a Connect peer.</p>
     */
    inline const Aws::String& GetConnectPeerId() const{ return m_connectPeerId; }

    /**
     * <p>The ID of a Connect peer.</p>
     */
    inline bool ConnectPeerIdHasBeenSet() const { return m_connectPeerIdHasBeenSet; }

    /**
     * <p>The ID of a Connect peer.</p>
     */
    inline void SetConnectPeerId(const Aws::String& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = value; }

    /**
     * <p>The ID of a Connect peer.</p>
     */
    inline void SetConnectPeerId(Aws::String&& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = std::move(value); }

    /**
     * <p>The ID of a Connect peer.</p>
     */
    inline void SetConnectPeerId(const char* value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId.assign(value); }

    /**
     * <p>The ID of a Connect peer.</p>
     */
    inline ConnectPeerSummary& WithConnectPeerId(const Aws::String& value) { SetConnectPeerId(value); return *this;}

    /**
     * <p>The ID of a Connect peer.</p>
     */
    inline ConnectPeerSummary& WithConnectPeerId(Aws::String&& value) { SetConnectPeerId(std::move(value)); return *this;}

    /**
     * <p>The ID of a Connect peer.</p>
     */
    inline ConnectPeerSummary& WithConnectPeerId(const char* value) { SetConnectPeerId(value); return *this;}


    /**
     * <p>The Region where the edge is located.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline ConnectPeerSummary& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline ConnectPeerSummary& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline ConnectPeerSummary& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}


    /**
     * <p>The state of a Connect peer.</p>
     */
    inline const ConnectPeerState& GetConnectPeerState() const{ return m_connectPeerState; }

    /**
     * <p>The state of a Connect peer.</p>
     */
    inline bool ConnectPeerStateHasBeenSet() const { return m_connectPeerStateHasBeenSet; }

    /**
     * <p>The state of a Connect peer.</p>
     */
    inline void SetConnectPeerState(const ConnectPeerState& value) { m_connectPeerStateHasBeenSet = true; m_connectPeerState = value; }

    /**
     * <p>The state of a Connect peer.</p>
     */
    inline void SetConnectPeerState(ConnectPeerState&& value) { m_connectPeerStateHasBeenSet = true; m_connectPeerState = std::move(value); }

    /**
     * <p>The state of a Connect peer.</p>
     */
    inline ConnectPeerSummary& WithConnectPeerState(const ConnectPeerState& value) { SetConnectPeerState(value); return *this;}

    /**
     * <p>The state of a Connect peer.</p>
     */
    inline ConnectPeerSummary& WithConnectPeerState(ConnectPeerState&& value) { SetConnectPeerState(std::move(value)); return *this;}


    /**
     * <p>The timestamp when a Connect peer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when a Connect peer was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when a Connect peer was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when a Connect peer was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when a Connect peer was created.</p>
     */
    inline ConnectPeerSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when a Connect peer was created.</p>
     */
    inline ConnectPeerSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The list of key-value tags associated with the Connect peer summary.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value tags associated with the Connect peer summary.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value tags associated with the Connect peer summary.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value tags associated with the Connect peer summary.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value tags associated with the Connect peer summary.</p>
     */
    inline ConnectPeerSummary& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value tags associated with the Connect peer summary.</p>
     */
    inline ConnectPeerSummary& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value tags associated with the Connect peer summary.</p>
     */
    inline ConnectPeerSummary& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of key-value tags associated with the Connect peer summary.</p>
     */
    inline ConnectPeerSummary& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_connectAttachmentId;
    bool m_connectAttachmentIdHasBeenSet = false;

    Aws::String m_connectPeerId;
    bool m_connectPeerIdHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    ConnectPeerState m_connectPeerState;
    bool m_connectPeerStateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
