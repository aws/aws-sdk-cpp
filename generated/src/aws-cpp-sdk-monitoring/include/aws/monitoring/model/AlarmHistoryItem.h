/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/AlarmType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/HistoryItemType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Represents the history of a specific alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/AlarmHistoryItem">AWS
   * API Reference</a></p>
   */
  class AlarmHistoryItem
  {
  public:
    AWS_CLOUDWATCH_API AlarmHistoryItem() = default;
    AWS_CLOUDWATCH_API AlarmHistoryItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API AlarmHistoryItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The descriptive name for the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    AlarmHistoryItem& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of alarm, either metric alarm or composite alarm.</p>
     */
    inline AlarmType GetAlarmType() const { return m_alarmType; }
    inline bool AlarmTypeHasBeenSet() const { return m_alarmTypeHasBeenSet; }
    inline void SetAlarmType(AlarmType value) { m_alarmTypeHasBeenSet = true; m_alarmType = value; }
    inline AlarmHistoryItem& WithAlarmType(AlarmType value) { SetAlarmType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp for the alarm history item.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    AlarmHistoryItem& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of alarm history item.</p>
     */
    inline HistoryItemType GetHistoryItemType() const { return m_historyItemType; }
    inline bool HistoryItemTypeHasBeenSet() const { return m_historyItemTypeHasBeenSet; }
    inline void SetHistoryItemType(HistoryItemType value) { m_historyItemTypeHasBeenSet = true; m_historyItemType = value; }
    inline AlarmHistoryItem& WithHistoryItemType(HistoryItemType value) { SetHistoryItemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the alarm history, in text format.</p>
     */
    inline const Aws::String& GetHistorySummary() const { return m_historySummary; }
    inline bool HistorySummaryHasBeenSet() const { return m_historySummaryHasBeenSet; }
    template<typename HistorySummaryT = Aws::String>
    void SetHistorySummary(HistorySummaryT&& value) { m_historySummaryHasBeenSet = true; m_historySummary = std::forward<HistorySummaryT>(value); }
    template<typename HistorySummaryT = Aws::String>
    AlarmHistoryItem& WithHistorySummary(HistorySummaryT&& value) { SetHistorySummary(std::forward<HistorySummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data about the alarm, in JSON format.</p>
     */
    inline const Aws::String& GetHistoryData() const { return m_historyData; }
    inline bool HistoryDataHasBeenSet() const { return m_historyDataHasBeenSet; }
    template<typename HistoryDataT = Aws::String>
    void SetHistoryData(HistoryDataT&& value) { m_historyDataHasBeenSet = true; m_historyData = std::forward<HistoryDataT>(value); }
    template<typename HistoryDataT = Aws::String>
    AlarmHistoryItem& WithHistoryData(HistoryDataT&& value) { SetHistoryData(std::forward<HistoryDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    AlarmType m_alarmType{AlarmType::NOT_SET};
    bool m_alarmTypeHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    HistoryItemType m_historyItemType{HistoryItemType::NOT_SET};
    bool m_historyItemTypeHasBeenSet = false;

    Aws::String m_historySummary;
    bool m_historySummaryHasBeenSet = false;

    Aws::String m_historyData;
    bool m_historyDataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
