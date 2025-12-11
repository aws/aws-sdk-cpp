/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BarChartSeriesSettings.h>

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
 * <p>The field series item configuration of a
 * <code>BarChartVisual</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FieldBarSeriesItem">AWS
 * API Reference</a></p>
 */
class FieldBarSeriesItem {
 public:
  AWS_QUICKSIGHT_API FieldBarSeriesItem() = default;
  AWS_QUICKSIGHT_API FieldBarSeriesItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API FieldBarSeriesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Field ID of the field for which you are setting the series configuration.</p>
   */
  inline const Aws::String& GetFieldId() const { return m_fieldId; }
  inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
  template <typename FieldIdT = Aws::String>
  void SetFieldId(FieldIdT&& value) {
    m_fieldIdHasBeenSet = true;
    m_fieldId = std::forward<FieldIdT>(value);
  }
  template <typename FieldIdT = Aws::String>
  FieldBarSeriesItem& WithFieldId(FieldIdT&& value) {
    SetFieldId(std::forward<FieldIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options that determine the presentation of bar series associated to the
   * field.</p>
   */
  inline const BarChartSeriesSettings& GetSettings() const { return m_settings; }
  inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
  template <typename SettingsT = BarChartSeriesSettings>
  void SetSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings = std::forward<SettingsT>(value);
  }
  template <typename SettingsT = BarChartSeriesSettings>
  FieldBarSeriesItem& WithSettings(SettingsT&& value) {
    SetSettings(std::forward<SettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fieldId;

  BarChartSeriesSettings m_settings;
  bool m_fieldIdHasBeenSet = false;
  bool m_settingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
