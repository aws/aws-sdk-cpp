/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Contains the modifiable details for updating an existing user, including
 * name, password, security group membership, and invitation settings.</p>
 * <p>A user can only be assigned to a single security group. Attempting to add a
 * user to multiple security groups is not supported and will result in an
 * error.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/UpdateUserDetails">AWS
 * API Reference</a></p>
 */
class UpdateUserDetails {
 public:
  AWS_WICKR_API UpdateUserDetails() = default;
  AWS_WICKR_API UpdateUserDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API UpdateUserDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The new first name for the user.</p>
   */
  inline const Aws::String& GetFirstName() const { return m_firstName; }
  inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
  template <typename FirstNameT = Aws::String>
  void SetFirstName(FirstNameT&& value) {
    m_firstNameHasBeenSet = true;
    m_firstName = std::forward<FirstNameT>(value);
  }
  template <typename FirstNameT = Aws::String>
  UpdateUserDetails& WithFirstName(FirstNameT&& value) {
    SetFirstName(std::forward<FirstNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new last name for the user.</p>
   */
  inline const Aws::String& GetLastName() const { return m_lastName; }
  inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
  template <typename LastNameT = Aws::String>
  void SetLastName(LastNameT&& value) {
    m_lastNameHasBeenSet = true;
    m_lastName = std::forward<LastNameT>(value);
  }
  template <typename LastNameT = Aws::String>
  UpdateUserDetails& WithLastName(LastNameT&& value) {
    SetLastName(std::forward<LastNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new username or email address for the user.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  UpdateUserDetails& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated list of security group IDs to which the user should belong.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  UpdateUserDetails& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  UpdateUserDetails& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new custom invite code for the user.</p>
   */
  inline const Aws::String& GetInviteCode() const { return m_inviteCode; }
  inline bool InviteCodeHasBeenSet() const { return m_inviteCodeHasBeenSet; }
  template <typename InviteCodeT = Aws::String>
  void SetInviteCode(InviteCodeT&& value) {
    m_inviteCodeHasBeenSet = true;
    m_inviteCode = std::forward<InviteCodeT>(value);
  }
  template <typename InviteCodeT = Aws::String>
  UpdateUserDetails& WithInviteCode(InviteCodeT&& value) {
    SetInviteCode(std::forward<InviteCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new time-to-live for the invite code in days.</p>
   */
  inline int GetInviteCodeTtl() const { return m_inviteCodeTtl; }
  inline bool InviteCodeTtlHasBeenSet() const { return m_inviteCodeTtlHasBeenSet; }
  inline void SetInviteCodeTtl(int value) {
    m_inviteCodeTtlHasBeenSet = true;
    m_inviteCodeTtl = value;
  }
  inline UpdateUserDetails& WithInviteCodeTtl(int value) {
    SetInviteCodeTtl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the user can be verified through a custom invite code.</p>
   */
  inline bool GetCodeValidation() const { return m_codeValidation; }
  inline bool CodeValidationHasBeenSet() const { return m_codeValidationHasBeenSet; }
  inline void SetCodeValidation(bool value) {
    m_codeValidationHasBeenSet = true;
    m_codeValidation = value;
  }
  inline UpdateUserDetails& WithCodeValidation(bool value) {
    SetCodeValidation(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_firstName;

  Aws::String m_lastName;

  Aws::String m_username;

  Aws::Vector<Aws::String> m_securityGroupIds;

  Aws::String m_inviteCode;

  int m_inviteCodeTtl{0};

  bool m_codeValidation{false};
  bool m_firstNameHasBeenSet = false;
  bool m_lastNameHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_inviteCodeHasBeenSet = false;
  bool m_inviteCodeTtlHasBeenSet = false;
  bool m_codeValidationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
