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
    AWS_XRAY_API Service();
    AWS_XRAY_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier for the service. Unique within the service map.</p>
     */
    inline int GetReferenceId() const{ return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(int value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline Service& WithReferenceId(int value) { SetReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Service& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Service& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Service& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }
    inline Service& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}
    inline Service& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}
    inline Service& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    inline Service& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }
    inline Service& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates that the service was the first service to process a request.</p>
     */
    inline bool GetRoot() const{ return m_root; }
    inline bool RootHasBeenSet() const { return m_rootHasBeenSet; }
    inline void SetRoot(bool value) { m_rootHasBeenSet = true; m_root = value; }
    inline Service& WithRoot(bool value) { SetRoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Service& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Service& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Service& WithAccountId(const char* value) { SetAccountId(value); return *this;}
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
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Service& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Service& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Service& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service's state.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline Service& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline Service& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline Service& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the first segment that the service generated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Service& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Service& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the last segment that the service generated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline Service& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline Service& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connections to downstream services.</p>
     */
    inline const Aws::Vector<Edge>& GetEdges() const{ return m_edges; }
    inline bool EdgesHasBeenSet() const { return m_edgesHasBeenSet; }
    inline void SetEdges(const Aws::Vector<Edge>& value) { m_edgesHasBeenSet = true; m_edges = value; }
    inline void SetEdges(Aws::Vector<Edge>&& value) { m_edgesHasBeenSet = true; m_edges = std::move(value); }
    inline Service& WithEdges(const Aws::Vector<Edge>& value) { SetEdges(value); return *this;}
    inline Service& WithEdges(Aws::Vector<Edge>&& value) { SetEdges(std::move(value)); return *this;}
    inline Service& AddEdges(const Edge& value) { m_edgesHasBeenSet = true; m_edges.push_back(value); return *this; }
    inline Service& AddEdges(Edge&& value) { m_edgesHasBeenSet = true; m_edges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Aggregated statistics for the service.</p>
     */
    inline const ServiceStatistics& GetSummaryStatistics() const{ return m_summaryStatistics; }
    inline bool SummaryStatisticsHasBeenSet() const { return m_summaryStatisticsHasBeenSet; }
    inline void SetSummaryStatistics(const ServiceStatistics& value) { m_summaryStatisticsHasBeenSet = true; m_summaryStatistics = value; }
    inline void SetSummaryStatistics(ServiceStatistics&& value) { m_summaryStatisticsHasBeenSet = true; m_summaryStatistics = std::move(value); }
    inline Service& WithSummaryStatistics(const ServiceStatistics& value) { SetSummaryStatistics(value); return *this;}
    inline Service& WithSummaryStatistics(ServiceStatistics&& value) { SetSummaryStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A histogram that maps the spread of service durations.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetDurationHistogram() const{ return m_durationHistogram; }
    inline bool DurationHistogramHasBeenSet() const { return m_durationHistogramHasBeenSet; }
    inline void SetDurationHistogram(const Aws::Vector<HistogramEntry>& value) { m_durationHistogramHasBeenSet = true; m_durationHistogram = value; }
    inline void SetDurationHistogram(Aws::Vector<HistogramEntry>&& value) { m_durationHistogramHasBeenSet = true; m_durationHistogram = std::move(value); }
    inline Service& WithDurationHistogram(const Aws::Vector<HistogramEntry>& value) { SetDurationHistogram(value); return *this;}
    inline Service& WithDurationHistogram(Aws::Vector<HistogramEntry>&& value) { SetDurationHistogram(std::move(value)); return *this;}
    inline Service& AddDurationHistogram(const HistogramEntry& value) { m_durationHistogramHasBeenSet = true; m_durationHistogram.push_back(value); return *this; }
    inline Service& AddDurationHistogram(HistogramEntry&& value) { m_durationHistogramHasBeenSet = true; m_durationHistogram.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A histogram that maps the spread of service response times.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetResponseTimeHistogram() const{ return m_responseTimeHistogram; }
    inline bool ResponseTimeHistogramHasBeenSet() const { return m_responseTimeHistogramHasBeenSet; }
    inline void SetResponseTimeHistogram(const Aws::Vector<HistogramEntry>& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = value; }
    inline void SetResponseTimeHistogram(Aws::Vector<HistogramEntry>&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = std::move(value); }
    inline Service& WithResponseTimeHistogram(const Aws::Vector<HistogramEntry>& value) { SetResponseTimeHistogram(value); return *this;}
    inline Service& WithResponseTimeHistogram(Aws::Vector<HistogramEntry>&& value) { SetResponseTimeHistogram(std::move(value)); return *this;}
    inline Service& AddResponseTimeHistogram(const HistogramEntry& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.push_back(value); return *this; }
    inline Service& AddResponseTimeHistogram(HistogramEntry&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    bool m_root;
    bool m_rootHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
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
