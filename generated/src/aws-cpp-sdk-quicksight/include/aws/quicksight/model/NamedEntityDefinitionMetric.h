/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NamedEntityAggType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that represents a metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NamedEntityDefinitionMetric">AWS
   * API Reference</a></p>
   */
  class NamedEntityDefinitionMetric
  {
  public:
    AWS_QUICKSIGHT_API NamedEntityDefinitionMetric() = default;
    AWS_QUICKSIGHT_API NamedEntityDefinitionMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NamedEntityDefinitionMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregation of a named entity. Valid values for this structure are
     * <code>SUM</code>, <code>MIN</code>, <code>MAX</code>, <code>COUNT</code>,
     * <code>AVERAGE</code>, <code>DISTINCT_COUNT</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>,
     * <code>PERCENTILE</code>, <code>MEDIAN</code>, and <code>CUSTOM</code>.</p>
     */
    inline NamedEntityAggType GetAggregation() const { return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(NamedEntityAggType value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline NamedEntityDefinitionMetric& WithAggregation(NamedEntityAggType value) { SetAggregation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAggregationFunctionParameters() const { return m_aggregationFunctionParameters; }
    inline bool AggregationFunctionParametersHasBeenSet() const { return m_aggregationFunctionParametersHasBeenSet; }
    template<typename AggregationFunctionParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetAggregationFunctionParameters(AggregationFunctionParametersT&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters = std::forward<AggregationFunctionParametersT>(value); }
    template<typename AggregationFunctionParametersT = Aws::Map<Aws::String, Aws::String>>
    NamedEntityDefinitionMetric& WithAggregationFunctionParameters(AggregationFunctionParametersT&& value) { SetAggregationFunctionParameters(std::forward<AggregationFunctionParametersT>(value)); return *this;}
    template<typename AggregationFunctionParametersKeyT = Aws::String, typename AggregationFunctionParametersValueT = Aws::String>
    NamedEntityDefinitionMetric& AddAggregationFunctionParameters(AggregationFunctionParametersKeyT&& key, AggregationFunctionParametersValueT&& value) {
      m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::forward<AggregationFunctionParametersKeyT>(key), std::forward<AggregationFunctionParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    NamedEntityAggType m_aggregation{NamedEntityAggType::NOT_SET};
    bool m_aggregationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_aggregationFunctionParameters;
    bool m_aggregationFunctionParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
