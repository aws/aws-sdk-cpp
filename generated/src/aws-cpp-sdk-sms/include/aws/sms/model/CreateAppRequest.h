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
  class CreateAppRequest : public SMSRequest
  {
  public:
    AWS_SMS_API CreateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApp"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the new application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new application.</p>
     */
    inline CreateAppRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new application.</p>
     */
    inline CreateAppRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new application.</p>
     */
    inline CreateAppRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the new application</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the new application</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the new application</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the new application</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the new application</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the new application</p>
     */
    inline CreateAppRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the new application</p>
     */
    inline CreateAppRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the new application</p>
     */
    inline CreateAppRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the service role in the customer's account to be used by Server
     * Migration Service.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the service role in the customer's account to be used by Server
     * Migration Service.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of the service role in the customer's account to be used by Server
     * Migration Service.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the service role in the customer's account to be used by Server
     * Migration Service.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the service role in the customer's account to be used by Server
     * Migration Service.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the service role in the customer's account to be used by Server
     * Migration Service.</p>
     */
    inline CreateAppRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the service role in the customer's account to be used by Server
     * Migration Service.</p>
     */
    inline CreateAppRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the service role in the customer's account to be used by Server
     * Migration Service.</p>
     */
    inline CreateAppRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of application creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of application creation.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of application creation.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of application creation.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of application creation.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of application creation.</p>
     */
    inline CreateAppRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of application creation.</p>
     */
    inline CreateAppRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of application creation.</p>
     */
    inline CreateAppRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The server groups to include in the application.</p>
     */
    inline const Aws::Vector<ServerGroup>& GetServerGroups() const{ return m_serverGroups; }

    /**
     * <p>The server groups to include in the application.</p>
     */
    inline bool ServerGroupsHasBeenSet() const { return m_serverGroupsHasBeenSet; }

    /**
     * <p>The server groups to include in the application.</p>
     */
    inline void SetServerGroups(const Aws::Vector<ServerGroup>& value) { m_serverGroupsHasBeenSet = true; m_serverGroups = value; }

    /**
     * <p>The server groups to include in the application.</p>
     */
    inline void SetServerGroups(Aws::Vector<ServerGroup>&& value) { m_serverGroupsHasBeenSet = true; m_serverGroups = std::move(value); }

    /**
     * <p>The server groups to include in the application.</p>
     */
    inline CreateAppRequest& WithServerGroups(const Aws::Vector<ServerGroup>& value) { SetServerGroups(value); return *this;}

    /**
     * <p>The server groups to include in the application.</p>
     */
    inline CreateAppRequest& WithServerGroups(Aws::Vector<ServerGroup>&& value) { SetServerGroups(std::move(value)); return *this;}

    /**
     * <p>The server groups to include in the application.</p>
     */
    inline CreateAppRequest& AddServerGroups(const ServerGroup& value) { m_serverGroupsHasBeenSet = true; m_serverGroups.push_back(value); return *this; }

    /**
     * <p>The server groups to include in the application.</p>
     */
    inline CreateAppRequest& AddServerGroups(ServerGroup&& value) { m_serverGroupsHasBeenSet = true; m_serverGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to be associated with the application.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be associated with the application.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be associated with the application.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be associated with the application.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be associated with the application.</p>
     */
    inline CreateAppRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be associated with the application.</p>
     */
    inline CreateAppRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be associated with the application.</p>
     */
    inline CreateAppRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be associated with the application.</p>
     */
    inline CreateAppRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<ServerGroup> m_serverGroups;
    bool m_serverGroupsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
