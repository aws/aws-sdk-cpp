/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptunedata/model/RDFGraphSummary.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Payload for an RDF graph summary response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/RDFGraphSummaryValueMap">AWS
   * API Reference</a></p>
   */
  class RDFGraphSummaryValueMap
  {
  public:
    AWS_NEPTUNEDATA_API RDFGraphSummaryValueMap() = default;
    AWS_NEPTUNEDATA_API RDFGraphSummaryValueMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API RDFGraphSummaryValueMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of this graph summary response.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    RDFGraphSummaryValueMap& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune last computed
     * statistics.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatisticsComputationTime() const { return m_lastStatisticsComputationTime; }
    inline bool LastStatisticsComputationTimeHasBeenSet() const { return m_lastStatisticsComputationTimeHasBeenSet; }
    template<typename LastStatisticsComputationTimeT = Aws::Utils::DateTime>
    void SetLastStatisticsComputationTime(LastStatisticsComputationTimeT&& value) { m_lastStatisticsComputationTimeHasBeenSet = true; m_lastStatisticsComputationTime = std::forward<LastStatisticsComputationTimeT>(value); }
    template<typename LastStatisticsComputationTimeT = Aws::Utils::DateTime>
    RDFGraphSummaryValueMap& WithLastStatisticsComputationTime(LastStatisticsComputationTimeT&& value) { SetLastStatisticsComputationTime(std::forward<LastStatisticsComputationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph summary of an RDF graph. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-graph-summary.html#neptune-graph-summary-rdf-response">Graph
     * summary response for an RDF graph</a>.</p>
     */
    inline const RDFGraphSummary& GetGraphSummary() const { return m_graphSummary; }
    inline bool GraphSummaryHasBeenSet() const { return m_graphSummaryHasBeenSet; }
    template<typename GraphSummaryT = RDFGraphSummary>
    void SetGraphSummary(GraphSummaryT&& value) { m_graphSummaryHasBeenSet = true; m_graphSummary = std::forward<GraphSummaryT>(value); }
    template<typename GraphSummaryT = RDFGraphSummary>
    RDFGraphSummaryValueMap& WithGraphSummary(GraphSummaryT&& value) { SetGraphSummary(std::forward<GraphSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatisticsComputationTime{};
    bool m_lastStatisticsComputationTimeHasBeenSet = false;

    RDFGraphSummary m_graphSummary;
    bool m_graphSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
