/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerGroup.h>
#include <aws/sms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class UpdateAppRequest : public SMSRequest
  {
  public:
    AWS_SMS_API UpdateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApp"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline UpdateAppRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline UpdateAppRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline UpdateAppRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The new name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name of the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name of the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name of the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name of the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name of the application.</p>
     */
    inline UpdateAppRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name of the application.</p>
     */
    inline UpdateAppRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name of the application.</p>
     */
    inline UpdateAppRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The new description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description of the application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description of the application.</p>
     */
    inline UpdateAppRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description of the application.</p>
     */
    inline UpdateAppRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description of the application.</p>
     */
    inline UpdateAppRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the service role in the customer's account used by Server
     * Migration Service.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the service role in the customer's account used by Server
     * Migration Service.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of the service role in the customer's account used by Server
     * Migration Service.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the service role in the customer's account used by Server
     * Migration Service.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the service role in the customer's account used by Server
     * Migration Service.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the service role in the customer's account used by Server
     * Migration Service.</p>
     */
    inline UpdateAppRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the service role in the customer's account used by Server
     * Migration Service.</p>
     */
    inline UpdateAppRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the service role in the customer's account used by Server
     * Migration Service.</p>
     */
    inline UpdateAppRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>The server groups in the application to update.</p>
     */
    inline const Aws::Vector<ServerGroup>& GetServerGroups() const{ return m_serverGroups; }

    /**
     * <p>The server groups in the application to update.</p>
     */
    inline bool ServerGroupsHasBeenSet() const { return m_serverGroupsHasBeenSet; }

    /**
     * <p>The server groups in the application to update.</p>
     */
    inline void SetServerGroups(const Aws::Vector<ServerGroup>& value) { m_serverGroupsHasBeenSet = true; m_serverGroups = value; }

    /**
     * <p>The server groups in the application to update.</p>
     */
    inline void SetServerGroups(Aws::Vector<ServerGroup>&& value) { m_serverGroupsHasBeenSet = true; m_serverGroups = std::move(value); }

    /**
     * <p>The server groups in the application to update.</p>
     */
    inline UpdateAppRequest& WithServerGroups(const Aws::Vector<ServerGroup>& value) { SetServerGroups(value); return *this;}

    /**
     * <p>The server groups in the application to update.</p>
     */
    inline UpdateAppRequest& WithServerGroups(Aws::Vector<ServerGroup>&& value) { SetServerGroups(std::move(value)); return *this;}

    /**
     * <p>The server groups in the application to update.</p>
     */
    inline UpdateAppRequest& AddServerGroups(const ServerGroup& value) { m_serverGroupsHasBeenSet = true; m_serverGroups.push_back(value); return *this; }

    /**
     * <p>The server groups in the application to update.</p>
     */
    inline UpdateAppRequest& AddServerGroups(ServerGroup&& value) { m_serverGroupsHasBeenSet = true; m_serverGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to associate with the application.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to associate with the application.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to associate with the application.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to associate with the application.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to associate with the application.</p>
     */
    inline UpdateAppRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to associate with the application.</p>
     */
    inline UpdateAppRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to associate with the application.</p>
     */
    inline UpdateAppRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to associate with the application.</p>
     */
    inline UpdateAppRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::Vector<ServerGroup> m_serverGroups;
    bool m_serverGroupsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
