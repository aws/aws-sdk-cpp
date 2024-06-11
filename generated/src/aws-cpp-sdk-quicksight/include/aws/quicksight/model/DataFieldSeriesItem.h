﻿/**
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
    AWS_QUICKSIGHT_API DataFieldSeriesItem();
    AWS_QUICKSIGHT_API DataFieldSeriesItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataFieldSeriesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID of the field that you are setting the axis binding to.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }
    inline DataFieldSeriesItem& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline DataFieldSeriesItem& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline DataFieldSeriesItem& WithFieldId(const char* value) { SetFieldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field value of the field that you are setting the axis binding to.</p>
     */
    inline const Aws::String& GetFieldValue() const{ return m_fieldValue; }
    inline bool FieldValueHasBeenSet() const { return m_fieldValueHasBeenSet; }
    inline void SetFieldValue(const Aws::String& value) { m_fieldValueHasBeenSet = true; m_fieldValue = value; }
    inline void SetFieldValue(Aws::String&& value) { m_fieldValueHasBeenSet = true; m_fieldValue = std::move(value); }
    inline void SetFieldValue(const char* value) { m_fieldValueHasBeenSet = true; m_fieldValue.assign(value); }
    inline DataFieldSeriesItem& WithFieldValue(const Aws::String& value) { SetFieldValue(value); return *this;}
    inline DataFieldSeriesItem& WithFieldValue(Aws::String&& value) { SetFieldValue(std::move(value)); return *this;}
    inline DataFieldSeriesItem& WithFieldValue(const char* value) { SetFieldValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The axis that you are binding the field to.</p>
     */
    inline const AxisBinding& GetAxisBinding() const{ return m_axisBinding; }
    inline bool AxisBindingHasBeenSet() const { return m_axisBindingHasBeenSet; }
    inline void SetAxisBinding(const AxisBinding& value) { m_axisBindingHasBeenSet = true; m_axisBinding = value; }
    inline void SetAxisBinding(AxisBinding&& value) { m_axisBindingHasBeenSet = true; m_axisBinding = std::move(value); }
    inline DataFieldSeriesItem& WithAxisBinding(const AxisBinding& value) { SetAxisBinding(value); return *this;}
    inline DataFieldSeriesItem& WithAxisBinding(AxisBinding&& value) { SetAxisBinding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of line series associated to the
     * field.</p>
     */
    inline const LineChartSeriesSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const LineChartSeriesSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(LineChartSeriesSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline DataFieldSeriesItem& WithSettings(const LineChartSeriesSettings& value) { SetSettings(value); return *this;}
    inline DataFieldSeriesItem& WithSettings(LineChartSeriesSettings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_fieldValue;
    bool m_fieldValueHasBeenSet = false;

    AxisBinding m_axisBinding;
    bool m_axisBindingHasBeenSet = false;

    LineChartSeriesSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
