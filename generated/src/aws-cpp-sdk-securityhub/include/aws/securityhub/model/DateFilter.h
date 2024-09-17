/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/DateRange.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A date filter for querying findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DateFilter">AWS
   * API Reference</a></p>
   */
  class DateFilter
  {
  public:
    AWS_SECURITYHUB_API DateFilter();
    AWS_SECURITYHUB_API DateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API DateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp that provides the start date for the date filter.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetStart() const{ return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }
    inline DateFilter& WithStart(const Aws::String& value) { SetStart(value); return *this;}
    inline DateFilter& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}
    inline DateFilter& WithStart(const char* value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that provides the end date for the date filter.</p> <p>This field
     * accepts only the specified formats. Timestamps can end with <code>Z</code> or
     * <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetEnd() const{ return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }
    inline DateFilter& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}
    inline DateFilter& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}
    inline DateFilter& WithEnd(const char* value) { SetEnd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A date range for the date filter.</p>
     */
    inline const DateRange& GetDateRange() const{ return m_dateRange; }
    inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }
    inline void SetDateRange(const DateRange& value) { m_dateRangeHasBeenSet = true; m_dateRange = value; }
    inline void SetDateRange(DateRange&& value) { m_dateRangeHasBeenSet = true; m_dateRange = std::move(value); }
    inline DateFilter& WithDateRange(const DateRange& value) { SetDateRange(value); return *this;}
    inline DateFilter& WithDateRange(DateRange&& value) { SetDateRange(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_start;
    bool m_startHasBeenSet = false;

    Aws::String m_end;
    bool m_endHasBeenSet = false;

    DateRange m_dateRange;
    bool m_dateRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
