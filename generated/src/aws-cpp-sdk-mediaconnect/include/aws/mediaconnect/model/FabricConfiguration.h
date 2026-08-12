/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FabricLatencyMode.h>

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
 private:
  FabricLatencyMode m_recoveryLatencyMode{FabricLatencyMode::NOT_SET};
  bool m_recoveryLatencyModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
