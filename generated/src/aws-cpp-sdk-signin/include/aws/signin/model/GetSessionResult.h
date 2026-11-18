/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/ClientType.h>
#include <aws/signin/model/SessionStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {
/**
 * <p>Output for GetSession operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/GetSessionOutput">AWS
 * API Reference</a></p>
 */
class GetSessionResult {
 public:
  AWS_SIGNIN_API GetSessionResult() = default;
  AWS_SIGNIN_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The session ARN</p>
   */
  inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
  template <typename SessionArnT = Aws::String>
  void SetSessionArn(SessionArnT&& value) {
    m_sessionArnHasBeenSet = true;
    m_sessionArn = std::forward<SessionArnT>(value);
  }
  template <typename SessionArnT = Aws::String>
  GetSessionResult& WithSessionArn(SessionArnT&& value) {
    SetSessionArn(std::forward<SessionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM identity that owns the session</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  GetSessionResult& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role for the session, when the owner is a role</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  GetSessionResult& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session status</p>
   */
  inline SessionStatus GetStatus() const { return m_status; }
  inline void SetStatus(SessionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetSessionResult& WithStatus(SessionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth client that created the session</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  GetSessionResult& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of OAuth client that created the session</p>
   */
  inline ClientType GetClientType() const { return m_clientType; }
  inline void SetClientType(ClientType value) {
    m_clientTypeHasBeenSet = true;
    m_clientType = value;
  }
  inline GetSessionResult& WithClientType(ClientType value) {
    SetClientType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource that the session's tokens are bound to</p>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  GetSessionResult& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the session was created, in Unix epoch seconds</p>
   */
  inline long long GetIssuedAt() const { return m_issuedAt; }
  inline void SetIssuedAt(long long value) {
    m_issuedAtHasBeenSet = true;
    m_issuedAt = value;
  }
  inline GetSessionResult& WithIssuedAt(long long value) {
    SetIssuedAt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the session expires, in Unix epoch seconds</p>
   */
  inline long long GetExpiresAt() const { return m_expiresAt; }
  inline void SetExpiresAt(long long value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = value;
  }
  inline GetSessionResult& WithExpiresAt(long long value) {
    SetExpiresAt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the session was last refreshed, in Unix epoch seconds</p>
   */
  inline long long GetLastUsedAt() const { return m_lastUsedAt; }
  inline void SetLastUsedAt(long long value) {
    m_lastUsedAtHasBeenSet = true;
    m_lastUsedAt = value;
  }
  inline GetSessionResult& WithLastUsedAt(long long value) {
    SetLastUsedAt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region where the session was created</p>
   */
  inline const Aws::String& GetIssuedInRegion() const { return m_issuedInRegion; }
  template <typename IssuedInRegionT = Aws::String>
  void SetIssuedInRegion(IssuedInRegionT&& value) {
    m_issuedInRegionHasBeenSet = true;
    m_issuedInRegion = std::forward<IssuedInRegionT>(value);
  }
  template <typename IssuedInRegionT = Aws::String>
  GetSessionResult& WithIssuedInRegion(IssuedInRegionT&& value) {
    SetIssuedInRegion(std::forward<IssuedInRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the session this session originated from</p>
   */
  inline const Aws::String& GetOriginSessionArn() const { return m_originSessionArn; }
  template <typename OriginSessionArnT = Aws::String>
  void SetOriginSessionArn(OriginSessionArnT&& value) {
    m_originSessionArnHasBeenSet = true;
    m_originSessionArn = std::forward<OriginSessionArnT>(value);
  }
  template <typename OriginSessionArnT = Aws::String>
  GetSessionResult& WithOriginSessionArn(OriginSessionArnT&& value) {
    SetOriginSessionArn(std::forward<OriginSessionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user agent captured when the session was created or last refreshed</p>
   */
  inline const Aws::String& GetUserAgent() const { return m_userAgent; }
  template <typename UserAgentT = Aws::String>
  void SetUserAgent(UserAgentT&& value) {
    m_userAgentHasBeenSet = true;
    m_userAgent = std::forward<UserAgentT>(value);
  }
  template <typename UserAgentT = Aws::String>
  GetSessionResult& WithUserAgent(UserAgentT&& value) {
    SetUserAgent(std::forward<UserAgentT>(value));
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
  GetSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_sessionArn;

  Aws::String m_principalArn;

  Aws::String m_role;

  SessionStatus m_status{SessionStatus::NOT_SET};

  Aws::String m_clientId;

  ClientType m_clientType{ClientType::NOT_SET};

  Aws::String m_resource;

  long long m_issuedAt{0};

  long long m_expiresAt{0};

  long long m_lastUsedAt{0};

  Aws::String m_issuedInRegion;

  Aws::String m_originSessionArn;

  Aws::String m_userAgent;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sessionArnHasBeenSet = false;
  bool m_principalArnHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_clientTypeHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_issuedAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_lastUsedAtHasBeenSet = false;
  bool m_issuedInRegionHasBeenSet = false;
  bool m_originSessionArnHasBeenSet = false;
  bool m_userAgentHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
