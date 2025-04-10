/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DayOfTheWeek.h>
#include <aws/quicksight/model/QBusinessInsightsStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualCustomActionDefaults.h>
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
   * <p>An array of analysis level configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetOptions">AWS
   * API Reference</a></p>
   */
  class AssetOptions
  {
  public:
    AWS_QUICKSIGHT_API AssetOptions() = default;
    AWS_QUICKSIGHT_API AssetOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the timezone for the analysis.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    AssetOptions& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the week start day for an analysis.</p>
     */
    inline DayOfTheWeek GetWeekStart() const { return m_weekStart; }
    inline bool WeekStartHasBeenSet() const { return m_weekStartHasBeenSet; }
    inline void SetWeekStart(DayOfTheWeek value) { m_weekStartHasBeenSet = true; m_weekStart = value; }
    inline AssetOptions& WithWeekStart(DayOfTheWeek value) { SetWeekStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether insight summaries from Amazon Q Business are allowed in
     * Dashboard Q&amp;A.</p>
     */
    inline QBusinessInsightsStatus GetQBusinessInsightsStatus() const { return m_qBusinessInsightsStatus; }
    inline bool QBusinessInsightsStatusHasBeenSet() const { return m_qBusinessInsightsStatusHasBeenSet; }
    inline void SetQBusinessInsightsStatus(QBusinessInsightsStatus value) { m_qBusinessInsightsStatusHasBeenSet = true; m_qBusinessInsightsStatus = value; }
    inline AssetOptions& WithQBusinessInsightsStatus(QBusinessInsightsStatus value) { SetQBusinessInsightsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of dataset ARNS to exclude from Dashboard Q&amp;A.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedDataSetArns() const { return m_excludedDataSetArns; }
    inline bool ExcludedDataSetArnsHasBeenSet() const { return m_excludedDataSetArnsHasBeenSet; }
    template<typename ExcludedDataSetArnsT = Aws::Vector<Aws::String>>
    void SetExcludedDataSetArns(ExcludedDataSetArnsT&& value) { m_excludedDataSetArnsHasBeenSet = true; m_excludedDataSetArns = std::forward<ExcludedDataSetArnsT>(value); }
    template<typename ExcludedDataSetArnsT = Aws::Vector<Aws::String>>
    AssetOptions& WithExcludedDataSetArns(ExcludedDataSetArnsT&& value) { SetExcludedDataSetArns(std::forward<ExcludedDataSetArnsT>(value)); return *this;}
    template<typename ExcludedDataSetArnsT = Aws::String>
    AssetOptions& AddExcludedDataSetArns(ExcludedDataSetArnsT&& value) { m_excludedDataSetArnsHasBeenSet = true; m_excludedDataSetArns.emplace_back(std::forward<ExcludedDataSetArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of visual custom actions for the analysis.</p>
     */
    inline const VisualCustomActionDefaults& GetCustomActionDefaults() const { return m_customActionDefaults; }
    inline bool CustomActionDefaultsHasBeenSet() const { return m_customActionDefaultsHasBeenSet; }
    template<typename CustomActionDefaultsT = VisualCustomActionDefaults>
    void SetCustomActionDefaults(CustomActionDefaultsT&& value) { m_customActionDefaultsHasBeenSet = true; m_customActionDefaults = std::forward<CustomActionDefaultsT>(value); }
    template<typename CustomActionDefaultsT = VisualCustomActionDefaults>
    AssetOptions& WithCustomActionDefaults(CustomActionDefaultsT&& value) { SetCustomActionDefaults(std::forward<CustomActionDefaultsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    DayOfTheWeek m_weekStart{DayOfTheWeek::NOT_SET};
    bool m_weekStartHasBeenSet = false;

    QBusinessInsightsStatus m_qBusinessInsightsStatus{QBusinessInsightsStatus::NOT_SET};
    bool m_qBusinessInsightsStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedDataSetArns;
    bool m_excludedDataSetArnsHasBeenSet = false;

    VisualCustomActionDefaults m_customActionDefaults;
    bool m_customActionDefaultsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
