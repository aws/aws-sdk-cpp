/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/ClientType.h>
#include <aws/signin/model/SessionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {

/**
 * <p>Summary of a sign-in session</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/Session">AWS API
 * Reference</a></p>
 */
class Session {
 public:
  AWS_SIGNIN_API Session() = default;
  AWS_SIGNIN_API Session(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The session ARN</p>
   */
  inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
  inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }
  template <typename SessionArnT = Aws::String>
  void SetSessionArn(SessionArnT&& value) {
    m_sessionArnHasBeenSet = true;
    m_sessionArn = std::forward<SessionArnT>(value);
  }
  template <typename SessionArnT = Aws::String>
  Session& WithSessionArn(SessionArnT&& value) {
    SetSessionArn(std::forward<SessionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM identity that owns the session</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  Session& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role for the session, when the owner is a role</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  Session& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session status</p>
   */
  inline SessionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SessionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Session& WithStatus(SessionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the session was created, in Unix epoch seconds</p>
   */
  inline long long GetIssuedAt() const { return m_issuedAt; }
  inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }
  inline void SetIssuedAt(long long value) {
    m_issuedAtHasBeenSet = true;
    m_issuedAt = value;
  }
  inline Session& WithIssuedAt(long long value) {
    SetIssuedAt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the session expires, in Unix epoch seconds</p>
   */
  inline long long GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  inline void SetExpiresAt(long long value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = value;
  }
  inline Session& WithExpiresAt(long long value) {
    SetExpiresAt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth client that created the session</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  Session& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of OAuth client that created the session</p>
   */
  inline ClientType GetClientType() const { return m_clientType; }
  inline bool ClientTypeHasBeenSet() const { return m_clientTypeHasBeenSet; }
  inline void SetClientType(ClientType value) {
    m_clientTypeHasBeenSet = true;
    m_clientType = value;
  }
  inline Session& WithClientType(ClientType value) {
    SetClientType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource that the session's tokens are bound to</p>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  Session& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionArn;

  Aws::String m_principalArn;

  Aws::String m_role;

  SessionStatus m_status{SessionStatus::NOT_SET};

  long long m_issuedAt{0};

  long long m_expiresAt{0};

  Aws::String m_clientId;

  ClientType m_clientType{ClientType::NOT_SET};

  Aws::String m_resource;
  bool m_sessionArnHasBeenSet = false;
  bool m_principalArnHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_issuedAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_clientTypeHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
