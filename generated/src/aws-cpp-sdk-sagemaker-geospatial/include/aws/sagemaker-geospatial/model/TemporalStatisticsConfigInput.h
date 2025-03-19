/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/GroupBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/TemporalStatistics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The structure representing the configuration for Temporal Statistics
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/TemporalStatisticsConfigInput">AWS
   * API Reference</a></p>
   */
  class TemporalStatisticsConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API TemporalStatisticsConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API TemporalStatisticsConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API TemporalStatisticsConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input for the temporal statistics grouping by time frequency option.</p>
     */
    inline GroupBy GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    inline void SetGroupBy(GroupBy value) { m_groupByHasBeenSet = true; m_groupBy = value; }
    inline TemporalStatisticsConfigInput& WithGroupBy(GroupBy value) { SetGroupBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the statistics method options.</p>
     */
    inline const Aws::Vector<TemporalStatistics>& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = Aws::Vector<TemporalStatistics>>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Aws::Vector<TemporalStatistics>>
    TemporalStatisticsConfigInput& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    inline TemporalStatisticsConfigInput& AddStatistics(TemporalStatistics value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of target band names for the temporal statistic to calculate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const { return m_targetBands; }
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    void SetTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::forward<TargetBandsT>(value); }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    TemporalStatisticsConfigInput& WithTargetBands(TargetBandsT&& value) { SetTargetBands(std::forward<TargetBandsT>(value)); return *this;}
    template<typename TargetBandsT = Aws::String>
    TemporalStatisticsConfigInput& AddTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands.emplace_back(std::forward<TargetBandsT>(value)); return *this; }
    ///@}
  private:

    GroupBy m_groupBy{GroupBy::NOT_SET};
    bool m_groupByHasBeenSet = false;

    Aws::Vector<TemporalStatistics> m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
