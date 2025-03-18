/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/SoftwareUpdatePreferences.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
   * <a>DescribeMaintenanceStartTimeOutput$SoftwareUpdatePreferences</a> </p> </li>
   * <li> <p> <a>DescribeMaintenanceStartTimeOutput$DayOfMonth</a> </p> </li> <li>
   * <p> <a>DescribeMaintenanceStartTimeOutput$DayOfWeek</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceStartTimeOutput$HourOfDay</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceStartTimeOutput$MinuteOfHour</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceStartTimeOutput$Timezone</a> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeMaintenanceStartTimeOutput">AWS
   * API Reference</a></p>
   */
  class DescribeMaintenanceStartTimeResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeMaintenanceStartTimeResult() = default;
    AWS_STORAGEGATEWAY_API DescribeMaintenanceStartTimeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeMaintenanceStartTimeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeMaintenanceStartTimeResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (0 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline int GetHourOfDay() const { return m_hourOfDay; }
    inline void SetHourOfDay(int value) { m_hourOfDayHasBeenSet = true; m_hourOfDay = value; }
    inline DescribeMaintenanceStartTimeResult& WithHourOfDay(int value) { SetHourOfDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (0 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline int GetMinuteOfHour() const { return m_minuteOfHour; }
    inline void SetMinuteOfHour(int value) { m_minuteOfHourHasBeenSet = true; m_minuteOfHour = value; }
    inline DescribeMaintenanceStartTimeResult& WithMinuteOfHour(int value) { SetMinuteOfHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ordinal number between 0 and 6 that represents the day of the week, where
     * 0 represents Sunday and 6 represents Saturday. The day of week is in the time
     * zone of the gateway.</p>
     */
    inline int GetDayOfWeek() const { return m_dayOfWeek; }
    inline void SetDayOfWeek(int value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }
    inline DescribeMaintenanceStartTimeResult& WithDayOfWeek(int value) { SetDayOfWeek(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the month component of the maintenance start time represented as
     * an ordinal number from 1 to 28, where 1 represents the first day of the month.
     * It is not possible to set the maintenance schedule to start on days 29 through
     * 31.</p>
     */
    inline int GetDayOfMonth() const { return m_dayOfMonth; }
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }
    inline DescribeMaintenanceStartTimeResult& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the time zone that is set for the gateway. The start
     * time and day of week specified should be in the time zone of the gateway.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    DescribeMaintenanceStartTimeResult& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of variables indicating the software update preferences for the
     * gateway.</p> <p>Includes <code>AutomaticUpdatePolicy</code> parameter with the
     * following inputs:</p> <p> <code>ALL_VERSIONS</code> - Enables regular gateway
     * maintenance updates.</p> <p> <code>EMERGENCY_VERSIONS_ONLY</code> - Disables
     * regular gateway maintenance updates. The gateway will still receive emergency
     * version updates on rare occasions if necessary to remedy highly critical
     * security or durability issues. You will be notified before an emergency version
     * update is applied. These updates are applied during your gateway's scheduled
     * maintenance window.</p>
     */
    inline const SoftwareUpdatePreferences& GetSoftwareUpdatePreferences() const { return m_softwareUpdatePreferences; }
    template<typename SoftwareUpdatePreferencesT = SoftwareUpdatePreferences>
    void SetSoftwareUpdatePreferences(SoftwareUpdatePreferencesT&& value) { m_softwareUpdatePreferencesHasBeenSet = true; m_softwareUpdatePreferences = std::forward<SoftwareUpdatePreferencesT>(value); }
    template<typename SoftwareUpdatePreferencesT = SoftwareUpdatePreferences>
    DescribeMaintenanceStartTimeResult& WithSoftwareUpdatePreferences(SoftwareUpdatePreferencesT&& value) { SetSoftwareUpdatePreferences(std::forward<SoftwareUpdatePreferencesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMaintenanceStartTimeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    int m_hourOfDay{0};
    bool m_hourOfDayHasBeenSet = false;

    int m_minuteOfHour{0};
    bool m_minuteOfHourHasBeenSet = false;

    int m_dayOfWeek{0};
    bool m_dayOfWeekHasBeenSet = false;

    int m_dayOfMonth{0};
    bool m_dayOfMonthHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    SoftwareUpdatePreferences m_softwareUpdatePreferences;
    bool m_softwareUpdatePreferencesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
