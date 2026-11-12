/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FabricLatencyMode.h>
#include <aws/mediaconnect/model/FabricSwitchingConfiguration.h>
#include <aws/mediaconnect/model/FabricSwitchingMode.h>

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
 * <p>The fabric configuration settings for the router output.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/FabricConfiguration">AWS
 * API Reference</a></p>
 */
class FabricConfiguration {
 public:
  AWS_MEDIACONNECT_API FabricConfiguration() = default;
  AWS_MEDIACONNECT_API FabricConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API FabricConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recovery latency mode for the router fabric connection. Valid values
   * include the following:</p> <ul> <li> <p> <code>BALANCED</code> (default) –
   * Optimizes for stream quality.</p> </li> <li> <p> <code>LOW_LATENCY</code> –
   * Reduces latency at the potential cost of stream quality under adverse network
   * conditions.</p> </li> </ul>
   */
  inline FabricLatencyMode GetRecoveryLatencyMode() const { return m_recoveryLatencyMode; }
  inline bool RecoveryLatencyModeHasBeenSet() const { return m_recoveryLatencyModeHasBeenSet; }
  inline void SetRecoveryLatencyMode(FabricLatencyMode value) {
    m_recoveryLatencyModeHasBeenSet = true;
    m_recoveryLatencyMode = value;
  }
  inline FabricConfiguration& WithRecoveryLatencyMode(FabricLatencyMode value) {
    SetRecoveryLatencyMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The switching mode that the router output uses when it switches to a new
   * router input. Valid values include the following:</p> <ul> <li> <p>
   * <code>IMMEDIATE</code> (default) – Switches to the new router input
   * immediately.</p> </li> <li> <p> <code>KEY_FRAME</code> – Waits for a key frame
   * on the new router input before it switches.</p> </li> </ul> <p>If you specify
   * it, it must match the switching configuration.</p>
   */
  inline FabricSwitchingMode GetSwitchingMode() const { return m_switchingMode; }
  inline bool SwitchingModeHasBeenSet() const { return m_switchingModeHasBeenSet; }
  inline void SetSwitchingMode(FabricSwitchingMode value) {
    m_switchingModeHasBeenSet = true;
    m_switchingMode = value;
  }
  inline FabricConfiguration& WithSwitchingMode(FabricSwitchingMode value) {
    SetSwitchingMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the switching mode.</p>
   */
  inline const FabricSwitchingConfiguration& GetSwitchingConfiguration() const { return m_switchingConfiguration; }
  inline bool SwitchingConfigurationHasBeenSet() const { return m_switchingConfigurationHasBeenSet; }
  template <typename SwitchingConfigurationT = FabricSwitchingConfiguration>
  void SetSwitchingConfiguration(SwitchingConfigurationT&& value) {
    m_switchingConfigurationHasBeenSet = true;
    m_switchingConfiguration = std::forward<SwitchingConfigurationT>(value);
  }
  template <typename SwitchingConfigurationT = FabricSwitchingConfiguration>
  FabricConfiguration& WithSwitchingConfiguration(SwitchingConfigurationT&& value) {
    SetSwitchingConfiguration(std::forward<SwitchingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  FabricLatencyMode m_recoveryLatencyMode{FabricLatencyMode::NOT_SET};

  FabricSwitchingMode m_switchingMode{FabricSwitchingMode::NOT_SET};

  FabricSwitchingConfiguration m_switchingConfiguration;
  bool m_recoveryLatencyModeHasBeenSet = false;
  bool m_switchingModeHasBeenSet = false;
  bool m_switchingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
