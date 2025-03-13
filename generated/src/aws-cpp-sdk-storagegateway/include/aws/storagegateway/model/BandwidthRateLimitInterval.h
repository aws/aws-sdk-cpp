/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a bandwidth rate limit interval for a gateway. A bandwidth rate
   * limit schedule consists of one or more bandwidth rate limit intervals. A
   * bandwidth rate limit interval defines a period of time on one or more days of
   * the week, during which bandwidth rate limits are specified for uploading,
   * downloading, or both.</p>  <p>FSx File Gateway does not support this
   * feature.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/BandwidthRateLimitInterval">AWS
   * API Reference</a></p>
   */
  class BandwidthRateLimitInterval
  {
  public:
    AWS_STORAGEGATEWAY_API BandwidthRateLimitInterval() = default;
    AWS_STORAGEGATEWAY_API BandwidthRateLimitInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API BandwidthRateLimitInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The hour of the day to start the bandwidth rate limit interval. </p>
     */
    inline int GetStartHourOfDay() const { return m_startHourOfDay; }
    inline bool StartHourOfDayHasBeenSet() const { return m_startHourOfDayHasBeenSet; }
    inline void SetStartHourOfDay(int value) { m_startHourOfDayHasBeenSet = true; m_startHourOfDay = value; }
    inline BandwidthRateLimitInterval& WithStartHourOfDay(int value) { SetStartHourOfDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The minute of the hour to start the bandwidth rate limit interval. The
     * interval begins at the start of that minute. To begin an interval exactly at the
     * start of the hour, use the value <code>0</code>. </p>
     */
    inline int GetStartMinuteOfHour() const { return m_startMinuteOfHour; }
    inline bool StartMinuteOfHourHasBeenSet() const { return m_startMinuteOfHourHasBeenSet; }
    inline void SetStartMinuteOfHour(int value) { m_startMinuteOfHourHasBeenSet = true; m_startMinuteOfHour = value; }
    inline BandwidthRateLimitInterval& WithStartMinuteOfHour(int value) { SetStartMinuteOfHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The hour of the day to end the bandwidth rate limit interval. </p>
     */
    inline int GetEndHourOfDay() const { return m_endHourOfDay; }
    inline bool EndHourOfDayHasBeenSet() const { return m_endHourOfDayHasBeenSet; }
    inline void SetEndHourOfDay(int value) { m_endHourOfDayHasBeenSet = true; m_endHourOfDay = value; }
    inline BandwidthRateLimitInterval& WithEndHourOfDay(int value) { SetEndHourOfDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The minute of the hour to end the bandwidth rate limit interval. </p>
     *  <p> The bandwidth rate limit interval ends at the end of the minute.
     * To end an interval at the end of an hour, use the value <code>59</code>. </p>
     * 
     */
    inline int GetEndMinuteOfHour() const { return m_endMinuteOfHour; }
    inline bool EndMinuteOfHourHasBeenSet() const { return m_endMinuteOfHourHasBeenSet; }
    inline void SetEndMinuteOfHour(int value) { m_endMinuteOfHourHasBeenSet = true; m_endMinuteOfHour = value; }
    inline BandwidthRateLimitInterval& WithEndMinuteOfHour(int value) { SetEndMinuteOfHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The days of the week component of the bandwidth rate limit interval,
     * represented as ordinal numbers from 0 to 6, where 0 represents Sunday and 6
     * represents Saturday. </p>
     */
    inline const Aws::Vector<int>& GetDaysOfWeek() const { return m_daysOfWeek; }
    inline bool DaysOfWeekHasBeenSet() const { return m_daysOfWeekHasBeenSet; }
    template<typename DaysOfWeekT = Aws::Vector<int>>
    void SetDaysOfWeek(DaysOfWeekT&& value) { m_daysOfWeekHasBeenSet = true; m_daysOfWeek = std::forward<DaysOfWeekT>(value); }
    template<typename DaysOfWeekT = Aws::Vector<int>>
    BandwidthRateLimitInterval& WithDaysOfWeek(DaysOfWeekT&& value) { SetDaysOfWeek(std::forward<DaysOfWeekT>(value)); return *this;}
    inline BandwidthRateLimitInterval& AddDaysOfWeek(int value) { m_daysOfWeekHasBeenSet = true; m_daysOfWeek.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The average upload rate limit component of the bandwidth rate limit
     * interval, in bits per second. This field does not appear in the response if the
     * upload rate limit is not set. </p>  <p>For Tape Gateway and Volume
     * Gateway, the minimum value is <code>51200</code>.</p> <p>This field is required
     * for S3 File Gateway, and the minimum value is <code>104857600</code>.</p>
     * 
     */
    inline long long GetAverageUploadRateLimitInBitsPerSec() const { return m_averageUploadRateLimitInBitsPerSec; }
    inline bool AverageUploadRateLimitInBitsPerSecHasBeenSet() const { return m_averageUploadRateLimitInBitsPerSecHasBeenSet; }
    inline void SetAverageUploadRateLimitInBitsPerSec(long long value) { m_averageUploadRateLimitInBitsPerSecHasBeenSet = true; m_averageUploadRateLimitInBitsPerSec = value; }
    inline BandwidthRateLimitInterval& WithAverageUploadRateLimitInBitsPerSec(long long value) { SetAverageUploadRateLimitInBitsPerSec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The average download rate limit component of the bandwidth rate limit
     * interval, in bits per second. This field does not appear in the response if the
     * download rate limit is not set. </p>  <p>S3 File Gateway does not support
     * this feature.</p> 
     */
    inline long long GetAverageDownloadRateLimitInBitsPerSec() const { return m_averageDownloadRateLimitInBitsPerSec; }
    inline bool AverageDownloadRateLimitInBitsPerSecHasBeenSet() const { return m_averageDownloadRateLimitInBitsPerSecHasBeenSet; }
    inline void SetAverageDownloadRateLimitInBitsPerSec(long long value) { m_averageDownloadRateLimitInBitsPerSecHasBeenSet = true; m_averageDownloadRateLimitInBitsPerSec = value; }
    inline BandwidthRateLimitInterval& WithAverageDownloadRateLimitInBitsPerSec(long long value) { SetAverageDownloadRateLimitInBitsPerSec(value); return *this;}
    ///@}
  private:

    int m_startHourOfDay{0};
    bool m_startHourOfDayHasBeenSet = false;

    int m_startMinuteOfHour{0};
    bool m_startMinuteOfHourHasBeenSet = false;

    int m_endHourOfDay{0};
    bool m_endHourOfDayHasBeenSet = false;

    int m_endMinuteOfHour{0};
    bool m_endMinuteOfHourHasBeenSet = false;

    Aws::Vector<int> m_daysOfWeek;
    bool m_daysOfWeekHasBeenSet = false;

    long long m_averageUploadRateLimitInBitsPerSec{0};
    bool m_averageUploadRateLimitInBitsPerSecHasBeenSet = false;

    long long m_averageDownloadRateLimitInBitsPerSec{0};
    bool m_averageDownloadRateLimitInBitsPerSecHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
