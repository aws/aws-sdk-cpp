/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/HistoryItemType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/ScanBy.h>
#include <aws/monitoring/model/AlarmType.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class DescribeAlarmHistoryRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API DescribeAlarmHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlarmHistory"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The name of the alarm.</p>
     */
    inline DescribeAlarmHistoryRequest& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The name of the alarm.</p>
     */
    inline DescribeAlarmHistoryRequest& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm.</p>
     */
    inline DescribeAlarmHistoryRequest& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}


    /**
     * <p>Use this parameter to specify whether you want the operation to return metric
     * alarms or composite alarms. If you omit this parameter, only metric alarms are
     * returned.</p>
     */
    inline const Aws::Vector<AlarmType>& GetAlarmTypes() const{ return m_alarmTypes; }

    /**
     * <p>Use this parameter to specify whether you want the operation to return metric
     * alarms or composite alarms. If you omit this parameter, only metric alarms are
     * returned.</p>
     */
    inline bool AlarmTypesHasBeenSet() const { return m_alarmTypesHasBeenSet; }

    /**
     * <p>Use this parameter to specify whether you want the operation to return metric
     * alarms or composite alarms. If you omit this parameter, only metric alarms are
     * returned.</p>
     */
    inline void SetAlarmTypes(const Aws::Vector<AlarmType>& value) { m_alarmTypesHasBeenSet = true; m_alarmTypes = value; }

    /**
     * <p>Use this parameter to specify whether you want the operation to return metric
     * alarms or composite alarms. If you omit this parameter, only metric alarms are
     * returned.</p>
     */
    inline void SetAlarmTypes(Aws::Vector<AlarmType>&& value) { m_alarmTypesHasBeenSet = true; m_alarmTypes = std::move(value); }

    /**
     * <p>Use this parameter to specify whether you want the operation to return metric
     * alarms or composite alarms. If you omit this parameter, only metric alarms are
     * returned.</p>
     */
    inline DescribeAlarmHistoryRequest& WithAlarmTypes(const Aws::Vector<AlarmType>& value) { SetAlarmTypes(value); return *this;}

    /**
     * <p>Use this parameter to specify whether you want the operation to return metric
     * alarms or composite alarms. If you omit this parameter, only metric alarms are
     * returned.</p>
     */
    inline DescribeAlarmHistoryRequest& WithAlarmTypes(Aws::Vector<AlarmType>&& value) { SetAlarmTypes(std::move(value)); return *this;}

    /**
     * <p>Use this parameter to specify whether you want the operation to return metric
     * alarms or composite alarms. If you omit this parameter, only metric alarms are
     * returned.</p>
     */
    inline DescribeAlarmHistoryRequest& AddAlarmTypes(const AlarmType& value) { m_alarmTypesHasBeenSet = true; m_alarmTypes.push_back(value); return *this; }

    /**
     * <p>Use this parameter to specify whether you want the operation to return metric
     * alarms or composite alarms. If you omit this parameter, only metric alarms are
     * returned.</p>
     */
    inline DescribeAlarmHistoryRequest& AddAlarmTypes(AlarmType&& value) { m_alarmTypesHasBeenSet = true; m_alarmTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of alarm histories to retrieve.</p>
     */
    inline const HistoryItemType& GetHistoryItemType() const{ return m_historyItemType; }

    /**
     * <p>The type of alarm histories to retrieve.</p>
     */
    inline bool HistoryItemTypeHasBeenSet() const { return m_historyItemTypeHasBeenSet; }

    /**
     * <p>The type of alarm histories to retrieve.</p>
     */
    inline void SetHistoryItemType(const HistoryItemType& value) { m_historyItemTypeHasBeenSet = true; m_historyItemType = value; }

    /**
     * <p>The type of alarm histories to retrieve.</p>
     */
    inline void SetHistoryItemType(HistoryItemType&& value) { m_historyItemTypeHasBeenSet = true; m_historyItemType = std::move(value); }

    /**
     * <p>The type of alarm histories to retrieve.</p>
     */
    inline DescribeAlarmHistoryRequest& WithHistoryItemType(const HistoryItemType& value) { SetHistoryItemType(value); return *this;}

    /**
     * <p>The type of alarm histories to retrieve.</p>
     */
    inline DescribeAlarmHistoryRequest& WithHistoryItemType(HistoryItemType&& value) { SetHistoryItemType(std::move(value)); return *this;}


    /**
     * <p>The starting date to retrieve alarm history.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The starting date to retrieve alarm history.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The starting date to retrieve alarm history.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The starting date to retrieve alarm history.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The starting date to retrieve alarm history.</p>
     */
    inline DescribeAlarmHistoryRequest& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The starting date to retrieve alarm history.</p>
     */
    inline DescribeAlarmHistoryRequest& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>The ending date to retrieve alarm history.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The ending date to retrieve alarm history.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The ending date to retrieve alarm history.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The ending date to retrieve alarm history.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The ending date to retrieve alarm history.</p>
     */
    inline DescribeAlarmHistoryRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The ending date to retrieve alarm history.</p>
     */
    inline DescribeAlarmHistoryRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>The maximum number of alarm history records to retrieve.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of alarm history records to retrieve.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of alarm history records to retrieve.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of alarm history records to retrieve.</p>
     */
    inline DescribeAlarmHistoryRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline DescribeAlarmHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline DescribeAlarmHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline DescribeAlarmHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specified whether to return the newest or oldest alarm history first. Specify
     * <code>TimestampDescending</code> to have the newest event history returned
     * first, and specify <code>TimestampAscending</code> to have the oldest history
     * returned first.</p>
     */
    inline const ScanBy& GetScanBy() const{ return m_scanBy; }

    /**
     * <p>Specified whether to return the newest or oldest alarm history first. Specify
     * <code>TimestampDescending</code> to have the newest event history returned
     * first, and specify <code>TimestampAscending</code> to have the oldest history
     * returned first.</p>
     */
    inline bool ScanByHasBeenSet() const { return m_scanByHasBeenSet; }

    /**
     * <p>Specified whether to return the newest or oldest alarm history first. Specify
     * <code>TimestampDescending</code> to have the newest event history returned
     * first, and specify <code>TimestampAscending</code> to have the oldest history
     * returned first.</p>
     */
    inline void SetScanBy(const ScanBy& value) { m_scanByHasBeenSet = true; m_scanBy = value; }

    /**
     * <p>Specified whether to return the newest or oldest alarm history first. Specify
     * <code>TimestampDescending</code> to have the newest event history returned
     * first, and specify <code>TimestampAscending</code> to have the oldest history
     * returned first.</p>
     */
    inline void SetScanBy(ScanBy&& value) { m_scanByHasBeenSet = true; m_scanBy = std::move(value); }

    /**
     * <p>Specified whether to return the newest or oldest alarm history first. Specify
     * <code>TimestampDescending</code> to have the newest event history returned
     * first, and specify <code>TimestampAscending</code> to have the oldest history
     * returned first.</p>
     */
    inline DescribeAlarmHistoryRequest& WithScanBy(const ScanBy& value) { SetScanBy(value); return *this;}

    /**
     * <p>Specified whether to return the newest or oldest alarm history first. Specify
     * <code>TimestampDescending</code> to have the newest event history returned
     * first, and specify <code>TimestampAscending</code> to have the oldest history
     * returned first.</p>
     */
    inline DescribeAlarmHistoryRequest& WithScanBy(ScanBy&& value) { SetScanBy(std::move(value)); return *this;}

  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::Vector<AlarmType> m_alarmTypes;
    bool m_alarmTypesHasBeenSet = false;

    HistoryItemType m_historyItemType;
    bool m_historyItemTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ScanBy m_scanBy;
    bool m_scanByHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
