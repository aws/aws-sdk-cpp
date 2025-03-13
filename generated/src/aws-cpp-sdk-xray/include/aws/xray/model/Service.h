/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/ServiceStatistics.h>
#include <aws/xray/model/Edge.h>
#include <aws/xray/model/HistogramEntry.h>
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
   * <p>Information about an application that processed requests, users that made
   * requests, or downstream services, resources, and applications that an
   * application used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Service">AWS API
   * Reference</a></p>
   */
  class Service
  {
  public:
    AWS_XRAY_API Service() = default;
    AWS_XRAY_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier for the service. Unique within the service map.</p>
     */
    inline int GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(int value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline Service& WithReferenceId(int value) { SetReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical name of the service.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Service& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    template<typename NamesT = Aws::Vector<Aws::String>>
    void SetNames(NamesT&& value) { m_namesHasBeenSet = true; m_names = std::forward<NamesT>(value); }
    template<typename NamesT = Aws::Vector<Aws::String>>
    Service& WithNames(NamesT&& value) { SetNames(std::forward<NamesT>(value)); return *this;}
    template<typename NamesT = Aws::String>
    Service& AddNames(NamesT&& value) { m_namesHasBeenSet = true; m_names.emplace_back(std::forward<NamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates that the service was the first service to process a request.</p>
     */
    inline bool GetRoot() const { return m_root; }
    inline bool RootHasBeenSet() const { return m_rootHasBeenSet; }
    inline void SetRoot(bool value) { m_rootHasBeenSet = true; m_root = value; }
    inline Service& WithRoot(bool value) { SetRoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Service& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service.</p> <ul> <li> <p>Amazon Web Services Resource - The type
     * of an Amazon Web Services resource. For example, <code>AWS::EC2::Instance</code>
     * for an application running on Amazon EC2 or <code>AWS::DynamoDB::Table</code>
     * for an Amazon DynamoDB table that the application used.</p> </li> <li> <p>Amazon
     * Web Services Service - The type of an Amazon Web Services service. For example,
     * <code>AWS::DynamoDB</code> for downstream calls to Amazon DynamoDB that didn't
     * target a specific table.</p> </li> <li> <p> <code>client</code> - Represents the
     * clients that sent requests to a root service.</p> </li> <li> <p>
     * <code>remote</code> - A downstream service of indeterminate type.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Service& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service's state.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    Service& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the first segment that the service generated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Service& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the last segment that the service generated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Service& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connections to downstream services.</p>
     */
    inline const Aws::Vector<Edge>& GetEdges() const { return m_edges; }
    inline bool EdgesHasBeenSet() const { return m_edgesHasBeenSet; }
    template<typename EdgesT = Aws::Vector<Edge>>
    void SetEdges(EdgesT&& value) { m_edgesHasBeenSet = true; m_edges = std::forward<EdgesT>(value); }
    template<typename EdgesT = Aws::Vector<Edge>>
    Service& WithEdges(EdgesT&& value) { SetEdges(std::forward<EdgesT>(value)); return *this;}
    template<typename EdgesT = Edge>
    Service& AddEdges(EdgesT&& value) { m_edgesHasBeenSet = true; m_edges.emplace_back(std::forward<EdgesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Aggregated statistics for the service.</p>
     */
    inline const ServiceStatistics& GetSummaryStatistics() const { return m_summaryStatistics; }
    inline bool SummaryStatisticsHasBeenSet() const { return m_summaryStatisticsHasBeenSet; }
    template<typename SummaryStatisticsT = ServiceStatistics>
    void SetSummaryStatistics(SummaryStatisticsT&& value) { m_summaryStatisticsHasBeenSet = true; m_summaryStatistics = std::forward<SummaryStatisticsT>(value); }
    template<typename SummaryStatisticsT = ServiceStatistics>
    Service& WithSummaryStatistics(SummaryStatisticsT&& value) { SetSummaryStatistics(std::forward<SummaryStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A histogram that maps the spread of service durations.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetDurationHistogram() const { return m_durationHistogram; }
    inline bool DurationHistogramHasBeenSet() const { return m_durationHistogramHasBeenSet; }
    template<typename DurationHistogramT = Aws::Vector<HistogramEntry>>
    void SetDurationHistogram(DurationHistogramT&& value) { m_durationHistogramHasBeenSet = true; m_durationHistogram = std::forward<DurationHistogramT>(value); }
    template<typename DurationHistogramT = Aws::Vector<HistogramEntry>>
    Service& WithDurationHistogram(DurationHistogramT&& value) { SetDurationHistogram(std::forward<DurationHistogramT>(value)); return *this;}
    template<typename DurationHistogramT = HistogramEntry>
    Service& AddDurationHistogram(DurationHistogramT&& value) { m_durationHistogramHasBeenSet = true; m_durationHistogram.emplace_back(std::forward<DurationHistogramT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A histogram that maps the spread of service response times.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetResponseTimeHistogram() const { return m_responseTimeHistogram; }
    inline bool ResponseTimeHistogramHasBeenSet() const { return m_responseTimeHistogramHasBeenSet; }
    template<typename ResponseTimeHistogramT = Aws::Vector<HistogramEntry>>
    void SetResponseTimeHistogram(ResponseTimeHistogramT&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = std::forward<ResponseTimeHistogramT>(value); }
    template<typename ResponseTimeHistogramT = Aws::Vector<HistogramEntry>>
    Service& WithResponseTimeHistogram(ResponseTimeHistogramT&& value) { SetResponseTimeHistogram(std::forward<ResponseTimeHistogramT>(value)); return *this;}
    template<typename ResponseTimeHistogramT = HistogramEntry>
    Service& AddResponseTimeHistogram(ResponseTimeHistogramT&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.emplace_back(std::forward<ResponseTimeHistogramT>(value)); return *this; }
    ///@}
  private:

    int m_referenceId{0};
    bool m_referenceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    bool m_root{false};
    bool m_rootHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<Edge> m_edges;
    bool m_edgesHasBeenSet = false;

    ServiceStatistics m_summaryStatistics;
    bool m_summaryStatisticsHasBeenSet = false;

    Aws::Vector<HistogramEntry> m_durationHistogram;
    bool m_durationHistogramHasBeenSet = false;

    Aws::Vector<HistogramEntry> m_responseTimeHistogram;
    bool m_responseTimeHistogramHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
