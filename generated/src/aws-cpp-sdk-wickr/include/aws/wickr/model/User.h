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
 * <p>Represents a user account in a Wickr network with detailed profile
 * information, status, security settings, and authentication details.</p>
 * <p>codeValidation, inviteCode and inviteCodeTtl are restricted to networks under
 * preview only.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/User">AWS API
 * Reference</a></p>
 */
class User {
 public:
  AWS_WICKR_API User() = default;
  AWS_WICKR_API User(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the user within the network.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  User& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The first name of the user.</p>
   */
  inline const Aws::String& GetFirstName() const { return m_firstName; }
  inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
  template <typename FirstNameT = Aws::String>
  void SetFirstName(FirstNameT&& value) {
    m_firstNameHasBeenSet = true;
    m_firstName = std::forward<FirstNameT>(value);
  }
  template <typename FirstNameT = Aws::String>
  User& WithFirstName(FirstNameT&& value) {
    SetFirstName(std::forward<FirstNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last name of the user.</p>
   */
  inline const Aws::String& GetLastName() const { return m_lastName; }
  inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
  template <typename LastNameT = Aws::String>
  void SetLastName(LastNameT&& value) {
    m_lastNameHasBeenSet = true;
    m_lastName = std::forward<LastNameT>(value);
  }
  template <typename LastNameT = Aws::String>
  User& WithLastName(LastNameT&& value) {
    SetLastName(std::forward<LastNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address or username of the user. For bots, this must end in
   * 'bot'.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  User& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of security group IDs to which the user is assigned, determining their
   * permissions and feature access.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
  inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  void SetSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups = std::forward<SecurityGroupsT>(value);
  }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  User& WithSecurityGroups(SecurityGroupsT&& value) {
    SetSecurityGroups(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  template <typename SecurityGroupsT = Aws::String>
  User& AddSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the user has administrator privileges in the network.</p>
   */
  inline bool GetIsAdmin() const { return m_isAdmin; }
  inline bool IsAdminHasBeenSet() const { return m_isAdminHasBeenSet; }
  inline void SetIsAdmin(bool value) {
    m_isAdminHasBeenSet = true;
    m_isAdmin = value;
  }
  inline User& WithIsAdmin(bool value) {
    SetIsAdmin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the user is currently suspended and unable to access the
   * network.</p>
   */
  inline bool GetSuspended() const { return m_suspended; }
  inline bool SuspendedHasBeenSet() const { return m_suspendedHasBeenSet; }
  inline void SetSuspended(bool value) {
    m_suspendedHasBeenSet = true;
    m_suspended = value;
  }
  inline User& WithSuspended(bool value) {
    SetSuspended(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the user (1 for pending invitation, 2 for active).</p>
   */
  inline int GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline User& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether one-time password (OTP) authentication is enabled for the
   * user.</p>
   */
  inline bool GetOtpEnabled() const { return m_otpEnabled; }
  inline bool OtpEnabledHasBeenSet() const { return m_otpEnabledHasBeenSet; }
  inline void SetOtpEnabled(bool value) {
    m_otpEnabledHasBeenSet = true;
    m_otpEnabled = value;
  }
  inline User& WithOtpEnabled(bool value) {
    SetOtpEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SCIM (System for Cross-domain Identity Management) identifier for the
   * user, used for identity synchronization. Currently not used.</p>
   */
  inline const Aws::String& GetScimId() const { return m_scimId; }
  inline bool ScimIdHasBeenSet() const { return m_scimIdHasBeenSet; }
  template <typename ScimIdT = Aws::String>
  void SetScimId(ScimIdT&& value) {
    m_scimIdHasBeenSet = true;
    m_scimId = std::forward<ScimIdT>(value);
  }
  template <typename ScimIdT = Aws::String>
  User& WithScimId(ScimIdT&& value) {
    SetScimId(std::forward<ScimIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive type of the user account (e.g., 'user').</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  User& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The phone number minus country code, used for cloud deployments.</p>
   */
  inline const Aws::String& GetCell() const { return m_cell; }
  inline bool CellHasBeenSet() const { return m_cellHasBeenSet; }
  template <typename CellT = Aws::String>
  void SetCell(CellT&& value) {
    m_cellHasBeenSet = true;
    m_cell = std::forward<CellT>(value);
  }
  template <typename CellT = Aws::String>
  User& WithCell(CellT&& value) {
    SetCell(std::forward<CellT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country code for the user's phone number, used for cloud deployments.</p>
   */
  inline const Aws::String& GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  template <typename CountryCodeT = Aws::String>
  void SetCountryCode(CountryCodeT&& value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = std::forward<CountryCodeT>(value);
  }
  template <typename CountryCodeT = Aws::String>
  User& WithCountryCode(CountryCodeT&& value) {
    SetCountryCode(std::forward<CountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of failed password attempts for enterprise deployments, used for
   * account lockout policies.</p>
   */
  inline int GetChallengeFailures() const { return m_challengeFailures; }
  inline bool ChallengeFailuresHasBeenSet() const { return m_challengeFailuresHasBeenSet; }
  inline void SetChallengeFailures(int value) {
    m_challengeFailuresHasBeenSet = true;
    m_challengeFailures = value;
  }
  inline User& WithChallengeFailures(int value) {
    SetChallengeFailures(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the user's email invitation code has expired, applicable to
   * cloud deployments.</p>
   */
  inline bool GetIsInviteExpired() const { return m_isInviteExpired; }
  inline bool IsInviteExpiredHasBeenSet() const { return m_isInviteExpiredHasBeenSet; }
  inline void SetIsInviteExpired(bool value) {
    m_isInviteExpiredHasBeenSet = true;
    m_isInviteExpired = value;
  }
  inline User& WithIsInviteExpired(bool value) {
    SetIsInviteExpired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this account is a user (as opposed to a bot or other
   * account type).</p>
   */
  inline bool GetIsUser() const { return m_isUser; }
  inline bool IsUserHasBeenSet() const { return m_isUserHasBeenSet; }
  inline void SetIsUser(bool value) {
    m_isUserHasBeenSet = true;
    m_isUser = value;
  }
  inline User& WithIsUser(bool value) {
    SetIsUser(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The invitation code for this user, used during registration to join the
   * network.</p>
   */
  inline const Aws::String& GetInviteCode() const { return m_inviteCode; }
  inline bool InviteCodeHasBeenSet() const { return m_inviteCodeHasBeenSet; }
  template <typename InviteCodeT = Aws::String>
  void SetInviteCode(InviteCodeT&& value) {
    m_inviteCodeHasBeenSet = true;
    m_inviteCode = std::forward<InviteCodeT>(value);
  }
  template <typename InviteCodeT = Aws::String>
  User& WithInviteCode(InviteCodeT&& value) {
    SetInviteCode(std::forward<InviteCodeT>(value));
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
  inline User& WithCodeValidation(bool value) {
    SetCodeValidation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the user.</p>
   */
  inline const Aws::String& GetUname() const { return m_uname; }
  inline bool UnameHasBeenSet() const { return m_unameHasBeenSet; }
  template <typename UnameT = Aws::String>
  void SetUname(UnameT&& value) {
    m_unameHasBeenSet = true;
    m_uname = std::forward<UnameT>(value);
  }
  template <typename UnameT = Aws::String>
  User& WithUname(UnameT&& value) {
    SetUname(std::forward<UnameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;

  Aws::String m_firstName;

  Aws::String m_lastName;

  Aws::String m_username;

  Aws::Vector<Aws::String> m_securityGroups;

  bool m_isAdmin{false};

  bool m_suspended{false};

  int m_status{0};

  bool m_otpEnabled{false};

  Aws::String m_scimId;

  Aws::String m_type;

  Aws::String m_cell;

  Aws::String m_countryCode;

  int m_challengeFailures{0};

  bool m_isInviteExpired{false};

  bool m_isUser{false};

  Aws::String m_inviteCode;

  bool m_codeValidation{false};

  Aws::String m_uname;
  bool m_userIdHasBeenSet = false;
  bool m_firstNameHasBeenSet = false;
  bool m_lastNameHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_securityGroupsHasBeenSet = false;
  bool m_isAdminHasBeenSet = false;
  bool m_suspendedHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_otpEnabledHasBeenSet = false;
  bool m_scimIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_cellHasBeenSet = false;
  bool m_countryCodeHasBeenSet = false;
  bool m_challengeFailuresHasBeenSet = false;
  bool m_isInviteExpiredHasBeenSet = false;
  bool m_isUserHasBeenSet = false;
  bool m_inviteCodeHasBeenSet = false;
  bool m_codeValidationHasBeenSet = false;
  bool m_unameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
