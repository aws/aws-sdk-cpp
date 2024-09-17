/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso-admin/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class CreatePermissionSetRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API CreatePermissionSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePermissionSet"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreatePermissionSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreatePermissionSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreatePermissionSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline CreatePermissionSetRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline CreatePermissionSetRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline CreatePermissionSetRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <a>PermissionSet</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreatePermissionSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePermissionSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePermissionSetRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline const Aws::String& GetRelayState() const{ return m_relayState; }
    inline bool RelayStateHasBeenSet() const { return m_relayStateHasBeenSet; }
    inline void SetRelayState(const Aws::String& value) { m_relayStateHasBeenSet = true; m_relayState = value; }
    inline void SetRelayState(Aws::String&& value) { m_relayStateHasBeenSet = true; m_relayState = std::move(value); }
    inline void SetRelayState(const char* value) { m_relayStateHasBeenSet = true; m_relayState.assign(value); }
    inline CreatePermissionSetRequest& WithRelayState(const Aws::String& value) { SetRelayState(value); return *this;}
    inline CreatePermissionSetRequest& WithRelayState(Aws::String&& value) { SetRelayState(std::move(value)); return *this;}
    inline CreatePermissionSetRequest& WithRelayState(const char* value) { SetRelayState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time that the application user sessions are valid in the
     * ISO-8601 standard.</p>
     */
    inline const Aws::String& GetSessionDuration() const{ return m_sessionDuration; }
    inline bool SessionDurationHasBeenSet() const { return m_sessionDurationHasBeenSet; }
    inline void SetSessionDuration(const Aws::String& value) { m_sessionDurationHasBeenSet = true; m_sessionDuration = value; }
    inline void SetSessionDuration(Aws::String&& value) { m_sessionDurationHasBeenSet = true; m_sessionDuration = std::move(value); }
    inline void SetSessionDuration(const char* value) { m_sessionDurationHasBeenSet = true; m_sessionDuration.assign(value); }
    inline CreatePermissionSetRequest& WithSessionDuration(const Aws::String& value) { SetSessionDuration(value); return *this;}
    inline CreatePermissionSetRequest& WithSessionDuration(Aws::String&& value) { SetSessionDuration(std::move(value)); return *this;}
    inline CreatePermissionSetRequest& WithSessionDuration(const char* value) { SetSessionDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to attach to the new <a>PermissionSet</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreatePermissionSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreatePermissionSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePermissionSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreatePermissionSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_relayState;
    bool m_relayStateHasBeenSet = false;

    Aws::String m_sessionDuration;
    bool m_sessionDurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
