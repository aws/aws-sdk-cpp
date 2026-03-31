/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsAgentStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {
class CreateRcsAgentResult {
 public:
  AWS_PINPOINTSMSVOICEV2_API CreateRcsAgentResult() = default;
  AWS_PINPOINTSMSVOICEV2_API CreateRcsAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PINPOINTSMSVOICEV2_API CreateRcsAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the newly created RCS agent.</p>
   */
  inline const Aws::String& GetRcsAgentArn() const { return m_rcsAgentArn; }
  template <typename RcsAgentArnT = Aws::String>
  void SetRcsAgentArn(RcsAgentArnT&& value) {
    m_rcsAgentArnHasBeenSet = true;
    m_rcsAgentArn = std::forward<RcsAgentArnT>(value);
  }
  template <typename RcsAgentArnT = Aws::String>
  CreateRcsAgentResult& WithRcsAgentArn(RcsAgentArnT&& value) {
    SetRcsAgentArn(std::forward<RcsAgentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the RCS agent.</p>
   */
  inline const Aws::String& GetRcsAgentId() const { return m_rcsAgentId; }
  template <typename RcsAgentIdT = Aws::String>
  void SetRcsAgentId(RcsAgentIdT&& value) {
    m_rcsAgentIdHasBeenSet = true;
    m_rcsAgentId = std::forward<RcsAgentIdT>(value);
  }
  template <typename RcsAgentIdT = Aws::String>
  CreateRcsAgentResult& WithRcsAgentId(RcsAgentIdT&& value) {
    SetRcsAgentId(std::forward<RcsAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the RCS agent.</p>
   */
  inline RcsAgentStatus GetStatus() const { return m_status; }
  inline void SetStatus(RcsAgentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateRcsAgentResult& WithStatus(RcsAgentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to true deletion protection is enabled. By default this is set to
   * false.</p>
   */
  inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
  inline void SetDeletionProtectionEnabled(bool value) {
    m_deletionProtectionEnabledHasBeenSet = true;
    m_deletionProtectionEnabled = value;
  }
  inline CreateRcsAgentResult& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the OptOutList associated with the RCS agent.</p>
   */
  inline const Aws::String& GetOptOutListName() const { return m_optOutListName; }
  template <typename OptOutListNameT = Aws::String>
  void SetOptOutListName(OptOutListNameT&& value) {
    m_optOutListNameHasBeenSet = true;
    m_optOutListName = std::forward<OptOutListNameT>(value);
  }
  template <typename OptOutListNameT = Aws::String>
  CreateRcsAgentResult& WithOptOutListName(OptOutListNameT&& value) {
    SetOptOutListName(std::forward<OptOutListNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the RCS agent was created, in <a
   * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  void SetCreatedTimestamp(CreatedTimestampT&& value) {
    m_createdTimestampHasBeenSet = true;
    m_createdTimestamp = std::forward<CreatedTimestampT>(value);
  }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  CreateRcsAgentResult& WithCreatedTimestamp(CreatedTimestampT&& value) {
    SetCreatedTimestamp(std::forward<CreatedTimestampT>(value));
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
  inline void SetSelfManagedOptOutsEnabled(bool value) {
    m_selfManagedOptOutsEnabledHasBeenSet = true;
    m_selfManagedOptOutsEnabled = value;
  }
  inline CreateRcsAgentResult& WithSelfManagedOptOutsEnabled(bool value) {
    SetSelfManagedOptOutsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
   */
  inline const Aws::String& GetTwoWayChannelArn() const { return m_twoWayChannelArn; }
  template <typename TwoWayChannelArnT = Aws::String>
  void SetTwoWayChannelArn(TwoWayChannelArnT&& value) {
    m_twoWayChannelArnHasBeenSet = true;
    m_twoWayChannelArn = std::forward<TwoWayChannelArnT>(value);
  }
  template <typename TwoWayChannelArnT = Aws::String>
  CreateRcsAgentResult& WithTwoWayChannelArn(TwoWayChannelArnT&& value) {
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
  template <typename TwoWayChannelRoleT = Aws::String>
  void SetTwoWayChannelRole(TwoWayChannelRoleT&& value) {
    m_twoWayChannelRoleHasBeenSet = true;
    m_twoWayChannelRole = std::forward<TwoWayChannelRoleT>(value);
  }
  template <typename TwoWayChannelRoleT = Aws::String>
  CreateRcsAgentResult& WithTwoWayChannelRole(TwoWayChannelRoleT&& value) {
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
  inline void SetTwoWayEnabled(bool value) {
    m_twoWayEnabledHasBeenSet = true;
    m_twoWayEnabled = value;
  }
  inline CreateRcsAgentResult& WithTwoWayEnabled(bool value) {
    SetTwoWayEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of tags (key and value pairs) associated with the RCS agent.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateRcsAgentResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateRcsAgentResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
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
  CreateRcsAgentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_rcsAgentArn;

  Aws::String m_rcsAgentId;

  RcsAgentStatus m_status{RcsAgentStatus::NOT_SET};

  bool m_deletionProtectionEnabled{false};

  Aws::String m_optOutListName;

  Aws::Utils::DateTime m_createdTimestamp{};

  bool m_selfManagedOptOutsEnabled{false};

  Aws::String m_twoWayChannelArn;

  Aws::String m_twoWayChannelRole;

  bool m_twoWayEnabled{false};

  Aws::Vector<Tag> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rcsAgentArnHasBeenSet = false;
  bool m_rcsAgentIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
  bool m_optOutListNameHasBeenSet = false;
  bool m_createdTimestampHasBeenSet = false;
  bool m_selfManagedOptOutsEnabledHasBeenSet = false;
  bool m_twoWayChannelArnHasBeenSet = false;
  bool m_twoWayChannelRoleHasBeenSet = false;
  bool m_twoWayEnabledHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
