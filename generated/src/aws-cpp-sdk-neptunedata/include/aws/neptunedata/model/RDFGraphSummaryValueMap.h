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
    AWS_NEPTUNEDATA_API RDFGraphSummaryValueMap();
    AWS_NEPTUNEDATA_API RDFGraphSummaryValueMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API RDFGraphSummaryValueMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of this graph summary response.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of this graph summary response.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of this graph summary response.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of this graph summary response.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of this graph summary response.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of this graph summary response.</p>
     */
    inline RDFGraphSummaryValueMap& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of this graph summary response.</p>
     */
    inline RDFGraphSummaryValueMap& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of this graph summary response.</p>
     */
    inline RDFGraphSummaryValueMap& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune last computed
     * statistics.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatisticsComputationTime() const{ return m_lastStatisticsComputationTime; }

    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune last computed
     * statistics.</p>
     */
    inline bool LastStatisticsComputationTimeHasBeenSet() const { return m_lastStatisticsComputationTimeHasBeenSet; }

    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune last computed
     * statistics.</p>
     */
    inline void SetLastStatisticsComputationTime(const Aws::Utils::DateTime& value) { m_lastStatisticsComputationTimeHasBeenSet = true; m_lastStatisticsComputationTime = value; }

    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune last computed
     * statistics.</p>
     */
    inline void SetLastStatisticsComputationTime(Aws::Utils::DateTime&& value) { m_lastStatisticsComputationTimeHasBeenSet = true; m_lastStatisticsComputationTime = std::move(value); }

    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune last computed
     * statistics.</p>
     */
    inline RDFGraphSummaryValueMap& WithLastStatisticsComputationTime(const Aws::Utils::DateTime& value) { SetLastStatisticsComputationTime(value); return *this;}

    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune last computed
     * statistics.</p>
     */
    inline RDFGraphSummaryValueMap& WithLastStatisticsComputationTime(Aws::Utils::DateTime&& value) { SetLastStatisticsComputationTime(std::move(value)); return *this;}


    /**
     * <p>The graph summary of an RDF graph. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-graph-summary.html#neptune-graph-summary-rdf-response">Graph
     * summary response for an RDF graph</a>.</p>
     */
    inline const RDFGraphSummary& GetGraphSummary() const{ return m_graphSummary; }

    /**
     * <p>The graph summary of an RDF graph. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-graph-summary.html#neptune-graph-summary-rdf-response">Graph
     * summary response for an RDF graph</a>.</p>
     */
    inline bool GraphSummaryHasBeenSet() const { return m_graphSummaryHasBeenSet; }

    /**
     * <p>The graph summary of an RDF graph. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-graph-summary.html#neptune-graph-summary-rdf-response">Graph
     * summary response for an RDF graph</a>.</p>
     */
    inline void SetGraphSummary(const RDFGraphSummary& value) { m_graphSummaryHasBeenSet = true; m_graphSummary = value; }

    /**
     * <p>The graph summary of an RDF graph. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-graph-summary.html#neptune-graph-summary-rdf-response">Graph
     * summary response for an RDF graph</a>.</p>
     */
    inline void SetGraphSummary(RDFGraphSummary&& value) { m_graphSummaryHasBeenSet = true; m_graphSummary = std::move(value); }

    /**
     * <p>The graph summary of an RDF graph. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-graph-summary.html#neptune-graph-summary-rdf-response">Graph
     * summary response for an RDF graph</a>.</p>
     */
    inline RDFGraphSummaryValueMap& WithGraphSummary(const RDFGraphSummary& value) { SetGraphSummary(value); return *this;}

    /**
     * <p>The graph summary of an RDF graph. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-graph-summary.html#neptune-graph-summary-rdf-response">Graph
     * summary response for an RDF graph</a>.</p>
     */
    inline RDFGraphSummaryValueMap& WithGraphSummary(RDFGraphSummary&& value) { SetGraphSummary(std::move(value)); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatisticsComputationTime;
    bool m_lastStatisticsComputationTimeHasBeenSet = false;

    RDFGraphSummary m_graphSummary;
    bool m_graphSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
