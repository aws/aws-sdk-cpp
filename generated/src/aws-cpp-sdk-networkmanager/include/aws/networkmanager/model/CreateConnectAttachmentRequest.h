/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/ConnectAttachmentOptions.h>
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
  class CreateConnectAttachmentRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API CreateConnectAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnectAttachment"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of a core network where you want to create the attachment. </p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network where you want to create the attachment. </p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network where you want to create the attachment. </p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network where you want to create the attachment. </p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network where you want to create the attachment. </p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network where you want to create the attachment. </p>
     */
    inline CreateConnectAttachmentRequest& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network where you want to create the attachment. </p>
     */
    inline CreateConnectAttachmentRequest& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network where you want to create the attachment. </p>
     */
    inline CreateConnectAttachmentRequest& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


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
    inline CreateConnectAttachmentRequest& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline CreateConnectAttachmentRequest& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}

    /**
     * <p>The Region where the edge is located.</p>
     */
    inline CreateConnectAttachmentRequest& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}


    /**
     * <p>The ID of the attachment between the two connections.</p>
     */
    inline const Aws::String& GetTransportAttachmentId() const{ return m_transportAttachmentId; }

    /**
     * <p>The ID of the attachment between the two connections.</p>
     */
    inline bool TransportAttachmentIdHasBeenSet() const { return m_transportAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment between the two connections.</p>
     */
    inline void SetTransportAttachmentId(const Aws::String& value) { m_transportAttachmentIdHasBeenSet = true; m_transportAttachmentId = value; }

    /**
     * <p>The ID of the attachment between the two connections.</p>
     */
    inline void SetTransportAttachmentId(Aws::String&& value) { m_transportAttachmentIdHasBeenSet = true; m_transportAttachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment between the two connections.</p>
     */
    inline void SetTransportAttachmentId(const char* value) { m_transportAttachmentIdHasBeenSet = true; m_transportAttachmentId.assign(value); }

    /**
     * <p>The ID of the attachment between the two connections.</p>
     */
    inline CreateConnectAttachmentRequest& WithTransportAttachmentId(const Aws::String& value) { SetTransportAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment between the two connections.</p>
     */
    inline CreateConnectAttachmentRequest& WithTransportAttachmentId(Aws::String&& value) { SetTransportAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment between the two connections.</p>
     */
    inline CreateConnectAttachmentRequest& WithTransportAttachmentId(const char* value) { SetTransportAttachmentId(value); return *this;}


    /**
     * <p>Options for creating an attachment.</p>
     */
    inline const ConnectAttachmentOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Options for creating an attachment.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Options for creating an attachment.</p>
     */
    inline void SetOptions(const ConnectAttachmentOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Options for creating an attachment.</p>
     */
    inline void SetOptions(ConnectAttachmentOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Options for creating an attachment.</p>
     */
    inline CreateConnectAttachmentRequest& WithOptions(const ConnectAttachmentOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Options for creating an attachment.</p>
     */
    inline CreateConnectAttachmentRequest& WithOptions(ConnectAttachmentOptions&& value) { SetOptions(std::move(value)); return *this;}


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
    inline CreateConnectAttachmentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline CreateConnectAttachmentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline CreateConnectAttachmentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of key-value tags associated with the request.</p>
     */
    inline CreateConnectAttachmentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


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
    inline CreateConnectAttachmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateConnectAttachmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateConnectAttachmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    Aws::String m_transportAttachmentId;
    bool m_transportAttachmentIdHasBeenSet = false;

    ConnectAttachmentOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
