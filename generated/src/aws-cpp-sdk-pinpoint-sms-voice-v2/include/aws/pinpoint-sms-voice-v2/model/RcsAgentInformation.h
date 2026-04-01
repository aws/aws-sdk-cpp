/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsAgentStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/TestingAgentInformation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>The information for an RCS agent in an Amazon Web Services
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsAgentInformation">AWS
 * API Reference</a></p>
 */
class RcsAgentInformation {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsAgentInformation() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsAgentInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsAgentInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the RCS agent.</p>
   */
  inline const Aws::String& GetRcsAgentArn() const { return m_rcsAgentArn; }
  inline bool RcsAgentArnHasBeenSet() const { return m_rcsAgentArnHasBeenSet; }
  template <typename RcsAgentArnT = Aws::String>
  void SetRcsAgentArn(RcsAgentArnT&& value) {
    m_rcsAgentArnHasBeenSet = true;
    m_rcsAgentArn = std::forward<RcsAgentArnT>(value);
  }
  template <typename RcsAgentArnT = Aws::String>
  RcsAgentInformation& WithRcsAgentArn(RcsAgentArnT&& value) {
    SetRcsAgentArn(std::forward<RcsAgentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the RCS agent.</p>
   */
  inline const Aws::String& GetRcsAgentId() const { return m_rcsAgentId; }
  inline bool RcsAgentIdHasBeenSet() const { return m_rcsAgentIdHasBeenSet; }
  template <typename RcsAgentIdT = Aws::String>
  void SetRcsAgentId(RcsAgentIdT&& value) {
    m_rcsAgentIdHasBeenSet = true;
    m_rcsAgentId = std::forward<RcsAgentIdT>(value);
  }
  template <typename RcsAgentIdT = Aws::String>
  RcsAgentInformation& WithRcsAgentId(RcsAgentIdT&& value) {
    SetRcsAgentId(std::forward<RcsAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the RCS agent.</p>
   */
  inline RcsAgentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RcsAgentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RcsAgentInformation& WithStatus(RcsAgentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the RCS agent was created, in <a
   * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
  inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  void SetCreatedTimestamp(CreatedTimestampT&& value) {
    m_createdTimestampHasBeenSet = true;
    m_createdTimestamp = std::forward<CreatedTimestampT>(value);
  }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  RcsAgentInformation& WithCreatedTimestamp(CreatedTimestampT&& value) {
    SetCreatedTimestamp(std::forward<CreatedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to true the RCS agent can't be deleted.</p>
   */
  inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
  inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
  inline void SetDeletionProtectionEnabled(bool value) {
    m_deletionProtectionEnabledHasBeenSet = true;
    m_deletionProtectionEnabled = value;
  }
  inline RcsAgentInformation& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the OptOutList associated with the RCS agent.</p>
   */
  inline const Aws::String& GetOptOutListName() const { return m_optOutListName; }
  inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }
  template <typename OptOutListNameT = Aws::String>
  void SetOptOutListName(OptOutListNameT&& value) {
    m_optOutListNameHasBeenSet = true;
    m_optOutListName = std::forward<OptOutListNameT>(value);
  }
  template <typename OptOutListNameT = Aws::String>
  RcsAgentInformation& WithOptOutListName(OptOutListNameT&& value) {
    SetOptOutListName(std::forward<OptOutListNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to true you're responsible for responding to HELP and STOP requests.
   * You're also responsible for tracking and honoring opt-out requests.</p>
   */
  inline bool GetSelfManagedOptOutsEnabled() const { return m_selfManagedOptOutsEnabled; }
  inline bool SelfManagedOptOutsEnabledHasBeenSet() const { return m_selfManagedOptOutsEnabledHasBeenSet; }
  inline void SetSelfManagedOptOutsEnabled(bool value) {
    m_selfManagedOptOutsEnabledHasBeenSet = true;
    m_selfManagedOptOutsEnabled = value;
  }
  inline RcsAgentInformation& WithSelfManagedOptOutsEnabled(bool value) {
    SetSelfManagedOptOutsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
   */
  inline const Aws::String& GetTwoWayChannelArn() const { return m_twoWayChannelArn; }
  inline bool TwoWayChannelArnHasBeenSet() const { return m_twoWayChannelArnHasBeenSet; }
  template <typename TwoWayChannelArnT = Aws::String>
  void SetTwoWayChannelArn(TwoWayChannelArnT&& value) {
    m_twoWayChannelArnHasBeenSet = true;
    m_twoWayChannelArn = std::forward<TwoWayChannelArnT>(value);
  }
  template <typename TwoWayChannelArnT = Aws::String>
  RcsAgentInformation& WithTwoWayChannelArn(TwoWayChannelArnT&& value) {
    SetTwoWayChannelArn(std::forward<TwoWayChannelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional IAM Role Arn for a service to assume, to be able to post inbound
   * SMS messages.</p>
   */
  inline const Aws::String& GetTwoWayChannelRole() const { return m_twoWayChannelRole; }
  inline bool TwoWayChannelRoleHasBeenSet() const { return m_twoWayChannelRoleHasBeenSet; }
  template <typename TwoWayChannelRoleT = Aws::String>
  void SetTwoWayChannelRole(TwoWayChannelRoleT&& value) {
    m_twoWayChannelRoleHasBeenSet = true;
    m_twoWayChannelRole = std::forward<TwoWayChannelRoleT>(value);
  }
  template <typename TwoWayChannelRoleT = Aws::String>
  RcsAgentInformation& WithTwoWayChannelRole(TwoWayChannelRoleT&& value) {
    SetTwoWayChannelRole(std::forward<TwoWayChannelRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to true you can receive incoming text messages from your end
   * recipients using the TwoWayChannelArn.</p>
   */
  inline bool GetTwoWayEnabled() const { return m_twoWayEnabled; }
  inline bool TwoWayEnabledHasBeenSet() const { return m_twoWayEnabledHasBeenSet; }
  inline void SetTwoWayEnabled(bool value) {
    m_twoWayEnabledHasBeenSet = true;
    m_twoWayEnabled = value;
  }
  inline RcsAgentInformation& WithTwoWayEnabled(bool value) {
    SetTwoWayEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the pool associated with the RCS agent.</p>
   */
  inline const Aws::String& GetPoolId() const { return m_poolId; }
  inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
  template <typename PoolIdT = Aws::String>
  void SetPoolId(PoolIdT&& value) {
    m_poolIdHasBeenSet = true;
    m_poolId = std::forward<PoolIdT>(value);
  }
  template <typename PoolIdT = Aws::String>
  RcsAgentInformation& WithPoolId(PoolIdT&& value) {
    SetPoolId(std::forward<PoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The testing agent information associated with the RCS agent.</p>
   */
  inline const TestingAgentInformation& GetTestingAgent() const { return m_testingAgent; }
  inline bool TestingAgentHasBeenSet() const { return m_testingAgentHasBeenSet; }
  template <typename TestingAgentT = TestingAgentInformation>
  void SetTestingAgent(TestingAgentT&& value) {
    m_testingAgentHasBeenSet = true;
    m_testingAgent = std::forward<TestingAgentT>(value);
  }
  template <typename TestingAgentT = TestingAgentInformation>
  RcsAgentInformation& WithTestingAgent(TestingAgentT&& value) {
    SetTestingAgent(std::forward<TestingAgentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rcsAgentArn;

  Aws::String m_rcsAgentId;

  RcsAgentStatus m_status{RcsAgentStatus::NOT_SET};

  Aws::Utils::DateTime m_createdTimestamp{};

  bool m_deletionProtectionEnabled{false};

  Aws::String m_optOutListName;

  bool m_selfManagedOptOutsEnabled{false};

  Aws::String m_twoWayChannelArn;

  Aws::String m_twoWayChannelRole;

  bool m_twoWayEnabled{false};

  Aws::String m_poolId;

  TestingAgentInformation m_testingAgent;
  bool m_rcsAgentArnHasBeenSet = false;
  bool m_rcsAgentIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdTimestampHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
  bool m_optOutListNameHasBeenSet = false;
  bool m_selfManagedOptOutsEnabledHasBeenSet = false;
  bool m_twoWayChannelArnHasBeenSet = false;
  bool m_twoWayChannelRoleHasBeenSet = false;
  bool m_twoWayEnabledHasBeenSet = false;
  bool m_poolIdHasBeenSet = false;
  bool m_testingAgentHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
