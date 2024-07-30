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
    AWS_ROLESANYWHERE_API CreateProfileRequest();

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
    inline bool GetAcceptRoleSessionName() const{ return m_acceptRoleSessionName; }
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
    inline int GetDurationSeconds() const{ return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline CreateProfileRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the profile is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CreateProfileRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedPolicyArns() const{ return m_managedPolicyArns; }
    inline bool ManagedPolicyArnsHasBeenSet() const { return m_managedPolicyArnsHasBeenSet; }
    inline void SetManagedPolicyArns(const Aws::Vector<Aws::String>& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns = value; }
    inline void SetManagedPolicyArns(Aws::Vector<Aws::String>&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns = std::move(value); }
    inline CreateProfileRequest& WithManagedPolicyArns(const Aws::Vector<Aws::String>& value) { SetManagedPolicyArns(value); return *this;}
    inline CreateProfileRequest& WithManagedPolicyArns(Aws::Vector<Aws::String>&& value) { SetManagedPolicyArns(std::move(value)); return *this;}
    inline CreateProfileRequest& AddManagedPolicyArns(const Aws::String& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.push_back(value); return *this; }
    inline CreateProfileRequest& AddManagedPolicyArns(Aws::String&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.push_back(std::move(value)); return *this; }
    inline CreateProfileRequest& AddManagedPolicyArns(const char* value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether instance properties are required in temporary credential
     * requests with this profile. </p>
     */
    inline bool GetRequireInstanceProperties() const{ return m_requireInstanceProperties; }
    inline bool RequireInstancePropertiesHasBeenSet() const { return m_requireInstancePropertiesHasBeenSet; }
    inline void SetRequireInstanceProperties(bool value) { m_requireInstancePropertiesHasBeenSet = true; m_requireInstanceProperties = value; }
    inline CreateProfileRequest& WithRequireInstanceProperties(bool value) { SetRequireInstanceProperties(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IAM roles that this profile can assume in a temporary credential
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleArns() const{ return m_roleArns; }
    inline bool RoleArnsHasBeenSet() const { return m_roleArnsHasBeenSet; }
    inline void SetRoleArns(const Aws::Vector<Aws::String>& value) { m_roleArnsHasBeenSet = true; m_roleArns = value; }
    inline void SetRoleArns(Aws::Vector<Aws::String>&& value) { m_roleArnsHasBeenSet = true; m_roleArns = std::move(value); }
    inline CreateProfileRequest& WithRoleArns(const Aws::Vector<Aws::String>& value) { SetRoleArns(value); return *this;}
    inline CreateProfileRequest& WithRoleArns(Aws::Vector<Aws::String>&& value) { SetRoleArns(std::move(value)); return *this;}
    inline CreateProfileRequest& AddRoleArns(const Aws::String& value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(value); return *this; }
    inline CreateProfileRequest& AddRoleArns(Aws::String&& value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(std::move(value)); return *this; }
    inline CreateProfileRequest& AddRoleArns(const char* value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline const Aws::String& GetSessionPolicy() const{ return m_sessionPolicy; }
    inline bool SessionPolicyHasBeenSet() const { return m_sessionPolicyHasBeenSet; }
    inline void SetSessionPolicy(const Aws::String& value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy = value; }
    inline void SetSessionPolicy(Aws::String&& value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy = std::move(value); }
    inline void SetSessionPolicy(const char* value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy.assign(value); }
    inline CreateProfileRequest& WithSessionPolicy(const Aws::String& value) { SetSessionPolicy(value); return *this;}
    inline CreateProfileRequest& WithSessionPolicy(Aws::String&& value) { SetSessionPolicy(std::move(value)); return *this;}
    inline CreateProfileRequest& WithSessionPolicy(const char* value) { SetSessionPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to attach to the profile.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_acceptRoleSessionName;
    bool m_acceptRoleSessionNameHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedPolicyArns;
    bool m_managedPolicyArnsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_requireInstanceProperties;
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
