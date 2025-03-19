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
    AWS_CLOUDWATCH_API DescribeAlarmHistoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlarmHistory"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    DescribeAlarmHistoryRequest& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to specify whether you want the operation to return metric
     * alarms or composite alarms. If you omit this parameter, only metric alarms are
     * returned.</p>
     */
    inline const Aws::Vector<AlarmType>& GetAlarmTypes() const { return m_alarmTypes; }
    inline bool AlarmTypesHasBeenSet() const { return m_alarmTypesHasBeenSet; }
    template<typename AlarmTypesT = Aws::Vector<AlarmType>>
    void SetAlarmTypes(AlarmTypesT&& value) { m_alarmTypesHasBeenSet = true; m_alarmTypes = std::forward<AlarmTypesT>(value); }
    template<typename AlarmTypesT = Aws::Vector<AlarmType>>
    DescribeAlarmHistoryRequest& WithAlarmTypes(AlarmTypesT&& value) { SetAlarmTypes(std::forward<AlarmTypesT>(value)); return *this;}
    inline DescribeAlarmHistoryRequest& AddAlarmTypes(AlarmType value) { m_alarmTypesHasBeenSet = true; m_alarmTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of alarm histories to retrieve.</p>
     */
    inline HistoryItemType GetHistoryItemType() const { return m_historyItemType; }
    inline bool HistoryItemTypeHasBeenSet() const { return m_historyItemTypeHasBeenSet; }
    inline void SetHistoryItemType(HistoryItemType value) { m_historyItemTypeHasBeenSet = true; m_historyItemType = value; }
    inline DescribeAlarmHistoryRequest& WithHistoryItemType(HistoryItemType value) { SetHistoryItemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting date to retrieve alarm history.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    DescribeAlarmHistoryRequest& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending date to retrieve alarm history.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    DescribeAlarmHistoryRequest& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of alarm history records to retrieve.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeAlarmHistoryRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAlarmHistoryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specified whether to return the newest or oldest alarm history first. Specify
     * <code>TimestampDescending</code> to have the newest event history returned
     * first, and specify <code>TimestampAscending</code> to have the oldest history
     * returned first.</p>
     */
    inline ScanBy GetScanBy() const { return m_scanBy; }
    inline bool ScanByHasBeenSet() const { return m_scanByHasBeenSet; }
    inline void SetScanBy(ScanBy value) { m_scanByHasBeenSet = true; m_scanBy = value; }
    inline DescribeAlarmHistoryRequest& WithScanBy(ScanBy value) { SetScanBy(value); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::Vector<AlarmType> m_alarmTypes;
    bool m_alarmTypesHasBeenSet = false;

    HistoryItemType m_historyItemType{HistoryItemType::NOT_SET};
    bool m_historyItemTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ScanBy m_scanBy{ScanBy::NOT_SET};
    bool m_scanByHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
