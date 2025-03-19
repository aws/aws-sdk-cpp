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
    AWS_XRAY_API Edge() = default;
    AWS_XRAY_API Edge(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Edge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the edge. Unique within a service map.</p>
     */
    inline int GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(int value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline Edge& WithReferenceId(int value) { SetReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the first segment on the edge.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Edge& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the last segment on the edge.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Edge& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response statistics for segments on the edge.</p>
     */
    inline const EdgeStatistics& GetSummaryStatistics() const { return m_summaryStatistics; }
    inline bool SummaryStatisticsHasBeenSet() const { return m_summaryStatisticsHasBeenSet; }
    template<typename SummaryStatisticsT = EdgeStatistics>
    void SetSummaryStatistics(SummaryStatisticsT&& value) { m_summaryStatisticsHasBeenSet = true; m_summaryStatistics = std::forward<SummaryStatisticsT>(value); }
    template<typename SummaryStatisticsT = EdgeStatistics>
    Edge& WithSummaryStatistics(SummaryStatisticsT&& value) { SetSummaryStatistics(std::forward<SummaryStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A histogram that maps the spread of client response times on an edge. Only
     * populated for synchronous edges.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetResponseTimeHistogram() const { return m_responseTimeHistogram; }
    inline bool ResponseTimeHistogramHasBeenSet() const { return m_responseTimeHistogramHasBeenSet; }
    template<typename ResponseTimeHistogramT = Aws::Vector<HistogramEntry>>
    void SetResponseTimeHistogram(ResponseTimeHistogramT&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = std::forward<ResponseTimeHistogramT>(value); }
    template<typename ResponseTimeHistogramT = Aws::Vector<HistogramEntry>>
    Edge& WithResponseTimeHistogram(ResponseTimeHistogramT&& value) { SetResponseTimeHistogram(std::forward<ResponseTimeHistogramT>(value)); return *this;}
    template<typename ResponseTimeHistogramT = HistogramEntry>
    Edge& AddResponseTimeHistogram(ResponseTimeHistogramT&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.emplace_back(std::forward<ResponseTimeHistogramT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Aliases for the edge.</p>
     */
    inline const Aws::Vector<Alias>& GetAliases() const { return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    template<typename AliasesT = Aws::Vector<Alias>>
    void SetAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases = std::forward<AliasesT>(value); }
    template<typename AliasesT = Aws::Vector<Alias>>
    Edge& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    template<typename AliasesT = Alias>
    Edge& AddAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases.emplace_back(std::forward<AliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes an asynchronous connection, with a value of <code>link</code>.</p>
     */
    inline const Aws::String& GetEdgeType() const { return m_edgeType; }
    inline bool EdgeTypeHasBeenSet() const { return m_edgeTypeHasBeenSet; }
    template<typename EdgeTypeT = Aws::String>
    void SetEdgeType(EdgeTypeT&& value) { m_edgeTypeHasBeenSet = true; m_edgeType = std::forward<EdgeTypeT>(value); }
    template<typename EdgeTypeT = Aws::String>
    Edge& WithEdgeType(EdgeTypeT&& value) { SetEdgeType(std::forward<EdgeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A histogram that maps the spread of event age when received by consumers. Age
     * is calculated each time an event is received. Only populated when
     * <i>EdgeType</i> is <code>link</code>.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetReceivedEventAgeHistogram() const { return m_receivedEventAgeHistogram; }
    inline bool ReceivedEventAgeHistogramHasBeenSet() const { return m_receivedEventAgeHistogramHasBeenSet; }
    template<typename ReceivedEventAgeHistogramT = Aws::Vector<HistogramEntry>>
    void SetReceivedEventAgeHistogram(ReceivedEventAgeHistogramT&& value) { m_receivedEventAgeHistogramHasBeenSet = true; m_receivedEventAgeHistogram = std::forward<ReceivedEventAgeHistogramT>(value); }
    template<typename ReceivedEventAgeHistogramT = Aws::Vector<HistogramEntry>>
    Edge& WithReceivedEventAgeHistogram(ReceivedEventAgeHistogramT&& value) { SetReceivedEventAgeHistogram(std::forward<ReceivedEventAgeHistogramT>(value)); return *this;}
    template<typename ReceivedEventAgeHistogramT = HistogramEntry>
    Edge& AddReceivedEventAgeHistogram(ReceivedEventAgeHistogramT&& value) { m_receivedEventAgeHistogramHasBeenSet = true; m_receivedEventAgeHistogram.emplace_back(std::forward<ReceivedEventAgeHistogramT>(value)); return *this; }
    ///@}
  private:

    int m_referenceId{0};
    bool m_referenceIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
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
