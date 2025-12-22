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
class GetDataRetentionBotResult {
 public:
  AWS_WICKR_API GetDataRetentionBotResult() = default;
  AWS_WICKR_API GetDataRetentionBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API GetDataRetentionBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the data retention bot.</p>
   */
  inline const Aws::String& GetBotName() const { return m_botName; }
  template <typename BotNameT = Aws::String>
  void SetBotName(BotNameT&& value) {
    m_botNameHasBeenSet = true;
    m_botName = std::forward<BotNameT>(value);
  }
  template <typename BotNameT = Aws::String>
  GetDataRetentionBotResult& WithBotName(BotNameT&& value) {
    SetBotName(std::forward<BotNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether a data retention bot exists in the network.</p>
   */
  inline bool GetBotExists() const { return m_botExists; }
  inline void SetBotExists(bool value) {
    m_botExistsHasBeenSet = true;
    m_botExists = value;
  }
  inline GetDataRetentionBotResult& WithBotExists(bool value) {
    SetBotExists(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the data retention bot is active and operational.</p>
   */
  inline bool GetIsBotActive() const { return m_isBotActive; }
  inline void SetIsBotActive(bool value) {
    m_isBotActiveHasBeenSet = true;
    m_isBotActive = value;
  }
  inline GetDataRetentionBotResult& WithIsBotActive(bool value) {
    SetIsBotActive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the data retention bot has been registered with the
   * network.</p>
   */
  inline bool GetIsDataRetentionBotRegistered() const { return m_isDataRetentionBotRegistered; }
  inline void SetIsDataRetentionBotRegistered(bool value) {
    m_isDataRetentionBotRegisteredHasBeenSet = true;
    m_isDataRetentionBotRegistered = value;
  }
  inline GetDataRetentionBotResult& WithIsDataRetentionBotRegistered(bool value) {
    SetIsDataRetentionBotRegistered(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the data retention service is enabled for the network.</p>
   */
  inline bool GetIsDataRetentionServiceEnabled() const { return m_isDataRetentionServiceEnabled; }
  inline void SetIsDataRetentionServiceEnabled(bool value) {
    m_isDataRetentionServiceEnabledHasBeenSet = true;
    m_isDataRetentionServiceEnabled = value;
  }
  inline GetDataRetentionBotResult& WithIsDataRetentionServiceEnabled(bool value) {
    SetIsDataRetentionServiceEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the public key message has been acknowledged by the
   * bot.</p>
   */
  inline bool GetIsPubkeyMsgAcked() const { return m_isPubkeyMsgAcked; }
  inline void SetIsPubkeyMsgAcked(bool value) {
    m_isPubkeyMsgAckedHasBeenSet = true;
    m_isPubkeyMsgAcked = value;
  }
  inline GetDataRetentionBotResult& WithIsPubkeyMsgAcked(bool value) {
    SetIsPubkeyMsgAcked(value);
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
  GetDataRetentionBotResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_botName;

  bool m_botExists{false};

  bool m_isBotActive{false};

  bool m_isDataRetentionBotRegistered{false};

  bool m_isDataRetentionServiceEnabled{false};

  bool m_isPubkeyMsgAcked{false};

  Aws::String m_requestId;
  bool m_botNameHasBeenSet = false;
  bool m_botExistsHasBeenSet = false;
  bool m_isBotActiveHasBeenSet = false;
  bool m_isDataRetentionBotRegisteredHasBeenSet = false;
  bool m_isDataRetentionServiceEnabledHasBeenSet = false;
  bool m_isPubkeyMsgAckedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
