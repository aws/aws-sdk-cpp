﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/SoftwareUpdatePreferences.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
   * <a>UpdateMaintenanceStartTimeInput$SoftwareUpdatePreferences</a> </p> </li> <li>
   * <p> <a>UpdateMaintenanceStartTimeInput$DayOfMonth</a> </p> </li> <li> <p>
   * <a>UpdateMaintenanceStartTimeInput$DayOfWeek</a> </p> </li> <li> <p>
   * <a>UpdateMaintenanceStartTimeInput$HourOfDay</a> </p> </li> <li> <p>
   * <a>UpdateMaintenanceStartTimeInput$MinuteOfHour</a> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateMaintenanceStartTimeInput">AWS
   * API Reference</a></p>
   */
  class UpdateMaintenanceStartTimeRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateMaintenanceStartTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMaintenanceStartTime"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline UpdateMaintenanceStartTimeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline UpdateMaintenanceStartTimeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline UpdateMaintenanceStartTimeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (00 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline int GetHourOfDay() const{ return m_hourOfDay; }
    inline bool HourOfDayHasBeenSet() const { return m_hourOfDayHasBeenSet; }
    inline void SetHourOfDay(int value) { m_hourOfDayHasBeenSet = true; m_hourOfDay = value; }
    inline UpdateMaintenanceStartTimeRequest& WithHourOfDay(int value) { SetHourOfDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (00 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline int GetMinuteOfHour() const{ return m_minuteOfHour; }
    inline bool MinuteOfHourHasBeenSet() const { return m_minuteOfHourHasBeenSet; }
    inline void SetMinuteOfHour(int value) { m_minuteOfHourHasBeenSet = true; m_minuteOfHour = value; }
    inline UpdateMaintenanceStartTimeRequest& WithMinuteOfHour(int value) { SetMinuteOfHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the week component of the maintenance start time week represented
     * as an ordinal number from 0 to 6, where 0 represents Sunday and 6 represents
     * Saturday.</p>
     */
    inline int GetDayOfWeek() const{ return m_dayOfWeek; }
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
    inline void SetDayOfWeek(int value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }
    inline UpdateMaintenanceStartTimeRequest& WithDayOfWeek(int value) { SetDayOfWeek(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the month component of the maintenance start time represented as
     * an ordinal number from 1 to 28, where 1 represents the first day of the month.
     * It is not possible to set the maintenance schedule to start on days 29 through
     * 31.</p>
     */
    inline int GetDayOfMonth() const{ return m_dayOfMonth; }
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }
    inline UpdateMaintenanceStartTimeRequest& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of variables indicating the software update preferences for the
     * gateway.</p> <p>Includes <code>AutomaticUpdatePolicy</code> field with the
     * following inputs:</p> <p> <code>ALL_VERSIONS</code> - Enables regular gateway
     * maintenance updates.</p> <p> <code>EMERGENCY_VERSIONS_ONLY</code> - Disables
     * regular gateway maintenance updates.</p>
     */
    inline const SoftwareUpdatePreferences& GetSoftwareUpdatePreferences() const{ return m_softwareUpdatePreferences; }
    inline bool SoftwareUpdatePreferencesHasBeenSet() const { return m_softwareUpdatePreferencesHasBeenSet; }
    inline void SetSoftwareUpdatePreferences(const SoftwareUpdatePreferences& value) { m_softwareUpdatePreferencesHasBeenSet = true; m_softwareUpdatePreferences = value; }
    inline void SetSoftwareUpdatePreferences(SoftwareUpdatePreferences&& value) { m_softwareUpdatePreferencesHasBeenSet = true; m_softwareUpdatePreferences = std::move(value); }
    inline UpdateMaintenanceStartTimeRequest& WithSoftwareUpdatePreferences(const SoftwareUpdatePreferences& value) { SetSoftwareUpdatePreferences(value); return *this;}
    inline UpdateMaintenanceStartTimeRequest& WithSoftwareUpdatePreferences(SoftwareUpdatePreferences&& value) { SetSoftwareUpdatePreferences(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    int m_hourOfDay;
    bool m_hourOfDayHasBeenSet = false;

    int m_minuteOfHour;
    bool m_minuteOfHourHasBeenSet = false;

    int m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet = false;

    int m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;

    SoftwareUpdatePreferences m_softwareUpdatePreferences;
    bool m_softwareUpdatePreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
