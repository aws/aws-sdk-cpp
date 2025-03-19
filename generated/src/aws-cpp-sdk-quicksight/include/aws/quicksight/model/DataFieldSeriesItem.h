/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AxisBinding.h>
#include <aws/quicksight/model/LineChartSeriesSettings.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The data field series item configuration of a line chart.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataFieldSeriesItem">AWS
   * API Reference</a></p>
   */
  class DataFieldSeriesItem
  {
  public:
    AWS_QUICKSIGHT_API DataFieldSeriesItem() = default;
    AWS_QUICKSIGHT_API DataFieldSeriesItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataFieldSeriesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID of the field that you are setting the axis binding to.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    DataFieldSeriesItem& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field value of the field that you are setting the axis binding to.</p>
     */
    inline const Aws::String& GetFieldValue() const { return m_fieldValue; }
    inline bool FieldValueHasBeenSet() const { return m_fieldValueHasBeenSet; }
    template<typename FieldValueT = Aws::String>
    void SetFieldValue(FieldValueT&& value) { m_fieldValueHasBeenSet = true; m_fieldValue = std::forward<FieldValueT>(value); }
    template<typename FieldValueT = Aws::String>
    DataFieldSeriesItem& WithFieldValue(FieldValueT&& value) { SetFieldValue(std::forward<FieldValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The axis that you are binding the field to.</p>
     */
    inline AxisBinding GetAxisBinding() const { return m_axisBinding; }
    inline bool AxisBindingHasBeenSet() const { return m_axisBindingHasBeenSet; }
    inline void SetAxisBinding(AxisBinding value) { m_axisBindingHasBeenSet = true; m_axisBinding = value; }
    inline DataFieldSeriesItem& WithAxisBinding(AxisBinding value) { SetAxisBinding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of line series associated to the
     * field.</p>
     */
    inline const LineChartSeriesSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = LineChartSeriesSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = LineChartSeriesSettings>
    DataFieldSeriesItem& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_fieldValue;
    bool m_fieldValueHasBeenSet = false;

    AxisBinding m_axisBinding{AxisBinding::NOT_SET};
    bool m_axisBindingHasBeenSet = false;

    LineChartSeriesSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
