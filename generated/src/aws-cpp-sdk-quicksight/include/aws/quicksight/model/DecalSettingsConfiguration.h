/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DecalSettings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>Decal settings configuration for a column</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DecalSettingsConfiguration">AWS
 * API Reference</a></p>
 */
class DecalSettingsConfiguration {
 public:
  AWS_QUICKSIGHT_API DecalSettingsConfiguration() = default;
  AWS_QUICKSIGHT_API DecalSettingsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DecalSettingsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of up to 50 decal settings.</p>
   */
  inline const Aws::Vector<DecalSettings>& GetCustomDecalSettings() const { return m_customDecalSettings; }
  inline bool CustomDecalSettingsHasBeenSet() const { return m_customDecalSettingsHasBeenSet; }
  template <typename CustomDecalSettingsT = Aws::Vector<DecalSettings>>
  void SetCustomDecalSettings(CustomDecalSettingsT&& value) {
    m_customDecalSettingsHasBeenSet = true;
    m_customDecalSettings = std::forward<CustomDecalSettingsT>(value);
  }
  template <typename CustomDecalSettingsT = Aws::Vector<DecalSettings>>
  DecalSettingsConfiguration& WithCustomDecalSettings(CustomDecalSettingsT&& value) {
    SetCustomDecalSettings(std::forward<CustomDecalSettingsT>(value));
    return *this;
  }
  template <typename CustomDecalSettingsT = DecalSettings>
  DecalSettingsConfiguration& AddCustomDecalSettings(CustomDecalSettingsT&& value) {
    m_customDecalSettingsHasBeenSet = true;
    m_customDecalSettings.emplace_back(std::forward<CustomDecalSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<DecalSettings> m_customDecalSettings;
  bool m_customDecalSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
