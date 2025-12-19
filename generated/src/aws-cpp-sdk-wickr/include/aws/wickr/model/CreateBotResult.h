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
class CreateBotResult {
 public:
  AWS_WICKR_API CreateBotResult() = default;
  AWS_WICKR_API CreateBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API CreateBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A message indicating the result of the bot creation operation.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  CreateBotResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier assigned to the newly created bot.</p>
   */
  inline const Aws::String& GetBotId() const { return m_botId; }
  template <typename BotIdT = Aws::String>
  void SetBotId(BotIdT&& value) {
    m_botIdHasBeenSet = true;
    m_botId = std::forward<BotIdT>(value);
  }
  template <typename BotIdT = Aws::String>
  CreateBotResult& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the network where the bot was created.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  CreateBotResult& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the newly created bot.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  CreateBotResult& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the newly created bot.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateBotResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the security group to which the bot was assigned.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  CreateBotResult& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
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
  CreateBotResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_botId;

  Aws::String m_networkId;

  Aws::String m_username;

  Aws::String m_displayName;

  Aws::String m_groupId;

  Aws::String m_requestId;
  bool m_messageHasBeenSet = false;
  bool m_botIdHasBeenSet = false;
  bool m_networkIdHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
