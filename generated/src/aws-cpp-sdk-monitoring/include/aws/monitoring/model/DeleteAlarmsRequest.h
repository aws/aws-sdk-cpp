/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class DeleteAlarmsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API DeleteAlarmsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAlarms"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The alarms to be deleted. Do not enclose the alarm names in quote marks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmNames() const{ return m_alarmNames; }

    /**
     * <p>The alarms to be deleted. Do not enclose the alarm names in quote marks.</p>
     */
    inline bool AlarmNamesHasBeenSet() const { return m_alarmNamesHasBeenSet; }

    /**
     * <p>The alarms to be deleted. Do not enclose the alarm names in quote marks.</p>
     */
    inline void SetAlarmNames(const Aws::Vector<Aws::String>& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = value; }

    /**
     * <p>The alarms to be deleted. Do not enclose the alarm names in quote marks.</p>
     */
    inline void SetAlarmNames(Aws::Vector<Aws::String>&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = std::move(value); }

    /**
     * <p>The alarms to be deleted. Do not enclose the alarm names in quote marks.</p>
     */
    inline DeleteAlarmsRequest& WithAlarmNames(const Aws::Vector<Aws::String>& value) { SetAlarmNames(value); return *this;}

    /**
     * <p>The alarms to be deleted. Do not enclose the alarm names in quote marks.</p>
     */
    inline DeleteAlarmsRequest& WithAlarmNames(Aws::Vector<Aws::String>&& value) { SetAlarmNames(std::move(value)); return *this;}

    /**
     * <p>The alarms to be deleted. Do not enclose the alarm names in quote marks.</p>
     */
    inline DeleteAlarmsRequest& AddAlarmNames(const Aws::String& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }

    /**
     * <p>The alarms to be deleted. Do not enclose the alarm names in quote marks.</p>
     */
    inline DeleteAlarmsRequest& AddAlarmNames(Aws::String&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The alarms to be deleted. Do not enclose the alarm names in quote marks.</p>
     */
    inline DeleteAlarmsRequest& AddAlarmNames(const char* value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_alarmNames;
    bool m_alarmNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
