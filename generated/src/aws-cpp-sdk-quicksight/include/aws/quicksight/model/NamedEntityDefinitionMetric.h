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
    AWS_QUICKSIGHT_API NamedEntityDefinitionMetric();
    AWS_QUICKSIGHT_API NamedEntityDefinitionMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NamedEntityDefinitionMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregation of a named entity. Valid values for this structure are
     * <code>SUM</code>, <code>MIN</code>, <code>MAX</code>, <code>COUNT</code>,
     * <code>AVERAGE</code>, <code>DISTINCT_COUNT</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>,
     * <code>PERCENTILE</code>, <code>MEDIAN</code>, and <code>CUSTOM</code>.</p>
     */
    inline const NamedEntityAggType& GetAggregation() const{ return m_aggregation; }

    /**
     * <p>The aggregation of a named entity. Valid values for this structure are
     * <code>SUM</code>, <code>MIN</code>, <code>MAX</code>, <code>COUNT</code>,
     * <code>AVERAGE</code>, <code>DISTINCT_COUNT</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>,
     * <code>PERCENTILE</code>, <code>MEDIAN</code>, and <code>CUSTOM</code>.</p>
     */
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }

    /**
     * <p>The aggregation of a named entity. Valid values for this structure are
     * <code>SUM</code>, <code>MIN</code>, <code>MAX</code>, <code>COUNT</code>,
     * <code>AVERAGE</code>, <code>DISTINCT_COUNT</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>,
     * <code>PERCENTILE</code>, <code>MEDIAN</code>, and <code>CUSTOM</code>.</p>
     */
    inline void SetAggregation(const NamedEntityAggType& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }

    /**
     * <p>The aggregation of a named entity. Valid values for this structure are
     * <code>SUM</code>, <code>MIN</code>, <code>MAX</code>, <code>COUNT</code>,
     * <code>AVERAGE</code>, <code>DISTINCT_COUNT</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>,
     * <code>PERCENTILE</code>, <code>MEDIAN</code>, and <code>CUSTOM</code>.</p>
     */
    inline void SetAggregation(NamedEntityAggType&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }

    /**
     * <p>The aggregation of a named entity. Valid values for this structure are
     * <code>SUM</code>, <code>MIN</code>, <code>MAX</code>, <code>COUNT</code>,
     * <code>AVERAGE</code>, <code>DISTINCT_COUNT</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>,
     * <code>PERCENTILE</code>, <code>MEDIAN</code>, and <code>CUSTOM</code>.</p>
     */
    inline NamedEntityDefinitionMetric& WithAggregation(const NamedEntityAggType& value) { SetAggregation(value); return *this;}

    /**
     * <p>The aggregation of a named entity. Valid values for this structure are
     * <code>SUM</code>, <code>MIN</code>, <code>MAX</code>, <code>COUNT</code>,
     * <code>AVERAGE</code>, <code>DISTINCT_COUNT</code>, <code>STDEV</code>,
     * <code>STDEVP</code>, <code>VAR</code>, <code>VARP</code>,
     * <code>PERCENTILE</code>, <code>MEDIAN</code>, and <code>CUSTOM</code>.</p>
     */
    inline NamedEntityDefinitionMetric& WithAggregation(NamedEntityAggType&& value) { SetAggregation(std::move(value)); return *this;}


    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAggregationFunctionParameters() const{ return m_aggregationFunctionParameters; }

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline bool AggregationFunctionParametersHasBeenSet() const { return m_aggregationFunctionParametersHasBeenSet; }

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline void SetAggregationFunctionParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters = value; }

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline void SetAggregationFunctionParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters = std::move(value); }

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline NamedEntityDefinitionMetric& WithAggregationFunctionParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAggregationFunctionParameters(value); return *this;}

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline NamedEntityDefinitionMetric& WithAggregationFunctionParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAggregationFunctionParameters(std::move(value)); return *this;}

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline NamedEntityDefinitionMetric& AddAggregationFunctionParameters(const Aws::String& key, const Aws::String& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, value); return *this; }

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline NamedEntityDefinitionMetric& AddAggregationFunctionParameters(Aws::String&& key, const Aws::String& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline NamedEntityDefinitionMetric& AddAggregationFunctionParameters(const Aws::String& key, Aws::String&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline NamedEntityDefinitionMetric& AddAggregationFunctionParameters(Aws::String&& key, Aws::String&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline NamedEntityDefinitionMetric& AddAggregationFunctionParameters(const char* key, Aws::String&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline NamedEntityDefinitionMetric& AddAggregationFunctionParameters(Aws::String&& key, const char* value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The additional parameters for an aggregation function.</p>
     */
    inline NamedEntityDefinitionMetric& AddAggregationFunctionParameters(const char* key, const char* value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, value); return *this; }

  private:

    NamedEntityAggType m_aggregation;
    bool m_aggregationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_aggregationFunctionParameters;
    bool m_aggregationFunctionParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
