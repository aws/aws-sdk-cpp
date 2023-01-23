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
    AWS_CLOUDWATCH_API AlarmHistoryItem();
    AWS_CLOUDWATCH_API AlarmHistoryItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API AlarmHistoryItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The descriptive name for the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The descriptive name for the alarm.</p>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p>The descriptive name for the alarm.</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The descriptive name for the alarm.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p>The descriptive name for the alarm.</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The descriptive name for the alarm.</p>
     */
    inline AlarmHistoryItem& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The descriptive name for the alarm.</p>
     */
    inline AlarmHistoryItem& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name for the alarm.</p>
     */
    inline AlarmHistoryItem& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}


    /**
     * <p>The type of alarm, either metric alarm or composite alarm.</p>
     */
    inline const AlarmType& GetAlarmType() const{ return m_alarmType; }

    /**
     * <p>The type of alarm, either metric alarm or composite alarm.</p>
     */
    inline bool AlarmTypeHasBeenSet() const { return m_alarmTypeHasBeenSet; }

    /**
     * <p>The type of alarm, either metric alarm or composite alarm.</p>
     */
    inline void SetAlarmType(const AlarmType& value) { m_alarmTypeHasBeenSet = true; m_alarmType = value; }

    /**
     * <p>The type of alarm, either metric alarm or composite alarm.</p>
     */
    inline void SetAlarmType(AlarmType&& value) { m_alarmTypeHasBeenSet = true; m_alarmType = std::move(value); }

    /**
     * <p>The type of alarm, either metric alarm or composite alarm.</p>
     */
    inline AlarmHistoryItem& WithAlarmType(const AlarmType& value) { SetAlarmType(value); return *this;}

    /**
     * <p>The type of alarm, either metric alarm or composite alarm.</p>
     */
    inline AlarmHistoryItem& WithAlarmType(AlarmType&& value) { SetAlarmType(std::move(value)); return *this;}


    /**
     * <p>The time stamp for the alarm history item.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time stamp for the alarm history item.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time stamp for the alarm history item.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time stamp for the alarm history item.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time stamp for the alarm history item.</p>
     */
    inline AlarmHistoryItem& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time stamp for the alarm history item.</p>
     */
    inline AlarmHistoryItem& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The type of alarm history item.</p>
     */
    inline const HistoryItemType& GetHistoryItemType() const{ return m_historyItemType; }

    /**
     * <p>The type of alarm history item.</p>
     */
    inline bool HistoryItemTypeHasBeenSet() const { return m_historyItemTypeHasBeenSet; }

    /**
     * <p>The type of alarm history item.</p>
     */
    inline void SetHistoryItemType(const HistoryItemType& value) { m_historyItemTypeHasBeenSet = true; m_historyItemType = value; }

    /**
     * <p>The type of alarm history item.</p>
     */
    inline void SetHistoryItemType(HistoryItemType&& value) { m_historyItemTypeHasBeenSet = true; m_historyItemType = std::move(value); }

    /**
     * <p>The type of alarm history item.</p>
     */
    inline AlarmHistoryItem& WithHistoryItemType(const HistoryItemType& value) { SetHistoryItemType(value); return *this;}

    /**
     * <p>The type of alarm history item.</p>
     */
    inline AlarmHistoryItem& WithHistoryItemType(HistoryItemType&& value) { SetHistoryItemType(std::move(value)); return *this;}


    /**
     * <p>A summary of the alarm history, in text format.</p>
     */
    inline const Aws::String& GetHistorySummary() const{ return m_historySummary; }

    /**
     * <p>A summary of the alarm history, in text format.</p>
     */
    inline bool HistorySummaryHasBeenSet() const { return m_historySummaryHasBeenSet; }

    /**
     * <p>A summary of the alarm history, in text format.</p>
     */
    inline void SetHistorySummary(const Aws::String& value) { m_historySummaryHasBeenSet = true; m_historySummary = value; }

    /**
     * <p>A summary of the alarm history, in text format.</p>
     */
    inline void SetHistorySummary(Aws::String&& value) { m_historySummaryHasBeenSet = true; m_historySummary = std::move(value); }

    /**
     * <p>A summary of the alarm history, in text format.</p>
     */
    inline void SetHistorySummary(const char* value) { m_historySummaryHasBeenSet = true; m_historySummary.assign(value); }

    /**
     * <p>A summary of the alarm history, in text format.</p>
     */
    inline AlarmHistoryItem& WithHistorySummary(const Aws::String& value) { SetHistorySummary(value); return *this;}

    /**
     * <p>A summary of the alarm history, in text format.</p>
     */
    inline AlarmHistoryItem& WithHistorySummary(Aws::String&& value) { SetHistorySummary(std::move(value)); return *this;}

    /**
     * <p>A summary of the alarm history, in text format.</p>
     */
    inline AlarmHistoryItem& WithHistorySummary(const char* value) { SetHistorySummary(value); return *this;}


    /**
     * <p>Data about the alarm, in JSON format.</p>
     */
    inline const Aws::String& GetHistoryData() const{ return m_historyData; }

    /**
     * <p>Data about the alarm, in JSON format.</p>
     */
    inline bool HistoryDataHasBeenSet() const { return m_historyDataHasBeenSet; }

    /**
     * <p>Data about the alarm, in JSON format.</p>
     */
    inline void SetHistoryData(const Aws::String& value) { m_historyDataHasBeenSet = true; m_historyData = value; }

    /**
     * <p>Data about the alarm, in JSON format.</p>
     */
    inline void SetHistoryData(Aws::String&& value) { m_historyDataHasBeenSet = true; m_historyData = std::move(value); }

    /**
     * <p>Data about the alarm, in JSON format.</p>
     */
    inline void SetHistoryData(const char* value) { m_historyDataHasBeenSet = true; m_historyData.assign(value); }

    /**
     * <p>Data about the alarm, in JSON format.</p>
     */
    inline AlarmHistoryItem& WithHistoryData(const Aws::String& value) { SetHistoryData(value); return *this;}

    /**
     * <p>Data about the alarm, in JSON format.</p>
     */
    inline AlarmHistoryItem& WithHistoryData(Aws::String&& value) { SetHistoryData(std::move(value)); return *this;}

    /**
     * <p>Data about the alarm, in JSON format.</p>
     */
    inline AlarmHistoryItem& WithHistoryData(const char* value) { SetHistoryData(value); return *this;}

  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    AlarmType m_alarmType;
    bool m_alarmTypeHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    HistoryItemType m_historyItemType;
    bool m_historyItemTypeHasBeenSet = false;

    Aws::String m_historySummary;
    bool m_historySummaryHasBeenSet = false;

    Aws::String m_historyData;
    bool m_historyDataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
