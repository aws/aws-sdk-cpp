/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class UpdateRcsAgentRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API UpdateRcsAgentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRcsAgent"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the RCS agent to update. You can use either the
   * RcsAgentId or RcsAgentArn.</p>
   */
  inline const Aws::String& GetRcsAgentId() const { return m_rcsAgentId; }
  inline bool RcsAgentIdHasBeenSet() const { return m_rcsAgentIdHasBeenSet; }
  template <typename RcsAgentIdT = Aws::String>
  void SetRcsAgentId(RcsAgentIdT&& value) {
    m_rcsAgentIdHasBeenSet = true;
    m_rcsAgentId = std::forward<RcsAgentIdT>(value);
  }
  template <typename RcsAgentIdT = Aws::String>
  UpdateRcsAgentRequest& WithRcsAgentId(RcsAgentIdT&& value) {
    SetRcsAgentId(std::forward<RcsAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>By default this is set to false. When set to true the RCS agent can't be
   * deleted.</p>
   */
  inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
  inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
  inline void SetDeletionProtectionEnabled(bool value) {
    m_deletionProtectionEnabledHasBeenSet = true;
    m_deletionProtectionEnabled = value;
  }
  inline UpdateRcsAgentRequest& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OptOutList to associate with the RCS agent. Valid values are either
   * OptOutListName or OptOutListArn.</p>
   */
  inline const Aws::String& GetOptOutListName() const { return m_optOutListName; }
  inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }
  template <typename OptOutListNameT = Aws::String>
  void SetOptOutListName(OptOutListNameT&& value) {
    m_optOutListNameHasBeenSet = true;
    m_optOutListName = std::forward<OptOutListNameT>(value);
  }
  template <typename OptOutListNameT = Aws::String>
  UpdateRcsAgentRequest& WithOptOutListName(OptOutListNameT&& value) {
    SetOptOutListName(std::forward<OptOutListNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>By default this is set to false. When set to true you're responsible for
   * responding to HELP and STOP requests. You're also responsible for tracking and
   * honoring opt-out requests.</p>
   */
  inline bool GetSelfManagedOptOutsEnabled() const { return m_selfManagedOptOutsEnabled; }
  inline bool SelfManagedOptOutsEnabledHasBeenSet() const { return m_selfManagedOptOutsEnabledHasBeenSet; }
  inline void SetSelfManagedOptOutsEnabled(bool value) {
    m_selfManagedOptOutsEnabledHasBeenSet = true;
    m_selfManagedOptOutsEnabled = value;
  }
  inline UpdateRcsAgentRequest& WithSelfManagedOptOutsEnabled(bool value) {
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
  UpdateRcsAgentRequest& WithTwoWayChannelArn(TwoWayChannelArnT&& value) {
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
  UpdateRcsAgentRequest& WithTwoWayChannelRole(TwoWayChannelRoleT&& value) {
    SetTwoWayChannelRole(std::forward<TwoWayChannelRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>By default this is set to false. When set to true you can receive incoming
   * text messages from your end recipients.</p>
   */
  inline bool GetTwoWayEnabled() const { return m_twoWayEnabled; }
  inline bool TwoWayEnabledHasBeenSet() const { return m_twoWayEnabledHasBeenSet; }
  inline void SetTwoWayEnabled(bool value) {
    m_twoWayEnabledHasBeenSet = true;
    m_twoWayEnabled = value;
  }
  inline UpdateRcsAgentRequest& WithTwoWayEnabled(bool value) {
    SetTwoWayEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the S3 bucket where inbound RCS media files are stored. Two-way
   * messaging must be enabled on the agent. To remove the media configuration, pass
   * the sentinel value <code>UNSET_RCS_MEDIA_CONFIGURATION</code> for both this
   * field and TwoWayMediaS3Role.</p>
   */
  inline const Aws::String& GetTwoWayMediaS3BucketName() const { return m_twoWayMediaS3BucketName; }
  inline bool TwoWayMediaS3BucketNameHasBeenSet() const { return m_twoWayMediaS3BucketNameHasBeenSet; }
  template <typename TwoWayMediaS3BucketNameT = Aws::String>
  void SetTwoWayMediaS3BucketName(TwoWayMediaS3BucketNameT&& value) {
    m_twoWayMediaS3BucketNameHasBeenSet = true;
    m_twoWayMediaS3BucketName = std::forward<TwoWayMediaS3BucketNameT>(value);
  }
  template <typename TwoWayMediaS3BucketNameT = Aws::String>
  UpdateRcsAgentRequest& WithTwoWayMediaS3BucketName(TwoWayMediaS3BucketNameT&& value) {
    SetTwoWayMediaS3BucketName(std::forward<TwoWayMediaS3BucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key prefix used for inbound RCS media objects in the S3 bucket.</p>
   */
  inline const Aws::String& GetTwoWayMediaS3KeyPrefix() const { return m_twoWayMediaS3KeyPrefix; }
  inline bool TwoWayMediaS3KeyPrefixHasBeenSet() const { return m_twoWayMediaS3KeyPrefixHasBeenSet; }
  template <typename TwoWayMediaS3KeyPrefixT = Aws::String>
  void SetTwoWayMediaS3KeyPrefix(TwoWayMediaS3KeyPrefixT&& value) {
    m_twoWayMediaS3KeyPrefixHasBeenSet = true;
    m_twoWayMediaS3KeyPrefix = std::forward<TwoWayMediaS3KeyPrefixT>(value);
  }
  template <typename TwoWayMediaS3KeyPrefixT = Aws::String>
  UpdateRcsAgentRequest& WithTwoWayMediaS3KeyPrefix(TwoWayMediaS3KeyPrefixT&& value) {
    SetTwoWayMediaS3KeyPrefix(std::forward<TwoWayMediaS3KeyPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role used to write inbound RCS media files to the S3
   * bucket. The role must have <code>s3:PutObject</code> permission on the bucket
   * and a trust policy allowing <code>sms-voice.amazonaws.com</code> to assume it.
   * To remove the media configuration, pass the sentinel value
   * <code>UNSET_RCS_MEDIA_CONFIGURATION</code> for both this field and
   * TwoWayMediaS3BucketName.</p>
   */
  inline const Aws::String& GetTwoWayMediaS3Role() const { return m_twoWayMediaS3Role; }
  inline bool TwoWayMediaS3RoleHasBeenSet() const { return m_twoWayMediaS3RoleHasBeenSet; }
  template <typename TwoWayMediaS3RoleT = Aws::String>
  void SetTwoWayMediaS3Role(TwoWayMediaS3RoleT&& value) {
    m_twoWayMediaS3RoleHasBeenSet = true;
    m_twoWayMediaS3Role = std::forward<TwoWayMediaS3RoleT>(value);
  }
  template <typename TwoWayMediaS3RoleT = Aws::String>
  UpdateRcsAgentRequest& WithTwoWayMediaS3Role(TwoWayMediaS3RoleT&& value) {
    SetTwoWayMediaS3Role(std::forward<TwoWayMediaS3RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of RCS event types to enable for two-way messaging. Pass an empty
   * list to disable all event types. The special value <code>ALL</code> enables all
   * current and future event types and must be the sole element if used.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTwoWayRcsEventsEnabled() const { return m_twoWayRcsEventsEnabled; }
  inline bool TwoWayRcsEventsEnabledHasBeenSet() const { return m_twoWayRcsEventsEnabledHasBeenSet; }
  template <typename TwoWayRcsEventsEnabledT = Aws::Vector<Aws::String>>
  void SetTwoWayRcsEventsEnabled(TwoWayRcsEventsEnabledT&& value) {
    m_twoWayRcsEventsEnabledHasBeenSet = true;
    m_twoWayRcsEventsEnabled = std::forward<TwoWayRcsEventsEnabledT>(value);
  }
  template <typename TwoWayRcsEventsEnabledT = Aws::Vector<Aws::String>>
  UpdateRcsAgentRequest& WithTwoWayRcsEventsEnabled(TwoWayRcsEventsEnabledT&& value) {
    SetTwoWayRcsEventsEnabled(std::forward<TwoWayRcsEventsEnabledT>(value));
    return *this;
  }
  template <typename TwoWayRcsEventsEnabledT = Aws::String>
  UpdateRcsAgentRequest& AddTwoWayRcsEventsEnabled(TwoWayRcsEventsEnabledT&& value) {
    m_twoWayRcsEventsEnabledHasBeenSet = true;
    m_twoWayRcsEventsEnabled.emplace_back(std::forward<TwoWayRcsEventsEnabledT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rcsAgentId;

  bool m_deletionProtectionEnabled{false};

  Aws::String m_optOutListName;

  bool m_selfManagedOptOutsEnabled{false};

  Aws::String m_twoWayChannelArn;

  Aws::String m_twoWayChannelRole;

  bool m_twoWayEnabled{false};

  Aws::String m_twoWayMediaS3BucketName;

  Aws::String m_twoWayMediaS3KeyPrefix;

  Aws::String m_twoWayMediaS3Role;

  Aws::Vector<Aws::String> m_twoWayRcsEventsEnabled;
  bool m_rcsAgentIdHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
  bool m_optOutListNameHasBeenSet = false;
  bool m_selfManagedOptOutsEnabledHasBeenSet = false;
  bool m_twoWayChannelArnHasBeenSet = false;
  bool m_twoWayChannelRoleHasBeenSet = false;
  bool m_twoWayEnabledHasBeenSet = false;
  bool m_twoWayMediaS3BucketNameHasBeenSet = false;
  bool m_twoWayMediaS3KeyPrefixHasBeenSet = false;
  bool m_twoWayMediaS3RoleHasBeenSet = false;
  bool m_twoWayRcsEventsEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
