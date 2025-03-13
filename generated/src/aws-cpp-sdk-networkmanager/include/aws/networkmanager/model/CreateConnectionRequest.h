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
    AWS_NETWORKMANAGER_API CreateConnectionRequest() = default;

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
    inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    template<typename GlobalNetworkIdT = Aws::String>
    void SetGlobalNetworkId(GlobalNetworkIdT&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::forward<GlobalNetworkIdT>(value); }
    template<typename GlobalNetworkIdT = Aws::String>
    CreateConnectionRequest& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the first device in the connection.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    CreateConnectionRequest& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the second device in the connection.</p>
     */
    inline const Aws::String& GetConnectedDeviceId() const { return m_connectedDeviceId; }
    inline bool ConnectedDeviceIdHasBeenSet() const { return m_connectedDeviceIdHasBeenSet; }
    template<typename ConnectedDeviceIdT = Aws::String>
    void SetConnectedDeviceId(ConnectedDeviceIdT&& value) { m_connectedDeviceIdHasBeenSet = true; m_connectedDeviceId = std::forward<ConnectedDeviceIdT>(value); }
    template<typename ConnectedDeviceIdT = Aws::String>
    CreateConnectionRequest& WithConnectedDeviceId(ConnectedDeviceIdT&& value) { SetConnectedDeviceId(std::forward<ConnectedDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the link for the first device.</p>
     */
    inline const Aws::String& GetLinkId() const { return m_linkId; }
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
    template<typename LinkIdT = Aws::String>
    void SetLinkId(LinkIdT&& value) { m_linkIdHasBeenSet = true; m_linkId = std::forward<LinkIdT>(value); }
    template<typename LinkIdT = Aws::String>
    CreateConnectionRequest& WithLinkId(LinkIdT&& value) { SetLinkId(std::forward<LinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the link for the second device.</p>
     */
    inline const Aws::String& GetConnectedLinkId() const { return m_connectedLinkId; }
    inline bool ConnectedLinkIdHasBeenSet() const { return m_connectedLinkIdHasBeenSet; }
    template<typename ConnectedLinkIdT = Aws::String>
    void SetConnectedLinkId(ConnectedLinkIdT&& value) { m_connectedLinkIdHasBeenSet = true; m_connectedLinkId = std::forward<ConnectedLinkIdT>(value); }
    template<typename ConnectedLinkIdT = Aws::String>
    CreateConnectionRequest& WithConnectedLinkId(ConnectedLinkIdT&& value) { SetConnectedLinkId(std::forward<ConnectedLinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the connection.</p> <p>Length Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateConnectionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateConnectionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateConnectionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
