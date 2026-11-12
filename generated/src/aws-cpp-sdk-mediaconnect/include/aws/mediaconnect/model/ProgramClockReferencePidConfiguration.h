/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Passthrough.h>

#include <utility>

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
 * <p>The configuration settings for the Program Clock Reference (PCR) Packet ID
 * (PID).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ProgramClockReferencePidConfiguration">AWS
 * API Reference</a></p>
 */
class ProgramClockReferencePidConfiguration {
 public:
  AWS_MEDIACONNECT_API ProgramClockReferencePidConfiguration() = default;
  AWS_MEDIACONNECT_API ProgramClockReferencePidConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ProgramClockReferencePidConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The PCR PID configuration that passes through the PCR PID from the
   * source.</p>
   */
  inline const Passthrough& GetPassthrough() const { return m_passthrough; }
  inline bool PassthroughHasBeenSet() const { return m_passthroughHasBeenSet; }
  template <typename PassthroughT = Passthrough>
  void SetPassthrough(PassthroughT&& value) {
    m_passthroughHasBeenSet = true;
    m_passthrough = std::forward<PassthroughT>(value);
  }
  template <typename PassthroughT = Passthrough>
  ProgramClockReferencePidConfiguration& WithPassthrough(PassthroughT&& value) {
    SetPassthrough(std::forward<PassthroughT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The PCR PID to use for the router output. MediaConnect applies this value
   * only when the PCR is carried on its own PID. If the PCR is carried on an
   * elementary stream, this value has no effect. If you also set the PMT PID, the
   * two values must be different.</p>
   */
  inline int GetSet() const { return m_set; }
  inline bool SetHasBeenSet() const { return m_setHasBeenSet; }
  inline void SetSet(int value) {
    m_setHasBeenSet = true;
    m_set = value;
  }
  inline ProgramClockReferencePidConfiguration& WithSet(int value) {
    SetSet(value);
    return *this;
  }
  ///@}
 private:
  Passthrough m_passthrough;

  int m_set{0};
  bool m_passthroughHasBeenSet = false;
  bool m_setHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
