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

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class CreateConnectionRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API CreateConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnection"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }
    inline CreateConnectionRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}
    inline CreateConnectionRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}
    inline CreateConnectionRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the first device in the connection.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline CreateConnectionRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline CreateConnectionRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline CreateConnectionRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the second device in the connection.</p>
     */
    inline const Aws::String& GetConnectedDeviceId() const{ return m_connectedDeviceId; }
    inline bool ConnectedDeviceIdHasBeenSet() const { return m_connectedDeviceIdHasBeenSet; }
    inline void SetConnectedDeviceId(const Aws::String& value) { m_connectedDeviceIdHasBeenSet = true; m_connectedDeviceId = value; }
    inline void SetConnectedDeviceId(Aws::String&& value) { m_connectedDeviceIdHasBeenSet = true; m_connectedDeviceId = std::move(value); }
    inline void SetConnectedDeviceId(const char* value) { m_connectedDeviceIdHasBeenSet = true; m_connectedDeviceId.assign(value); }
    inline CreateConnectionRequest& WithConnectedDeviceId(const Aws::String& value) { SetConnectedDeviceId(value); return *this;}
    inline CreateConnectionRequest& WithConnectedDeviceId(Aws::String&& value) { SetConnectedDeviceId(std::move(value)); return *this;}
    inline CreateConnectionRequest& WithConnectedDeviceId(const char* value) { SetConnectedDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the link for the first device.</p>
     */
    inline const Aws::String& GetLinkId() const{ return m_linkId; }
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
    inline void SetLinkId(const Aws::String& value) { m_linkIdHasBeenSet = true; m_linkId = value; }
    inline void SetLinkId(Aws::String&& value) { m_linkIdHasBeenSet = true; m_linkId = std::move(value); }
    inline void SetLinkId(const char* value) { m_linkIdHasBeenSet = true; m_linkId.assign(value); }
    inline CreateConnectionRequest& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}
    inline CreateConnectionRequest& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}
    inline CreateConnectionRequest& WithLinkId(const char* value) { SetLinkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the link for the second device.</p>
     */
    inline const Aws::String& GetConnectedLinkId() const{ return m_connectedLinkId; }
    inline bool ConnectedLinkIdHasBeenSet() const { return m_connectedLinkIdHasBeenSet; }
    inline void SetConnectedLinkId(const Aws::String& value) { m_connectedLinkIdHasBeenSet = true; m_connectedLinkId = value; }
    inline void SetConnectedLinkId(Aws::String&& value) { m_connectedLinkIdHasBeenSet = true; m_connectedLinkId = std::move(value); }
    inline void SetConnectedLinkId(const char* value) { m_connectedLinkIdHasBeenSet = true; m_connectedLinkId.assign(value); }
    inline CreateConnectionRequest& WithConnectedLinkId(const Aws::String& value) { SetConnectedLinkId(value); return *this;}
    inline CreateConnectionRequest& WithConnectedLinkId(Aws::String&& value) { SetConnectedLinkId(std::move(value)); return *this;}
    inline CreateConnectionRequest& WithConnectedLinkId(const char* value) { SetConnectedLinkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the connection.</p> <p>Length Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateConnectionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateConnectionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateConnectionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateConnectionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateConnectionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConnectionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateConnectionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_connectedDeviceId;
    bool m_connectedDeviceIdHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    Aws::String m_connectedLinkId;
    bool m_connectedLinkIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
