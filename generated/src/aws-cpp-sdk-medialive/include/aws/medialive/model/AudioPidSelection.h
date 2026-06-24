/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioPid.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Audio Pid Selection<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioPidSelection">AWS
 * API Reference</a></p>
 */
class AudioPidSelection {
 public:
  AWS_MEDIALIVE_API AudioPidSelection() = default;
  AWS_MEDIALIVE_API AudioPidSelection(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API AudioPidSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Selects a specific PID from within a source.
   */
  inline int GetPid() const { return m_pid; }
  inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
  inline void SetPid(int value) {
    m_pidHasBeenSet = true;
    m_pid = value;
  }
  inline AudioPidSelection& WithPid(int value) {
    SetPid(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Selects one or more unique PIDs from within a source.
When using 'pids', you can
   * specify per-PID audio pre-mixer settings.
   */
  inline const Aws::Vector<AudioPid>& GetPids() const { return m_pids; }
  inline bool PidsHasBeenSet() const { return m_pidsHasBeenSet; }
  template <typename PidsT = Aws::Vector<AudioPid>>
  void SetPids(PidsT&& value) {
    m_pidsHasBeenSet = true;
    m_pids = std::forward<PidsT>(value);
  }
  template <typename PidsT = Aws::Vector<AudioPid>>
  AudioPidSelection& WithPids(PidsT&& value) {
    SetPids(std::forward<PidsT>(value));
    return *this;
  }
  template <typename PidsT = AudioPid>
  AudioPidSelection& AddPids(PidsT&& value) {
    m_pidsHasBeenSet = true;
    m_pids.emplace_back(std::forward<PidsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_pid{0};

  Aws::Vector<AudioPid> m_pids;
  bool m_pidHasBeenSet = false;
  bool m_pidsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
