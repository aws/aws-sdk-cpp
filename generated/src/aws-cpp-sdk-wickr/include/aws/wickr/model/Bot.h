/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Represents a bot account in a Wickr network with all its informational
 * fields.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/Bot">AWS API
 * Reference</a></p>
 */
class Bot {
 public:
  AWS_WICKR_API Bot() = default;
  AWS_WICKR_API Bot(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Bot& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the bot.</p>
   */
  inline const Aws::String& GetBotId() const { return m_botId; }
  inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
  template <typename BotIdT = Aws::String>
  void SetBotId(BotIdT&& value) {
    m_botIdHasBeenSet = true;
    m_botId = std::forward<BotIdT>(value);
  }
  template <typename BotIdT = Aws::String>
  Bot& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the bot that is visible to users.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  Bot& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the bot.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  Bot& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique username hash identifier for the bot.</p>
   */
  inline const Aws::String& GetUname() const { return m_uname; }
  inline bool UnameHasBeenSet() const { return m_unameHasBeenSet; }
  template <typename UnameT = Aws::String>
  void SetUname(UnameT&& value) {
    m_unameHasBeenSet = true;
    m_uname = std::forward<UnameT>(value);
  }
  template <typename UnameT = Aws::String>
  Bot& WithUname(UnameT&& value) {
    SetUname(std::forward<UnameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The public key of the bot used for encryption.</p>
   */
  inline const Aws::String& GetPubkey() const { return m_pubkey; }
  inline bool PubkeyHasBeenSet() const { return m_pubkeyHasBeenSet; }
  template <typename PubkeyT = Aws::String>
  void SetPubkey(PubkeyT&& value) {
    m_pubkeyHasBeenSet = true;
    m_pubkey = std::forward<PubkeyT>(value);
  }
  template <typename PubkeyT = Aws::String>
  Bot& WithPubkey(PubkeyT&& value) {
    SetPubkey(std::forward<PubkeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the bot (1 for pending, 2 for active).</p>
   */
  inline int GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Bot& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the security group to which the bot belongs.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  Bot& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the bot has a password set.</p>
   */
  inline bool GetHasChallenge() const { return m_hasChallenge; }
  inline bool HasChallengeHasBeenSet() const { return m_hasChallengeHasBeenSet; }
  inline void SetHasChallenge(bool value) {
    m_hasChallengeHasBeenSet = true;
    m_hasChallenge = value;
  }
  inline Bot& WithHasChallenge(bool value) {
    SetHasChallenge(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the bot is currently suspended.</p>
   */
  inline bool GetSuspended() const { return m_suspended; }
  inline bool SuspendedHasBeenSet() const { return m_suspendedHasBeenSet; }
  inline void SetSuspended(bool value) {
    m_suspendedHasBeenSet = true;
    m_suspended = value;
  }
  inline Bot& WithSuspended(bool value) {
    SetSuspended(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the bot's last login.</p>
   */
  inline const Aws::String& GetLastLogin() const { return m_lastLogin; }
  inline bool LastLoginHasBeenSet() const { return m_lastLoginHasBeenSet; }
  template <typename LastLoginT = Aws::String>
  void SetLastLogin(LastLoginT&& value) {
    m_lastLoginHasBeenSet = true;
    m_lastLogin = std::forward<LastLoginT>(value);
  }
  template <typename LastLoginT = Aws::String>
  Bot& WithLastLogin(LastLoginT&& value) {
    SetLastLogin(std::forward<LastLoginT>(value));
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
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
