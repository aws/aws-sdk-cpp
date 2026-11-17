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
 * <p>The latest invocation result of a source action on a source
 * server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/RemoteSourceActionInvocationResult">AWS
 * API Reference</a></p>
 */
class RemoteSourceActionInvocationResult {
 public:
  AWS_MGN_API RemoteSourceActionInvocationResult() = default;
  AWS_MGN_API RemoteSourceActionInvocationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API RemoteSourceActionInvocationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the source action.</p>
   */
  inline const Aws::String& GetRemoteSourceActionID() const { return m_remoteSourceActionID; }
  inline bool RemoteSourceActionIDHasBeenSet() const { return m_remoteSourceActionIDHasBeenSet; }
  template <typename RemoteSourceActionIDT = Aws::String>
  void SetRemoteSourceActionID(RemoteSourceActionIDT&& value) {
    m_remoteSourceActionIDHasBeenSet = true;
    m_remoteSourceActionID = std::forward<RemoteSourceActionIDT>(value);
  }
  template <typename RemoteSourceActionIDT = Aws::String>
  RemoteSourceActionInvocationResult& WithRemoteSourceActionID(RemoteSourceActionIDT&& value) {
    SetRemoteSourceActionID(std::forward<RemoteSourceActionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the account that owns the connector that ran the source action.</p>
   */
  inline const Aws::String& GetConnectorOwnerAccountID() const { return m_connectorOwnerAccountID; }
  inline bool ConnectorOwnerAccountIDHasBeenSet() const { return m_connectorOwnerAccountIDHasBeenSet; }
  template <typename ConnectorOwnerAccountIDT = Aws::String>
  void SetConnectorOwnerAccountID(ConnectorOwnerAccountIDT&& value) {
    m_connectorOwnerAccountIDHasBeenSet = true;
    m_connectorOwnerAccountID = std::forward<ConnectorOwnerAccountIDT>(value);
  }
  template <typename ConnectorOwnerAccountIDT = Aws::String>
  RemoteSourceActionInvocationResult& WithConnectorOwnerAccountID(ConnectorOwnerAccountIDT&& value) {
    SetConnectorOwnerAccountID(std::forward<ConnectorOwnerAccountIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the latest invocation.</p>
   */
  inline RemoteSourceActionInvocationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RemoteSourceActionInvocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RemoteSourceActionInvocationResult& WithStatus(RemoteSourceActionInvocationStatus value) {
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
  RemoteSourceActionInvocationResult& WithStartedAt(StartedAtT&& value) {
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
  RemoteSourceActionInvocationResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_remoteSourceActionID;

  Aws::String m_connectorOwnerAccountID;

  RemoteSourceActionInvocationStatus m_status{RemoteSourceActionInvocationStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};
  bool m_remoteSourceActionIDHasBeenSet = false;
  bool m_connectorOwnerAccountIDHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
