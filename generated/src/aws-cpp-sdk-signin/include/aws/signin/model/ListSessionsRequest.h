/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/SigninRequest.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/SessionStatus.h>

#include <utility>

namespace Aws {
namespace Signin {
namespace Model {

/**
 * <p>Input for ListSessions operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/ListSessionsInput">AWS
 * API Reference</a></p>
 */
class ListSessionsRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API ListSessionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListSessions"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The identity whose sessions to list. Omit to list the caller's own sessions.
   * Specify arn:aws:iam::{account-id}:* to list all sessions in the account.</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  ListSessionsRequest& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of results to return</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListSessionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for pagination</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSessionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only sessions with this status</p>
   */
  inline SessionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SessionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListSessionsRequest& WithStatus(SessionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only sessions created by this OAuth client</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  ListSessionsRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only sessions created at or after this time, in Unix epoch
   * seconds</p>
   */
  inline long long GetIssuedAfter() const { return m_issuedAfter; }
  inline bool IssuedAfterHasBeenSet() const { return m_issuedAfterHasBeenSet; }
  inline void SetIssuedAfter(long long value) {
    m_issuedAfterHasBeenSet = true;
    m_issuedAfter = value;
  }
  inline ListSessionsRequest& WithIssuedAfter(long long value) {
    SetIssuedAfter(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only sessions created before this time, in Unix epoch seconds</p>
   */
  inline long long GetIssuedBefore() const { return m_issuedBefore; }
  inline bool IssuedBeforeHasBeenSet() const { return m_issuedBeforeHasBeenSet; }
  inline void SetIssuedBefore(long long value) {
    m_issuedBeforeHasBeenSet = true;
    m_issuedBefore = value;
  }
  inline ListSessionsRequest& WithIssuedBefore(long long value) {
    SetIssuedBefore(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_principalArn;

  int m_maxResults{0};

  Aws::String m_nextToken;

  SessionStatus m_status{SessionStatus::NOT_SET};

  Aws::String m_clientId;

  long long m_issuedAfter{0};

  long long m_issuedBefore{0};
  bool m_principalArnHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_issuedAfterHasBeenSet = false;
  bool m_issuedBeforeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
