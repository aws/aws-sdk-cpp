/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/AttributeMapping.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>The state of the profile after a read or write operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ProfileDetail">AWS
   * API Reference</a></p>
   */
  class ProfileDetail
  {
  public:
    AWS_ROLESANYWHERE_API ProfileDetail() = default;
    AWS_ROLESANYWHERE_API ProfileDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API ProfileDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Used to determine if a custom role session name will be accepted in a
     * temporary credential request.</p>
     */
    inline bool GetAcceptRoleSessionName() const { return m_acceptRoleSessionName; }
    inline bool AcceptRoleSessionNameHasBeenSet() const { return m_acceptRoleSessionNameHasBeenSet; }
    inline void SetAcceptRoleSessionName(bool value) { m_acceptRoleSessionNameHasBeenSet = true; m_acceptRoleSessionName = value; }
    inline ProfileDetail& WithAcceptRoleSessionName(bool value) { SetAcceptRoleSessionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping applied to the authenticating end-entity certificate.</p>
     */
    inline const Aws::Vector<AttributeMapping>& GetAttributeMappings() const { return m_attributeMappings; }
    inline bool AttributeMappingsHasBeenSet() const { return m_attributeMappingsHasBeenSet; }
    template<typename AttributeMappingsT = Aws::Vector<AttributeMapping>>
    void SetAttributeMappings(AttributeMappingsT&& value) { m_attributeMappingsHasBeenSet = true; m_attributeMappings = std::forward<AttributeMappingsT>(value); }
    template<typename AttributeMappingsT = Aws::Vector<AttributeMapping>>
    ProfileDetail& WithAttributeMappings(AttributeMappingsT&& value) { SetAttributeMappings(std::forward<AttributeMappingsT>(value)); return *this;}
    template<typename AttributeMappingsT = AttributeMapping>
    ProfileDetail& AddAttributeMappings(AttributeMappingsT&& value) { m_attributeMappingsHasBeenSet = true; m_attributeMappings.emplace_back(std::forward<AttributeMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ISO-8601 timestamp when the profile was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ProfileDetail& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that created the profile.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    ProfileDetail& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
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
    inline ProfileDetail& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the profile is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ProfileDetail& WithEnabled(bool value) { SetEnabled(value); return *this;}
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
    ProfileDetail& WithManagedPolicyArns(ManagedPolicyArnsT&& value) { SetManagedPolicyArns(std::forward<ManagedPolicyArnsT>(value)); return *this;}
    template<typename ManagedPolicyArnsT = Aws::String>
    ProfileDetail& AddManagedPolicyArns(ManagedPolicyArnsT&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.emplace_back(std::forward<ManagedPolicyArnsT>(value)); return *this; }
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
    ProfileDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the profile.</p>
     */
    inline const Aws::String& GetProfileArn() const { return m_profileArn; }
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
    template<typename ProfileArnT = Aws::String>
    void SetProfileArn(ProfileArnT&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::forward<ProfileArnT>(value); }
    template<typename ProfileArnT = Aws::String>
    ProfileDetail& WithProfileArn(ProfileArnT&& value) { SetProfileArn(std::forward<ProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    ProfileDetail& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether instance properties are required in temporary credential
     * requests with this profile. </p>
     */
    inline bool GetRequireInstanceProperties() const { return m_requireInstanceProperties; }
    inline bool RequireInstancePropertiesHasBeenSet() const { return m_requireInstancePropertiesHasBeenSet; }
    inline void SetRequireInstanceProperties(bool value) { m_requireInstancePropertiesHasBeenSet = true; m_requireInstanceProperties = value; }
    inline ProfileDetail& WithRequireInstanceProperties(bool value) { SetRequireInstanceProperties(value); return *this;}
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
    ProfileDetail& WithRoleArns(RoleArnsT&& value) { SetRoleArns(std::forward<RoleArnsT>(value)); return *this;}
    template<typename RoleArnsT = Aws::String>
    ProfileDetail& AddRoleArns(RoleArnsT&& value) { m_roleArnsHasBeenSet = true; m_roleArns.emplace_back(std::forward<RoleArnsT>(value)); return *this; }
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
    ProfileDetail& WithSessionPolicy(SessionPolicyT&& value) { SetSessionPolicy(std::forward<SessionPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO-8601 timestamp when the profile was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ProfileDetail& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    bool m_acceptRoleSessionName{false};
    bool m_acceptRoleSessionNameHasBeenSet = false;

    Aws::Vector<AttributeMapping> m_attributeMappings;
    bool m_attributeMappingsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    int m_durationSeconds{0};
    bool m_durationSecondsHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedPolicyArns;
    bool m_managedPolicyArnsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    bool m_requireInstanceProperties{false};
    bool m_requireInstancePropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_roleArns;
    bool m_roleArnsHasBeenSet = false;

    Aws::String m_sessionPolicy;
    bool m_sessionPolicyHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
