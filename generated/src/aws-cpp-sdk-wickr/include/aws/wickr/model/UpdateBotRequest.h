/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class UpdateBotRequest : public WickrRequest {
 public:
  AWS_WICKR_API UpdateBotRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateBot"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network containing the bot to update.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  UpdateBotRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the bot to update.</p>
   */
  inline const Aws::String& GetBotId() const { return m_botId; }
  inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
  template <typename BotIdT = Aws::String>
  void SetBotId(BotIdT&& value) {
    m_botIdHasBeenSet = true;
    m_botId = std::forward<BotIdT>(value);
  }
  template <typename BotIdT = Aws::String>
  UpdateBotRequest& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new display name for the bot.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateBotRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the new security group to assign the bot to.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  UpdateBotRequest& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new password for the bot account.</p>
   */
  inline const Aws::String& GetChallenge() const { return m_challenge; }
  inline bool ChallengeHasBeenSet() const { return m_challengeHasBeenSet; }
  template <typename ChallengeT = Aws::String>
  void SetChallenge(ChallengeT&& value) {
    m_challengeHasBeenSet = true;
    m_challenge = std::forward<ChallengeT>(value);
  }
  template <typename ChallengeT = Aws::String>
  UpdateBotRequest& WithChallenge(ChallengeT&& value) {
    SetChallenge(std::forward<ChallengeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to suspend the bot or false to unsuspend it. Omit this field for
   * standard updates that don't affect suspension status.</p>
   */
  inline bool GetSuspend() const { return m_suspend; }
  inline bool SuspendHasBeenSet() const { return m_suspendHasBeenSet; }
  inline void SetSuspend(bool value) {
    m_suspendHasBeenSet = true;
    m_suspend = value;
  }
  inline UpdateBotRequest& WithSuspend(bool value) {
    SetSuspend(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_botId;

  Aws::String m_displayName;

  Aws::String m_groupId;

  Aws::String m_challenge;

  bool m_suspend{false};
  bool m_networkIdHasBeenSet = false;
  bool m_botIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
  bool m_challengeHasBeenSet = false;
  bool m_suspendHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
