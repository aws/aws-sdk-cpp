/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/RemoteSourceActionJobStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>A job that runs a source action on source servers through a
 * connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/RemoteSourceActionJob">AWS
 * API Reference</a></p>
 */
class RemoteSourceActionJob {
 public:
  AWS_MGN_API RemoteSourceActionJob() = default;
  AWS_MGN_API RemoteSourceActionJob(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API RemoteSourceActionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the job.</p>
   */
  inline const Aws::String& GetRemoteSourceActionJobID() const { return m_remoteSourceActionJobID; }
  inline bool RemoteSourceActionJobIDHasBeenSet() const { return m_remoteSourceActionJobIDHasBeenSet; }
  template <typename RemoteSourceActionJobIDT = Aws::String>
  void SetRemoteSourceActionJobID(RemoteSourceActionJobIDT&& value) {
    m_remoteSourceActionJobIDHasBeenSet = true;
    m_remoteSourceActionJobID = std::forward<RemoteSourceActionJobIDT>(value);
  }
  template <typename RemoteSourceActionJobIDT = Aws::String>
  RemoteSourceActionJob& WithRemoteSourceActionJobID(RemoteSourceActionJobIDT&& value) {
    SetRemoteSourceActionJobID(std::forward<RemoteSourceActionJobIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the job.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RemoteSourceActionJob& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the job.</p>
   */
  inline RemoteSourceActionJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RemoteSourceActionJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RemoteSourceActionJob& WithStatus(RemoteSourceActionJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the source servers that the job runs on.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSourceServerArns() const { return m_sourceServerArns; }
  inline bool SourceServerArnsHasBeenSet() const { return m_sourceServerArnsHasBeenSet; }
  template <typename SourceServerArnsT = Aws::Vector<Aws::String>>
  void SetSourceServerArns(SourceServerArnsT&& value) {
    m_sourceServerArnsHasBeenSet = true;
    m_sourceServerArns = std::forward<SourceServerArnsT>(value);
  }
  template <typename SourceServerArnsT = Aws::Vector<Aws::String>>
  RemoteSourceActionJob& WithSourceServerArns(SourceServerArnsT&& value) {
    SetSourceServerArns(std::forward<SourceServerArnsT>(value));
    return *this;
  }
  template <typename SourceServerArnsT = Aws::String>
  RemoteSourceActionJob& AddSourceServerArns(SourceServerArnsT&& value) {
    m_sourceServerArnsHasBeenSet = true;
    m_sourceServerArns.emplace_back(std::forward<SourceServerArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the source actions that the job runs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemoteSourceActionArns() const { return m_remoteSourceActionArns; }
  inline bool RemoteSourceActionArnsHasBeenSet() const { return m_remoteSourceActionArnsHasBeenSet; }
  template <typename RemoteSourceActionArnsT = Aws::Vector<Aws::String>>
  void SetRemoteSourceActionArns(RemoteSourceActionArnsT&& value) {
    m_remoteSourceActionArnsHasBeenSet = true;
    m_remoteSourceActionArns = std::forward<RemoteSourceActionArnsT>(value);
  }
  template <typename RemoteSourceActionArnsT = Aws::Vector<Aws::String>>
  RemoteSourceActionJob& WithRemoteSourceActionArns(RemoteSourceActionArnsT&& value) {
    SetRemoteSourceActionArns(std::forward<RemoteSourceActionArnsT>(value));
    return *this;
  }
  template <typename RemoteSourceActionArnsT = Aws::String>
  RemoteSourceActionJob& AddRemoteSourceActionArns(RemoteSourceActionArnsT&& value) {
    m_remoteSourceActionArnsHasBeenSet = true;
    m_remoteSourceActionArns.emplace_back(std::forward<RemoteSourceActionArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the connector that runs the job.</p>
   */
  inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
  inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
  template <typename ConnectorArnT = Aws::String>
  void SetConnectorArn(ConnectorArnT&& value) {
    m_connectorArnHasBeenSet = true;
    m_connectorArn = std::forward<ConnectorArnT>(value);
  }
  template <typename ConnectorArnT = Aws::String>
  RemoteSourceActionJob& WithConnectorArn(ConnectorArnT&& value) {
    SetConnectorArn(std::forward<ConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the job started running.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  RemoteSourceActionJob& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the job completed or failed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  RemoteSourceActionJob& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the job failed.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  RemoteSourceActionJob& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags assigned to the job.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RemoteSourceActionJob& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RemoteSourceActionJob& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_remoteSourceActionJobID;

  Aws::String m_arn;

  RemoteSourceActionJobStatus m_status{RemoteSourceActionJobStatus::NOT_SET};

  Aws::Vector<Aws::String> m_sourceServerArns;

  Aws::Vector<Aws::String> m_remoteSourceActionArns;

  Aws::String m_connectorArn;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::String m_statusReason;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_remoteSourceActionJobIDHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_sourceServerArnsHasBeenSet = false;
  bool m_remoteSourceActionArnsHasBeenSet = false;
  bool m_connectorArnHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
