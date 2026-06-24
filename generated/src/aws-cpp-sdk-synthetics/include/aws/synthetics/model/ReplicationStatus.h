/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/ReplicationState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Synthetics {
namespace Model {

/**
 * <p>A structure that contains information about the replication status of a
 * canary replica.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/ReplicationStatus">AWS
 * API Reference</a></p>
 */
class ReplicationStatus {
 public:
  AWS_SYNTHETICS_API ReplicationStatus() = default;
  AWS_SYNTHETICS_API ReplicationStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_SYNTHETICS_API ReplicationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The replication state of the replica. Valid values are
   * <code>InProgress</code>, <code>InSync</code>, and <code>Inconsistent</code>.</p>
   */
  inline ReplicationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ReplicationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ReplicationStatus& WithState(ReplicationState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description that provides more detail about the current replication
   * state.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  ReplicationStatus& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code that provides more detail about the current replication state.</p>
   */
  inline const Aws::String& GetStateReasonCode() const { return m_stateReasonCode; }
  inline bool StateReasonCodeHasBeenSet() const { return m_stateReasonCodeHasBeenSet; }
  template <typename StateReasonCodeT = Aws::String>
  void SetStateReasonCode(StateReasonCodeT&& value) {
    m_stateReasonCodeHasBeenSet = true;
    m_stateReasonCode = std::forward<StateReasonCodeT>(value);
  }
  template <typename StateReasonCodeT = Aws::String>
  ReplicationStatus& WithStateReasonCode(StateReasonCodeT&& value) {
    SetStateReasonCode(std::forward<StateReasonCodeT>(value));
    return *this;
  }
  ///@}
 private:
  ReplicationState m_state{ReplicationState::NOT_SET};

  Aws::String m_stateReason;

  Aws::String m_stateReasonCode;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_stateReasonCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
