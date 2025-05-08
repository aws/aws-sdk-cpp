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
    AWS_SSOADMIN_API CreatePermissionSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePermissionSet"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the <a>PermissionSet</a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePermissionSetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreatePermissionSetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    CreatePermissionSetRequest& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time that the application user sessions are valid in the
     * ISO-8601 standard.</p>
     */
    inline const Aws::String& GetSessionDuration() const { return m_sessionDuration; }
    inline bool SessionDurationHasBeenSet() const { return m_sessionDurationHasBeenSet; }
    template<typename SessionDurationT = Aws::String>
    void SetSessionDuration(SessionDurationT&& value) { m_sessionDurationHasBeenSet = true; m_sessionDuration = std::forward<SessionDurationT>(value); }
    template<typename SessionDurationT = Aws::String>
    CreatePermissionSetRequest& WithSessionDuration(SessionDurationT&& value) { SetSessionDuration(std::forward<SessionDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline const Aws::String& GetRelayState() const { return m_relayState; }
    inline bool RelayStateHasBeenSet() const { return m_relayStateHasBeenSet; }
    template<typename RelayStateT = Aws::String>
    void SetRelayState(RelayStateT&& value) { m_relayStateHasBeenSet = true; m_relayState = std::forward<RelayStateT>(value); }
    template<typename RelayStateT = Aws::String>
    CreatePermissionSetRequest& WithRelayState(RelayStateT&& value) { SetRelayState(std::forward<RelayStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to attach to the new <a>PermissionSet</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreatePermissionSetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreatePermissionSetRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_sessionDuration;
    bool m_sessionDurationHasBeenSet = false;

    Aws::String m_relayState;
    bool m_relayStateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
