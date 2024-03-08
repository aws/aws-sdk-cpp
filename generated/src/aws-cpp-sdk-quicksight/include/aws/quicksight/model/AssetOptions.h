/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DayOfTheWeek.h>
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
    AWS_QUICKSIGHT_API AssetOptions();
    AWS_QUICKSIGHT_API AssetOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the timezone for the analysis.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>Determines the timezone for the analysis.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>Determines the timezone for the analysis.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>Determines the timezone for the analysis.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>Determines the timezone for the analysis.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>Determines the timezone for the analysis.</p>
     */
    inline AssetOptions& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>Determines the timezone for the analysis.</p>
     */
    inline AssetOptions& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>Determines the timezone for the analysis.</p>
     */
    inline AssetOptions& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>Determines the week start day for an analysis.</p>
     */
    inline const DayOfTheWeek& GetWeekStart() const{ return m_weekStart; }

    /**
     * <p>Determines the week start day for an analysis.</p>
     */
    inline bool WeekStartHasBeenSet() const { return m_weekStartHasBeenSet; }

    /**
     * <p>Determines the week start day for an analysis.</p>
     */
    inline void SetWeekStart(const DayOfTheWeek& value) { m_weekStartHasBeenSet = true; m_weekStart = value; }

    /**
     * <p>Determines the week start day for an analysis.</p>
     */
    inline void SetWeekStart(DayOfTheWeek&& value) { m_weekStartHasBeenSet = true; m_weekStart = std::move(value); }

    /**
     * <p>Determines the week start day for an analysis.</p>
     */
    inline AssetOptions& WithWeekStart(const DayOfTheWeek& value) { SetWeekStart(value); return *this;}

    /**
     * <p>Determines the week start day for an analysis.</p>
     */
    inline AssetOptions& WithWeekStart(DayOfTheWeek&& value) { SetWeekStart(std::move(value)); return *this;}

  private:

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    DayOfTheWeek m_weekStart;
    bool m_weekStartHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
