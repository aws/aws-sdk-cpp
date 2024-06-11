﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/TimeGranularity.h>
#include <aws/quicksight/model/RollingDateConfiguration.h>
#include <aws/quicksight/model/DefaultFilterControlConfiguration.h>
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
   * <p>A <code>TimeEqualityFilter</code> filters values that are equal to a given
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TimeEqualityFilter">AWS
   * API Reference</a></p>
   */
  class TimeEqualityFilter
  {
  public:
    AWS_QUICKSIGHT_API TimeEqualityFilter();
    AWS_QUICKSIGHT_API TimeEqualityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TimeEqualityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline const Aws::String& GetFilterId() const{ return m_filterId; }
    inline bool FilterIdHasBeenSet() const { return m_filterIdHasBeenSet; }
    inline void SetFilterId(const Aws::String& value) { m_filterIdHasBeenSet = true; m_filterId = value; }
    inline void SetFilterId(Aws::String&& value) { m_filterIdHasBeenSet = true; m_filterId = std::move(value); }
    inline void SetFilterId(const char* value) { m_filterIdHasBeenSet = true; m_filterId.assign(value); }
    inline TimeEqualityFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}
    inline TimeEqualityFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}
    inline TimeEqualityFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline TimeEqualityFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline TimeEqualityFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a <code>TimeEquality</code> filter.</p> <p>This field is
     * mutually exclusive to <code>RollingDate</code> and
     * <code>ParameterName</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::Utils::DateTime& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::Utils::DateTime&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline TimeEqualityFilter& WithValue(const Aws::Utils::DateTime& value) { SetValue(value); return *this;}
    inline TimeEqualityFilter& WithValue(Aws::Utils::DateTime&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter whose value should be used for the filter value.</p> <p>This
     * field is mutually exclusive to <code>Value</code> and
     * <code>RollingDate</code>.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }
    inline TimeEqualityFilter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}
    inline TimeEqualityFilter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}
    inline TimeEqualityFilter& WithParameterName(const char* value) { SetParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline const TimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(const TimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline void SetTimeGranularity(TimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }
    inline TimeEqualityFilter& WithTimeGranularity(const TimeGranularity& value) { SetTimeGranularity(value); return *this;}
    inline TimeEqualityFilter& WithTimeGranularity(TimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rolling date input for the <code>TimeEquality</code> filter.</p> <p>This
     * field is mutually exclusive to <code>Value</code> and
     * <code>ParameterName</code>.</p>
     */
    inline const RollingDateConfiguration& GetRollingDate() const{ return m_rollingDate; }
    inline bool RollingDateHasBeenSet() const { return m_rollingDateHasBeenSet; }
    inline void SetRollingDate(const RollingDateConfiguration& value) { m_rollingDateHasBeenSet = true; m_rollingDate = value; }
    inline void SetRollingDate(RollingDateConfiguration&& value) { m_rollingDateHasBeenSet = true; m_rollingDate = std::move(value); }
    inline TimeEqualityFilter& WithRollingDate(const RollingDateConfiguration& value) { SetRollingDate(value); return *this;}
    inline TimeEqualityFilter& WithRollingDate(RollingDateConfiguration&& value) { SetRollingDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default configurations for the associated controls. This applies only for
     * filters that are scoped to multiple sheets.</p>
     */
    inline const DefaultFilterControlConfiguration& GetDefaultFilterControlConfiguration() const{ return m_defaultFilterControlConfiguration; }
    inline bool DefaultFilterControlConfigurationHasBeenSet() const { return m_defaultFilterControlConfigurationHasBeenSet; }
    inline void SetDefaultFilterControlConfiguration(const DefaultFilterControlConfiguration& value) { m_defaultFilterControlConfigurationHasBeenSet = true; m_defaultFilterControlConfiguration = value; }
    inline void SetDefaultFilterControlConfiguration(DefaultFilterControlConfiguration&& value) { m_defaultFilterControlConfigurationHasBeenSet = true; m_defaultFilterControlConfiguration = std::move(value); }
    inline TimeEqualityFilter& WithDefaultFilterControlConfiguration(const DefaultFilterControlConfiguration& value) { SetDefaultFilterControlConfiguration(value); return *this;}
    inline TimeEqualityFilter& WithDefaultFilterControlConfiguration(DefaultFilterControlConfiguration&& value) { SetDefaultFilterControlConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    Aws::Utils::DateTime m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    TimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;

    RollingDateConfiguration m_rollingDate;
    bool m_rollingDateHasBeenSet = false;

    DefaultFilterControlConfiguration m_defaultFilterControlConfiguration;
    bool m_defaultFilterControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
