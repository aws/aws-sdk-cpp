/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/EdgeStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/HistogramEntry.h>
#include <aws/xray/model/Alias.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about a connection between two services. An edge can be a
   * synchronous connection, such as typical call between client and service, or an
   * asynchronous link, such as a Lambda function which retrieves an event from an
   * SNS queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Edge">AWS API
   * Reference</a></p>
   */
  class Edge
  {
  public:
    AWS_XRAY_API Edge();
    AWS_XRAY_API Edge(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Edge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the edge. Unique within a service map.</p>
     */
    inline int GetReferenceId() const{ return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(int value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline Edge& WithReferenceId(int value) { SetReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the first segment on the edge.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Edge& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Edge& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the last segment on the edge.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline Edge& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline Edge& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response statistics for segments on the edge.</p>
     */
    inline const EdgeStatistics& GetSummaryStatistics() const{ return m_summaryStatistics; }
    inline bool SummaryStatisticsHasBeenSet() const { return m_summaryStatisticsHasBeenSet; }
    inline void SetSummaryStatistics(const EdgeStatistics& value) { m_summaryStatisticsHasBeenSet = true; m_summaryStatistics = value; }
    inline void SetSummaryStatistics(EdgeStatistics&& value) { m_summaryStatisticsHasBeenSet = true; m_summaryStatistics = std::move(value); }
    inline Edge& WithSummaryStatistics(const EdgeStatistics& value) { SetSummaryStatistics(value); return *this;}
    inline Edge& WithSummaryStatistics(EdgeStatistics&& value) { SetSummaryStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A histogram that maps the spread of client response times on an edge. Only
     * populated for synchronous edges.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetResponseTimeHistogram() const{ return m_responseTimeHistogram; }
    inline bool ResponseTimeHistogramHasBeenSet() const { return m_responseTimeHistogramHasBeenSet; }
    inline void SetResponseTimeHistogram(const Aws::Vector<HistogramEntry>& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = value; }
    inline void SetResponseTimeHistogram(Aws::Vector<HistogramEntry>&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = std::move(value); }
    inline Edge& WithResponseTimeHistogram(const Aws::Vector<HistogramEntry>& value) { SetResponseTimeHistogram(value); return *this;}
    inline Edge& WithResponseTimeHistogram(Aws::Vector<HistogramEntry>&& value) { SetResponseTimeHistogram(std::move(value)); return *this;}
    inline Edge& AddResponseTimeHistogram(const HistogramEntry& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.push_back(value); return *this; }
    inline Edge& AddResponseTimeHistogram(HistogramEntry&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Aliases for the edge.</p>
     */
    inline const Aws::Vector<Alias>& GetAliases() const{ return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    inline void SetAliases(const Aws::Vector<Alias>& value) { m_aliasesHasBeenSet = true; m_aliases = value; }
    inline void SetAliases(Aws::Vector<Alias>&& value) { m_aliasesHasBeenSet = true; m_aliases = std::move(value); }
    inline Edge& WithAliases(const Aws::Vector<Alias>& value) { SetAliases(value); return *this;}
    inline Edge& WithAliases(Aws::Vector<Alias>&& value) { SetAliases(std::move(value)); return *this;}
    inline Edge& AddAliases(const Alias& value) { m_aliasesHasBeenSet = true; m_aliases.push_back(value); return *this; }
    inline Edge& AddAliases(Alias&& value) { m_aliasesHasBeenSet = true; m_aliases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes an asynchronous connection, with a value of <code>link</code>.</p>
     */
    inline const Aws::String& GetEdgeType() const{ return m_edgeType; }
    inline bool EdgeTypeHasBeenSet() const { return m_edgeTypeHasBeenSet; }
    inline void SetEdgeType(const Aws::String& value) { m_edgeTypeHasBeenSet = true; m_edgeType = value; }
    inline void SetEdgeType(Aws::String&& value) { m_edgeTypeHasBeenSet = true; m_edgeType = std::move(value); }
    inline void SetEdgeType(const char* value) { m_edgeTypeHasBeenSet = true; m_edgeType.assign(value); }
    inline Edge& WithEdgeType(const Aws::String& value) { SetEdgeType(value); return *this;}
    inline Edge& WithEdgeType(Aws::String&& value) { SetEdgeType(std::move(value)); return *this;}
    inline Edge& WithEdgeType(const char* value) { SetEdgeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A histogram that maps the spread of event age when received by consumers. Age
     * is calculated each time an event is received. Only populated when
     * <i>EdgeType</i> is <code>link</code>.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetReceivedEventAgeHistogram() const{ return m_receivedEventAgeHistogram; }
    inline bool ReceivedEventAgeHistogramHasBeenSet() const { return m_receivedEventAgeHistogramHasBeenSet; }
    inline void SetReceivedEventAgeHistogram(const Aws::Vector<HistogramEntry>& value) { m_receivedEventAgeHistogramHasBeenSet = true; m_receivedEventAgeHistogram = value; }
    inline void SetReceivedEventAgeHistogram(Aws::Vector<HistogramEntry>&& value) { m_receivedEventAgeHistogramHasBeenSet = true; m_receivedEventAgeHistogram = std::move(value); }
    inline Edge& WithReceivedEventAgeHistogram(const Aws::Vector<HistogramEntry>& value) { SetReceivedEventAgeHistogram(value); return *this;}
    inline Edge& WithReceivedEventAgeHistogram(Aws::Vector<HistogramEntry>&& value) { SetReceivedEventAgeHistogram(std::move(value)); return *this;}
    inline Edge& AddReceivedEventAgeHistogram(const HistogramEntry& value) { m_receivedEventAgeHistogramHasBeenSet = true; m_receivedEventAgeHistogram.push_back(value); return *this; }
    inline Edge& AddReceivedEventAgeHistogram(HistogramEntry&& value) { m_receivedEventAgeHistogramHasBeenSet = true; m_receivedEventAgeHistogram.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    EdgeStatistics m_summaryStatistics;
    bool m_summaryStatisticsHasBeenSet = false;

    Aws::Vector<HistogramEntry> m_responseTimeHistogram;
    bool m_responseTimeHistogramHasBeenSet = false;

    Aws::Vector<Alias> m_aliases;
    bool m_aliasesHasBeenSet = false;

    Aws::String m_edgeType;
    bool m_edgeTypeHasBeenSet = false;

    Aws::Vector<HistogramEntry> m_receivedEventAgeHistogram;
    bool m_receivedEventAgeHistogramHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
