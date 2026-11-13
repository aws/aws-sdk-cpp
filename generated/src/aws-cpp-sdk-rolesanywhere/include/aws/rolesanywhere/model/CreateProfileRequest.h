/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/Tag.h>

#include <utility>

namespace Aws {
namespace RolesAnywhere {
namespace Model {

/**
 */
class CreateProfileRequest : public RolesAnywhereRequest {
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
   * <p>The name of the profile.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateProfileRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unused, saved for future use. Will likely specify whether instance properties
   * are required in temporary credential requests with this profile. </p>
   */
  inline bool GetRequireInstanceProperties() const { return m_requireInstanceProperties; }
  inline bool RequireInstancePropertiesHasBeenSet() const { return m_requireInstancePropertiesHasBeenSet; }
  inline void SetRequireInstanceProperties(bool value) {
    m_requireInstancePropertiesHasBeenSet = true;
    m_requireInstanceProperties = value;
  }
  inline CreateProfileRequest& WithRequireInstanceProperties(bool value) {
    SetRequireInstanceProperties(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A session policy that applies to the trust boundary of the vended session
   * credentials. </p>
   */
  inline const Aws::String& GetSessionPolicy() const { return m_sessionPolicy; }
  inline bool SessionPolicyHasBeenSet() const { return m_sessionPolicyHasBeenSet; }
  template <typename SessionPolicyT = Aws::String>
  void SetSessionPolicy(SessionPolicyT&& value) {
    m_sessionPolicyHasBeenSet = true;
    m_sessionPolicy = std::forward<SessionPolicyT>(value);
  }
  template <typename SessionPolicyT = Aws::String>
  CreateProfileRequest& WithSessionPolicy(SessionPolicyT&& value) {
    SetSessionPolicy(std::forward<SessionPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of IAM roles that this profile can assume in a temporary credential
   * request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRoleArns() const { return m_roleArns; }
  inline bool RoleArnsHasBeenSet() const { return m_roleArnsHasBeenSet; }
  template <typename RoleArnsT = Aws::Vector<Aws::String>>
  void SetRoleArns(RoleArnsT&& value) {
    m_roleArnsHasBeenSet = true;
    m_roleArns = std::forward<RoleArnsT>(value);
  }
  template <typename RoleArnsT = Aws::Vector<Aws::String>>
  CreateProfileRequest& WithRoleArns(RoleArnsT&& value) {
    SetRoleArns(std::forward<RoleArnsT>(value));
    return *this;
  }
  template <typename RoleArnsT = Aws::String>
  CreateProfileRequest& AddRoleArns(RoleArnsT&& value) {
    m_roleArnsHasBeenSet = true;
    m_roleArns.emplace_back(std::forward<RoleArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of managed policy ARNs that apply to the vended session credentials.
   * </p>
   */
  inline const Aws::Vector<Aws::String>& GetManagedPolicyArns() const { return m_managedPolicyArns; }
  inline bool ManagedPolicyArnsHasBeenSet() const { return m_managedPolicyArnsHasBeenSet; }
  template <typename ManagedPolicyArnsT = Aws::Vector<Aws::String>>
  void SetManagedPolicyArns(ManagedPolicyArnsT&& value) {
    m_managedPolicyArnsHasBeenSet = true;
    m_managedPolicyArns = std::forward<ManagedPolicyArnsT>(value);
  }
  template <typename ManagedPolicyArnsT = Aws::Vector<Aws::String>>
  CreateProfileRequest& WithManagedPolicyArns(ManagedPolicyArnsT&& value) {
    SetManagedPolicyArns(std::forward<ManagedPolicyArnsT>(value));
    return *this;
  }
  template <typename ManagedPolicyArnsT = Aws::String>
  CreateProfileRequest& AddManagedPolicyArns(ManagedPolicyArnsT&& value) {
    m_managedPolicyArnsHasBeenSet = true;
    m_managedPolicyArns.emplace_back(std::forward<ManagedPolicyArnsT>(value));
    return *this;
  }
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
  inline void SetDurationSeconds(int value) {
    m_durationSecondsHasBeenSet = true;
    m_durationSeconds = value;
  }
  inline CreateProfileRequest& WithDurationSeconds(int value) {
    SetDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the profile is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline CreateProfileRequest& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to attach to the profile.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateProfileRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateProfileRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Used to determine if a custom role session name will be accepted in a
   * temporary credential request.</p>
   */
  inline bool GetAcceptRoleSessionName() const { return m_acceptRoleSessionName; }
  inline bool AcceptRoleSessionNameHasBeenSet() const { return m_acceptRoleSessionNameHasBeenSet; }
  inline void SetAcceptRoleSessionName(bool value) {
    m_acceptRoleSessionNameHasBeenSet = true;
    m_acceptRoleSessionName = value;
  }
  inline CreateProfileRequest& WithAcceptRoleSessionName(bool value) {
    SetAcceptRoleSessionName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An alias for the profile. When you set an alias, the response includes the
   * alias ARN of the profile in <code>aliasArn</code>.</p> <p>An alias name contains
   * 1 to 256 characters. It must begin with a letter (A-Z or a-z). It can contain
   * only letters (A-Z and a-z), numbers (0-9), underscores (_), hyphens (-), and
   * forward slashes (/). A forward slash can appear only between two other
   * characters, so an alias name can't end with a forward slash or contain two in a
   * row. Alias names that begin with <code>aws/</code>, in any combination of
   * uppercase and lowercase letters, are reserved. Alias names are case
   * sensitive.</p> <p>The alias name must be unique among resources of the same type
   * in your account and Region. If another resource of the same type already has the
   * alias, the request fails with a <code>ValidationException</code>. An invalid or
   * reserved alias name also causes a <code>ValidationException</code>.</p> <p>If
   * you omit this parameter or specify an empty string, the resource is created
   * without an alias.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  CreateProfileRequest& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  bool m_requireInstanceProperties{false};

  Aws::String m_sessionPolicy;

  Aws::Vector<Aws::String> m_roleArns;

  Aws::Vector<Aws::String> m_managedPolicyArns;

  int m_durationSeconds{0};

  bool m_enabled{false};

  Aws::Vector<Tag> m_tags;

  bool m_acceptRoleSessionName{false};

  Aws::String m_aliasName;
  bool m_nameHasBeenSet = false;
  bool m_requireInstancePropertiesHasBeenSet = false;
  bool m_sessionPolicyHasBeenSet = false;
  bool m_roleArnsHasBeenSet = false;
  bool m_managedPolicyArnsHasBeenSet = false;
  bool m_durationSecondsHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_acceptRoleSessionNameHasBeenSet = false;
  bool m_aliasNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
