/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Polly {
namespace Model {

/**
 * <p>Configuration that controls when synthesized audio data is sent on the output
 * stream.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/FlushStreamConfiguration">AWS
 * API Reference</a></p>
 */
class FlushStreamConfiguration {
 public:
  AWS_POLLY_API FlushStreamConfiguration() = default;
  AWS_POLLY_API FlushStreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API FlushStreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether to force the synthesis engine to immediately write buffered
   * audio data to the output stream.</p>
   */
  inline bool GetForce() const { return m_force; }
  inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
  inline void SetForce(bool value) {
    m_forceHasBeenSet = true;
    m_force = value;
  }
  inline FlushStreamConfiguration& WithForce(bool value) {
    SetForce(value);
    return *this;
  }
  ///@}
 private:
  bool m_force{false};
  bool m_forceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
