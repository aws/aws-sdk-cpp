/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
class GetBotResult {
 public:
  AWS_WICKR_API GetBotResult() = default;
  AWS_WICKR_API GetBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API GetBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the bot.</p>
   */
  inline const Aws::String& GetBotId() const { return m_botId; }
  template <typename BotIdT = Aws::String>
  void SetBotId(BotIdT&& value) {
    m_botIdHasBeenSet = true;
    m_botId = std::forward<BotIdT>(value);
  }
  template <typename BotIdT = Aws::String>
  GetBotResult& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the bot that is visible to users.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  GetBotResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the bot.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  GetBotResult& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique username hash identifier for the bot.</p>
   */
  inline const Aws::String& GetUname() const { return m_uname; }
  template <typename UnameT = Aws::String>
  void SetUname(UnameT&& value) {
    m_unameHasBeenSet = true;
    m_uname = std::forward<UnameT>(value);
  }
  template <typename UnameT = Aws::String>
  GetBotResult& WithUname(UnameT&& value) {
    SetUname(std::forward<UnameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The public key of the bot used for encryption.</p>
   */
  inline const Aws::String& GetPubkey() const { return m_pubkey; }
  template <typename PubkeyT = Aws::String>
  void SetPubkey(PubkeyT&& value) {
    m_pubkeyHasBeenSet = true;
    m_pubkey = std::forward<PubkeyT>(value);
  }
  template <typename PubkeyT = Aws::String>
  GetBotResult& WithPubkey(PubkeyT&& value) {
    SetPubkey(std::forward<PubkeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the bot (1 for pending, 2 for active).</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetBotResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the security group to which the bot belongs.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  GetBotResult& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the bot has a password set.</p>
   */
  inline bool GetHasChallenge() const { return m_hasChallenge; }
  inline void SetHasChallenge(bool value) {
    m_hasChallengeHasBeenSet = true;
    m_hasChallenge = value;
  }
  inline GetBotResult& WithHasChallenge(bool value) {
    SetHasChallenge(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the bot is currently suspended.</p>
   */
  inline bool GetSuspended() const { return m_suspended; }
  inline void SetSuspended(bool value) {
    m_suspendedHasBeenSet = true;
    m_suspended = value;
  }
  inline GetBotResult& WithSuspended(bool value) {
    SetSuspended(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the bot's last login.</p>
   */
  inline const Aws::String& GetLastLogin() const { return m_lastLogin; }
  template <typename LastLoginT = Aws::String>
  void SetLastLogin(LastLoginT&& value) {
    m_lastLoginHasBeenSet = true;
    m_lastLogin = std::forward<LastLoginT>(value);
  }
  template <typename LastLoginT = Aws::String>
  GetBotResult& WithLastLogin(LastLoginT&& value) {
    SetLastLogin(std::forward<LastLoginT>(value));
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
  GetBotResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_botId;

  Aws::String m_displayName;

  Aws::String m_username;

  Aws::String m_uname;

  Aws::String m_pubkey;

  int m_status{0};

  Aws::String m_groupId;

  bool m_hasChallenge{false};

  bool m_suspended{false};

  Aws::String m_lastLogin;

  Aws::String m_requestId;
  bool m_botIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_unameHasBeenSet = false;
  bool m_pubkeyHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
  bool m_hasChallengeHasBeenSet = false;
  bool m_suspendedHasBeenSet = false;
  bool m_lastLoginHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
