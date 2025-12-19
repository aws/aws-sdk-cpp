/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wickr/Wickr_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Configuration for the message shredder feature, which securely deletes
 * messages and files from devices to prevent data recovery.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ShredderSettings">AWS
 * API Reference</a></p>
 */
class ShredderSettings {
 public:
  AWS_WICKR_API ShredderSettings() = default;
  AWS_WICKR_API ShredderSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API ShredderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether users can manually trigger the shredder to delete
   * content.</p>
   */
  inline bool GetCanProcessManually() const { return m_canProcessManually; }
  inline bool CanProcessManuallyHasBeenSet() const { return m_canProcessManuallyHasBeenSet; }
  inline void SetCanProcessManually(bool value) {
    m_canProcessManuallyHasBeenSet = true;
    m_canProcessManually = value;
  }
  inline ShredderSettings& WithCanProcessManually(bool value) {
    SetCanProcessManually(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Prevents Wickr data from being recovered by overwriting deleted Wickr data.
   * Valid Values: Must be one of [0, 20, 60, 100]</p>
   */
  inline int GetIntensity() const { return m_intensity; }
  inline bool IntensityHasBeenSet() const { return m_intensityHasBeenSet; }
  inline void SetIntensity(int value) {
    m_intensityHasBeenSet = true;
    m_intensity = value;
  }
  inline ShredderSettings& WithIntensity(int value) {
    SetIntensity(value);
    return *this;
  }
  ///@}
 private:
  bool m_canProcessManually{false};

  int m_intensity{0};
  bool m_canProcessManuallyHasBeenSet = false;
  bool m_intensityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
