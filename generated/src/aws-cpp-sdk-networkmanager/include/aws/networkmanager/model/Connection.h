/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/ConnectionState.h>
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
   * <p>Describes a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Connection">AWS
   * API Reference</a></p>
   */
  class Connection
  {
  public:
    AWS_NETWORKMANAGER_API Connection();
    AWS_NETWORKMANAGER_API Connection(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline Connection& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline Connection& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline Connection& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline Connection& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline Connection& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline Connection& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline Connection& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline Connection& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline Connection& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The ID of the first device in the connection.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The ID of the first device in the connection.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The ID of the first device in the connection.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The ID of the first device in the connection.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The ID of the first device in the connection.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The ID of the first device in the connection.</p>
     */
    inline Connection& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the first device in the connection.</p>
     */
    inline Connection& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the first device in the connection.</p>
     */
    inline Connection& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The ID of the second device in the connection.</p>
     */
    inline const Aws::String& GetConnectedDeviceId() const{ return m_connectedDeviceId; }

    /**
     * <p>The ID of the second device in the connection.</p>
     */
    inline bool ConnectedDeviceIdHasBeenSet() const { return m_connectedDeviceIdHasBeenSet; }

    /**
     * <p>The ID of the second device in the connection.</p>
     */
    inline void SetConnectedDeviceId(const Aws::String& value) { m_connectedDeviceIdHasBeenSet = true; m_connectedDeviceId = value; }

    /**
     * <p>The ID of the second device in the connection.</p>
     */
    inline void SetConnectedDeviceId(Aws::String&& value) { m_connectedDeviceIdHasBeenSet = true; m_connectedDeviceId = std::move(value); }

    /**
     * <p>The ID of the second device in the connection.</p>
     */
    inline void SetConnectedDeviceId(const char* value) { m_connectedDeviceIdHasBeenSet = true; m_connectedDeviceId.assign(value); }

    /**
     * <p>The ID of the second device in the connection.</p>
     */
    inline Connection& WithConnectedDeviceId(const Aws::String& value) { SetConnectedDeviceId(value); return *this;}

    /**
     * <p>The ID of the second device in the connection.</p>
     */
    inline Connection& WithConnectedDeviceId(Aws::String&& value) { SetConnectedDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the second device in the connection.</p>
     */
    inline Connection& WithConnectedDeviceId(const char* value) { SetConnectedDeviceId(value); return *this;}


    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline const Aws::String& GetLinkId() const{ return m_linkId; }

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline void SetLinkId(const Aws::String& value) { m_linkIdHasBeenSet = true; m_linkId = value; }

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline void SetLinkId(Aws::String&& value) { m_linkIdHasBeenSet = true; m_linkId = std::move(value); }

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline void SetLinkId(const char* value) { m_linkIdHasBeenSet = true; m_linkId.assign(value); }

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline Connection& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline Connection& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline Connection& WithLinkId(const char* value) { SetLinkId(value); return *this;}


    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline const Aws::String& GetConnectedLinkId() const{ return m_connectedLinkId; }

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline bool ConnectedLinkIdHasBeenSet() const { return m_connectedLinkIdHasBeenSet; }

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline void SetConnectedLinkId(const Aws::String& value) { m_connectedLinkIdHasBeenSet = true; m_connectedLinkId = value; }

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline void SetConnectedLinkId(Aws::String&& value) { m_connectedLinkIdHasBeenSet = true; m_connectedLinkId = std::move(value); }

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline void SetConnectedLinkId(const char* value) { m_connectedLinkIdHasBeenSet = true; m_connectedLinkId.assign(value); }

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline Connection& WithConnectedLinkId(const Aws::String& value) { SetConnectedLinkId(value); return *this;}

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline Connection& WithConnectedLinkId(Aws::String&& value) { SetConnectedLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline Connection& WithConnectedLinkId(const char* value) { SetConnectedLinkId(value); return *this;}


    /**
     * <p>The description of the connection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the connection.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the connection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the connection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the connection.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the connection.</p>
     */
    inline Connection& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the connection.</p>
     */
    inline Connection& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the connection.</p>
     */
    inline Connection& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time that the connection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the connection was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the connection was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the connection was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the connection was created.</p>
     */
    inline Connection& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the connection was created.</p>
     */
    inline Connection& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The state of the connection.</p>
     */
    inline const ConnectionState& GetState() const{ return m_state; }

    /**
     * <p>The state of the connection.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the connection.</p>
     */
    inline void SetState(const ConnectionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the connection.</p>
     */
    inline void SetState(ConnectionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the connection.</p>
     */
    inline Connection& WithState(const ConnectionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the connection.</p>
     */
    inline Connection& WithState(ConnectionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags for the connection.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the connection.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the connection.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the connection.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the connection.</p>
     */
    inline Connection& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the connection.</p>
     */
    inline Connection& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the connection.</p>
     */
    inline Connection& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the connection.</p>
     */
    inline Connection& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ConnectionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
