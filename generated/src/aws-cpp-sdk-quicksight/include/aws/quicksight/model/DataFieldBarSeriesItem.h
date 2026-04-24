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
 * <p>The data field series item configuration of a
 * <code>BarChartVisual</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataFieldBarSeriesItem">AWS
 * API Reference</a></p>
 */
class DataFieldBarSeriesItem {
 public:
  AWS_QUICKSIGHT_API DataFieldBarSeriesItem() = default;
  AWS_QUICKSIGHT_API DataFieldBarSeriesItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataFieldBarSeriesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Field ID of the field that you are setting the series configuration for.</p>
   */
  inline const Aws::String& GetFieldId() const { return m_fieldId; }
  inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
  template <typename FieldIdT = Aws::String>
  void SetFieldId(FieldIdT&& value) {
    m_fieldIdHasBeenSet = true;
    m_fieldId = std::forward<FieldIdT>(value);
  }
  template <typename FieldIdT = Aws::String>
  DataFieldBarSeriesItem& WithFieldId(FieldIdT&& value) {
    SetFieldId(std::forward<FieldIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Field value of the field that you are setting the series configuration
   * for.</p>
   */
  inline const Aws::String& GetFieldValue() const { return m_fieldValue; }
  inline bool FieldValueHasBeenSet() const { return m_fieldValueHasBeenSet; }
  template <typename FieldValueT = Aws::String>
  void SetFieldValue(FieldValueT&& value) {
    m_fieldValueHasBeenSet = true;
    m_fieldValue = std::forward<FieldValueT>(value);
  }
  template <typename FieldValueT = Aws::String>
  DataFieldBarSeriesItem& WithFieldValue(FieldValueT&& value) {
    SetFieldValue(std::forward<FieldValueT>(value));
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
  DataFieldBarSeriesItem& WithSettings(SettingsT&& value) {
    SetSettings(std::forward<SettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fieldId;

  Aws::String m_fieldValue;

  BarChartSeriesSettings m_settings;
  bool m_fieldIdHasBeenSet = false;
  bool m_fieldValueHasBeenSet = false;
  bool m_settingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
