/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class CreateProfileRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API CreateProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfile"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Used to determine if a custom role session name will be accepted in a
     * temporary credential request.</p>
     */
    inline bool GetAcceptRoleSessionName() const { return m_acceptRoleSessionName; }
    inline bool AcceptRoleSessionNameHasBeenSet() const { return m_acceptRoleSessionNameHasBeenSet; }
    inline void SetAcceptRoleSessionName(bool value) { m_acceptRoleSessionNameHasBeenSet = true; m_acceptRoleSessionName = value; }
    inline CreateProfileRequest& WithAcceptRoleSessionName(bool value) { SetAcceptRoleSessionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Used to determine how long sessions vended using this profile are valid for.
     * See the <code>Expiration</code> section of the <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/userguide/authentication-create-session.html#credentials-object">CreateSession
     * API documentation</a> page for more details. In requests, if this value is not
     * provided, the default value will be 3600. </p>
     */
    inline int GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline CreateProfileRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the profile is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CreateProfileRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedPolicyArns() const { return m_managedPolicyArns; }
    inline bool ManagedPolicyArnsHasBeenSet() const { return m_managedPolicyArnsHasBeenSet; }
    template<typename ManagedPolicyArnsT = Aws::Vector<Aws::String>>
    void SetManagedPolicyArns(ManagedPolicyArnsT&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns = std::forward<ManagedPolicyArnsT>(value); }
    template<typename ManagedPolicyArnsT = Aws::Vector<Aws::String>>
    CreateProfileRequest& WithManagedPolicyArns(ManagedPolicyArnsT&& value) { SetManagedPolicyArns(std::forward<ManagedPolicyArnsT>(value)); return *this;}
    template<typename ManagedPolicyArnsT = Aws::String>
    CreateProfileRequest& AddManagedPolicyArns(ManagedPolicyArnsT&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.emplace_back(std::forward<ManagedPolicyArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateProfileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether instance properties are required in temporary credential
     * requests with this profile. </p>
     */
    inline bool GetRequireInstanceProperties() const { return m_requireInstanceProperties; }
    inline bool RequireInstancePropertiesHasBeenSet() const { return m_requireInstancePropertiesHasBeenSet; }
    inline void SetRequireInstanceProperties(bool value) { m_requireInstancePropertiesHasBeenSet = true; m_requireInstanceProperties = value; }
    inline CreateProfileRequest& WithRequireInstanceProperties(bool value) { SetRequireInstanceProperties(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IAM roles that this profile can assume in a temporary credential
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleArns() const { return m_roleArns; }
    inline bool RoleArnsHasBeenSet() const { return m_roleArnsHasBeenSet; }
    template<typename RoleArnsT = Aws::Vector<Aws::String>>
    void SetRoleArns(RoleArnsT&& value) { m_roleArnsHasBeenSet = true; m_roleArns = std::forward<RoleArnsT>(value); }
    template<typename RoleArnsT = Aws::Vector<Aws::String>>
    CreateProfileRequest& WithRoleArns(RoleArnsT&& value) { SetRoleArns(std::forward<RoleArnsT>(value)); return *this;}
    template<typename RoleArnsT = Aws::String>
    CreateProfileRequest& AddRoleArns(RoleArnsT&& value) { m_roleArnsHasBeenSet = true; m_roleArns.emplace_back(std::forward<RoleArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline const Aws::String& GetSessionPolicy() const { return m_sessionPolicy; }
    inline bool SessionPolicyHasBeenSet() const { return m_sessionPolicyHasBeenSet; }
    template<typename SessionPolicyT = Aws::String>
    void SetSessionPolicy(SessionPolicyT&& value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy = std::forward<SessionPolicyT>(value); }
    template<typename SessionPolicyT = Aws::String>
    CreateProfileRequest& WithSessionPolicy(SessionPolicyT&& value) { SetSessionPolicy(std::forward<SessionPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to attach to the profile.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateProfileRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateProfileRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    bool m_acceptRoleSessionName{false};
    bool m_acceptRoleSessionNameHasBeenSet = false;

    int m_durationSeconds{0};
    bool m_durationSecondsHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedPolicyArns;
    bool m_managedPolicyArnsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_requireInstanceProperties{false};
    bool m_requireInstancePropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_roleArns;
    bool m_roleArnsHasBeenSet = false;

    Aws::String m_sessionPolicy;
    bool m_sessionPolicyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
