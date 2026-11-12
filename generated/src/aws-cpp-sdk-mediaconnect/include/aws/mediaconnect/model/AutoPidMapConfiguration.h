/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The configuration settings for automatic Packet ID (PID) assignment. These
 * settings apply to any PID mapping rule that uses the <code>auto</code> action,
 * including the default action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AutoPidMapConfiguration">AWS
 * API Reference</a></p>
 */
class AutoPidMapConfiguration {
 public:
  AWS_MEDIACONNECT_API AutoPidMapConfiguration() = default;
  AWS_MEDIACONNECT_API AutoPidMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API AutoPidMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The first PID in the range for automatic PID assignment.</p>
   */
  inline int GetStartPid() const { return m_startPid; }
  inline bool StartPidHasBeenSet() const { return m_startPidHasBeenSet; }
  inline void SetStartPid(int value) {
    m_startPidHasBeenSet = true;
    m_startPid = value;
  }
  inline AutoPidMapConfiguration& WithStartPid(int value) {
    SetStartPid(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of PIDs in the range for automatic PID assignment.</p>
   */
  inline int GetPidsPerProgram() const { return m_pidsPerProgram; }
  inline bool PidsPerProgramHasBeenSet() const { return m_pidsPerProgramHasBeenSet; }
  inline void SetPidsPerProgram(int value) {
    m_pidsPerProgramHasBeenSet = true;
    m_pidsPerProgram = value;
  }
  inline AutoPidMapConfiguration& WithPidsPerProgram(int value) {
    SetPidsPerProgram(value);
    return *this;
  }
  ///@}
 private:
  int m_startPid{0};

  int m_pidsPerProgram{0};
  bool m_startPidHasBeenSet = false;
  bool m_pidsPerProgramHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
