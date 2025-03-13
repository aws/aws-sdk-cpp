/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptunedata/model/PropertygraphSummary.h>
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
   * <p>Payload for the property graph summary response.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/PropertygraphSummaryValueMap">AWS
   * API Reference</a></p>
   */
  class PropertygraphSummaryValueMap
  {
  public:
    AWS_NEPTUNEDATA_API PropertygraphSummaryValueMap() = default;
    AWS_NEPTUNEDATA_API PropertygraphSummaryValueMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API PropertygraphSummaryValueMap& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    PropertygraphSummaryValueMap& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
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
    PropertygraphSummaryValueMap& WithLastStatisticsComputationTime(LastStatisticsComputationTimeT&& value) { SetLastStatisticsComputationTime(std::forward<LastStatisticsComputationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph summary.</p>
     */
    inline const PropertygraphSummary& GetGraphSummary() const { return m_graphSummary; }
    inline bool GraphSummaryHasBeenSet() const { return m_graphSummaryHasBeenSet; }
    template<typename GraphSummaryT = PropertygraphSummary>
    void SetGraphSummary(GraphSummaryT&& value) { m_graphSummaryHasBeenSet = true; m_graphSummary = std::forward<GraphSummaryT>(value); }
    template<typename GraphSummaryT = PropertygraphSummary>
    PropertygraphSummaryValueMap& WithGraphSummary(GraphSummaryT&& value) { SetGraphSummary(std::forward<GraphSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatisticsComputationTime{};
    bool m_lastStatisticsComputationTimeHasBeenSet = false;

    PropertygraphSummary m_graphSummary;
    bool m_graphSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
