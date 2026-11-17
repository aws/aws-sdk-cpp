/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/RemoteSourceActionInvocationStatus.h>

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
 * <p>The run of a source action on one source server as part of a
 * job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/RemoteSourceActionInvocation">AWS
 * API Reference</a></p>
 */
class RemoteSourceActionInvocation {
 public:
  AWS_MGN_API RemoteSourceActionInvocation() = default;
  AWS_MGN_API RemoteSourceActionInvocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API RemoteSourceActionInvocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the source server.</p>
   */
  inline const Aws::String& GetSourceServerArn() const { return m_sourceServerArn; }
  inline bool SourceServerArnHasBeenSet() const { return m_sourceServerArnHasBeenSet; }
  template <typename SourceServerArnT = Aws::String>
  void SetSourceServerArn(SourceServerArnT&& value) {
    m_sourceServerArnHasBeenSet = true;
    m_sourceServerArn = std::forward<SourceServerArnT>(value);
  }
  template <typename SourceServerArnT = Aws::String>
  RemoteSourceActionInvocation& WithSourceServerArn(SourceServerArnT&& value) {
    SetSourceServerArn(std::forward<SourceServerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the source action.</p>
   */
  inline const Aws::String& GetRemoteSourceActionArn() const { return m_remoteSourceActionArn; }
  inline bool RemoteSourceActionArnHasBeenSet() const { return m_remoteSourceActionArnHasBeenSet; }
  template <typename RemoteSourceActionArnT = Aws::String>
  void SetRemoteSourceActionArn(RemoteSourceActionArnT&& value) {
    m_remoteSourceActionArnHasBeenSet = true;
    m_remoteSourceActionArn = std::forward<RemoteSourceActionArnT>(value);
  }
  template <typename RemoteSourceActionArnT = Aws::String>
  RemoteSourceActionInvocation& WithRemoteSourceActionArn(RemoteSourceActionArnT&& value) {
    SetRemoteSourceActionArn(std::forward<RemoteSourceActionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the AWS Systems Manager command that runs the source action on the
   * connector.</p>
   */
  inline const Aws::String& GetSsmCommandInvocationID() const { return m_ssmCommandInvocationID; }
  inline bool SsmCommandInvocationIDHasBeenSet() const { return m_ssmCommandInvocationIDHasBeenSet; }
  template <typename SsmCommandInvocationIDT = Aws::String>
  void SetSsmCommandInvocationID(SsmCommandInvocationIDT&& value) {
    m_ssmCommandInvocationIDHasBeenSet = true;
    m_ssmCommandInvocationID = std::forward<SsmCommandInvocationIDT>(value);
  }
  template <typename SsmCommandInvocationIDT = Aws::String>
  RemoteSourceActionInvocation& WithSsmCommandInvocationID(SsmCommandInvocationIDT&& value) {
    SetSsmCommandInvocationID(std::forward<SsmCommandInvocationIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the invocation.</p>
   */
  inline RemoteSourceActionInvocationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RemoteSourceActionInvocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RemoteSourceActionInvocation& WithStatus(RemoteSourceActionInvocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the command started running.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  RemoteSourceActionInvocation& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the command finished.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  RemoteSourceActionInvocation& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceServerArn;

  Aws::String m_remoteSourceActionArn;

  Aws::String m_ssmCommandInvocationID;

  RemoteSourceActionInvocationStatus m_status{RemoteSourceActionInvocationStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};
  bool m_sourceServerArnHasBeenSet = false;
  bool m_remoteSourceActionArnHasBeenSet = false;
  bool m_ssmCommandInvocationIDHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
