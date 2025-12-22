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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class UpdateUserResult {
 public:
  AWS_WICKR_API UpdateUserResult() = default;
  AWS_WICKR_API UpdateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API UpdateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the updated user.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  UpdateUserResult& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the network where the user was updated.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  UpdateUserResult& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of security group IDs to which the user now belongs after the
   * update.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  UpdateUserResult& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  UpdateUserResult& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated first name of the user.</p>
   */
  inline const Aws::String& GetFirstName() const { return m_firstName; }
  template <typename FirstNameT = Aws::String>
  void SetFirstName(FirstNameT&& value) {
    m_firstNameHasBeenSet = true;
    m_firstName = std::forward<FirstNameT>(value);
  }
  template <typename FirstNameT = Aws::String>
  UpdateUserResult& WithFirstName(FirstNameT&& value) {
    SetFirstName(std::forward<FirstNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated last name of the user.</p>
   */
  inline const Aws::String& GetLastName() const { return m_lastName; }
  template <typename LastNameT = Aws::String>
  void SetLastName(LastNameT&& value) {
    m_lastNameHasBeenSet = true;
    m_lastName = std::forward<LastNameT>(value);
  }
  template <typename LastNameT = Aws::String>
  UpdateUserResult& WithLastName(LastNameT&& value) {
    SetLastName(std::forward<LastNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The middle name of the user (currently not used).</p>
   */
  inline const Aws::String& GetMiddleName() const { return m_middleName; }
  template <typename MiddleNameT = Aws::String>
  void SetMiddleName(MiddleNameT&& value) {
    m_middleNameHasBeenSet = true;
    m_middleName = std::forward<MiddleNameT>(value);
  }
  template <typename MiddleNameT = Aws::String>
  UpdateUserResult& WithMiddleName(MiddleNameT&& value) {
    SetMiddleName(std::forward<MiddleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the user is suspended after the update.</p>
   */
  inline bool GetSuspended() const { return m_suspended; }
  inline void SetSuspended(bool value) {
    m_suspendedHasBeenSet = true;
    m_suspended = value;
  }
  inline UpdateUserResult& WithSuspended(bool value) {
    SetSuspended(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the user was last modified, specified in epoch
   * seconds.</p>
   */
  inline int GetModified() const { return m_modified; }
  inline void SetModified(int value) {
    m_modifiedHasBeenSet = true;
    m_modified = value;
  }
  inline UpdateUserResult& WithModified(int value) {
    SetModified(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user's status after the update.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateUserResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated invite code for the user, if applicable.</p>
   */
  inline const Aws::String& GetInviteCode() const { return m_inviteCode; }
  template <typename InviteCodeT = Aws::String>
  void SetInviteCode(InviteCodeT&& value) {
    m_inviteCodeHasBeenSet = true;
    m_inviteCode = std::forward<InviteCodeT>(value);
  }
  template <typename InviteCodeT = Aws::String>
  UpdateUserResult& WithInviteCode(InviteCodeT&& value) {
    SetInviteCode(std::forward<InviteCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiration time of the user's invite code, specified in epoch
   * seconds.</p>
   */
  inline int GetInviteExpiration() const { return m_inviteExpiration; }
  inline void SetInviteExpiration(int value) {
    m_inviteExpirationHasBeenSet = true;
    m_inviteExpiration = value;
  }
  inline UpdateUserResult& WithInviteExpiration(int value) {
    SetInviteExpiration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the user can be verified through a custom invite code.</p>
   */
  inline bool GetCodeValidation() const { return m_codeValidation; }
  inline void SetCodeValidation(bool value) {
    m_codeValidationHasBeenSet = true;
    m_codeValidation = value;
  }
  inline UpdateUserResult& WithCodeValidation(bool value) {
    SetCodeValidation(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateUserResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;

  Aws::String m_networkId;

  Aws::Vector<Aws::String> m_securityGroupIds;

  Aws::String m_firstName;

  Aws::String m_lastName;

  Aws::String m_middleName;

  bool m_suspended{false};

  int m_modified{0};

  int m_status{0};

  Aws::String m_inviteCode;

  int m_inviteExpiration{0};

  bool m_codeValidation{false};

  Aws::String m_requestId;
  bool m_userIdHasBeenSet = false;
  bool m_networkIdHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_firstNameHasBeenSet = false;
  bool m_lastNameHasBeenSet = false;
  bool m_middleNameHasBeenSet = false;
  bool m_suspendedHasBeenSet = false;
  bool m_modifiedHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_inviteCodeHasBeenSet = false;
  bool m_inviteExpirationHasBeenSet = false;
  bool m_codeValidationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
