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
class GetUserResult {
 public:
  AWS_WICKR_API GetUserResult() = default;
  AWS_WICKR_API GetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API GetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the user.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  GetUserResult& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The first name of the user.</p>
   */
  inline const Aws::String& GetFirstName() const { return m_firstName; }
  template <typename FirstNameT = Aws::String>
  void SetFirstName(FirstNameT&& value) {
    m_firstNameHasBeenSet = true;
    m_firstName = std::forward<FirstNameT>(value);
  }
  template <typename FirstNameT = Aws::String>
  GetUserResult& WithFirstName(FirstNameT&& value) {
    SetFirstName(std::forward<FirstNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last name of the user.</p>
   */
  inline const Aws::String& GetLastName() const { return m_lastName; }
  template <typename LastNameT = Aws::String>
  void SetLastName(LastNameT&& value) {
    m_lastNameHasBeenSet = true;
    m_lastName = std::forward<LastNameT>(value);
  }
  template <typename LastNameT = Aws::String>
  GetUserResult& WithLastName(LastNameT&& value) {
    SetLastName(std::forward<LastNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address or username of the user.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  GetUserResult& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the user has administrator privileges in the network.</p>
   */
  inline bool GetIsAdmin() const { return m_isAdmin; }
  inline void SetIsAdmin(bool value) {
    m_isAdminHasBeenSet = true;
    m_isAdmin = value;
  }
  inline GetUserResult& WithIsAdmin(bool value) {
    SetIsAdmin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the user is currently suspended.</p>
   */
  inline bool GetSuspended() const { return m_suspended; }
  inline void SetSuspended(bool value) {
    m_suspendedHasBeenSet = true;
    m_suspended = value;
  }
  inline GetUserResult& WithSuspended(bool value) {
    SetSuspended(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the user (1 for pending, 2 for active).</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetUserResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the user's last activity in the network, specified in epoch
   * seconds.</p>
   */
  inline int GetLastActivity() const { return m_lastActivity; }
  inline void SetLastActivity(int value) {
    m_lastActivityHasBeenSet = true;
    m_lastActivity = value;
  }
  inline GetUserResult& WithLastActivity(int value) {
    SetLastActivity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the user's last login to the network, specified in epoch
   * seconds.</p>
   */
  inline int GetLastLogin() const { return m_lastLogin; }
  inline void SetLastLogin(int value) {
    m_lastLoginHasBeenSet = true;
    m_lastLogin = value;
  }
  inline GetUserResult& WithLastLogin(int value) {
    SetLastLogin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of security group IDs to which the user belongs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  GetUserResult& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  GetUserResult& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
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
  GetUserResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;

  Aws::String m_firstName;

  Aws::String m_lastName;

  Aws::String m_username;

  bool m_isAdmin{false};

  bool m_suspended{false};

  int m_status{0};

  int m_lastActivity{0};

  int m_lastLogin{0};

  Aws::Vector<Aws::String> m_securityGroupIds;

  Aws::String m_requestId;
  bool m_userIdHasBeenSet = false;
  bool m_firstNameHasBeenSet = false;
  bool m_lastNameHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_isAdminHasBeenSet = false;
  bool m_suspendedHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastActivityHasBeenSet = false;
  bool m_lastLoginHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
