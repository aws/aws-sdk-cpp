/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The desired start time for an <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/APIReference/API_OffPeakWindow.html">off-peak
   * maintenance window</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/WindowStartTime">AWS
   * API Reference</a></p>
   */
  class WindowStartTime
  {
  public:
    AWS_OPENSEARCHSERVICE_API WindowStartTime();
    AWS_OPENSEARCHSERVICE_API WindowStartTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API WindowStartTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start hour of the window in Coordinated Universal Time (UTC), using
     * 24-hour time. For example, <code>17</code> refers to 5:00 P.M. UTC.</p>
     */
    inline long long GetHours() const{ return m_hours; }

    /**
     * <p>The start hour of the window in Coordinated Universal Time (UTC), using
     * 24-hour time. For example, <code>17</code> refers to 5:00 P.M. UTC.</p>
     */
    inline bool HoursHasBeenSet() const { return m_hoursHasBeenSet; }

    /**
     * <p>The start hour of the window in Coordinated Universal Time (UTC), using
     * 24-hour time. For example, <code>17</code> refers to 5:00 P.M. UTC.</p>
     */
    inline void SetHours(long long value) { m_hoursHasBeenSet = true; m_hours = value; }

    /**
     * <p>The start hour of the window in Coordinated Universal Time (UTC), using
     * 24-hour time. For example, <code>17</code> refers to 5:00 P.M. UTC.</p>
     */
    inline WindowStartTime& WithHours(long long value) { SetHours(value); return *this;}


    /**
     * <p>The start minute of the window, in UTC.</p>
     */
    inline long long GetMinutes() const{ return m_minutes; }

    /**
     * <p>The start minute of the window, in UTC.</p>
     */
    inline bool MinutesHasBeenSet() const { return m_minutesHasBeenSet; }

    /**
     * <p>The start minute of the window, in UTC.</p>
     */
    inline void SetMinutes(long long value) { m_minutesHasBeenSet = true; m_minutes = value; }

    /**
     * <p>The start minute of the window, in UTC.</p>
     */
    inline WindowStartTime& WithMinutes(long long value) { SetMinutes(value); return *this;}

  private:

    long long m_hours;
    bool m_hoursHasBeenSet = false;

    long long m_minutes;
    bool m_minutesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
