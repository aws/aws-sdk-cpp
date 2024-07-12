/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AggType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/quicksight/model/TopicTimeGranularity.h>
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
   * <p>The definition of an Agg function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AggFunction">AWS
   * API Reference</a></p>
   */
  class AggFunction
  {
  public:
    AWS_QUICKSIGHT_API AggFunction();
    AWS_QUICKSIGHT_API AggFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AggFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregation of an Agg function.</p>
     */
    inline const AggType& GetAggregation() const{ return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(const AggType& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline void SetAggregation(AggType&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }
    inline AggFunction& WithAggregation(const AggType& value) { SetAggregation(value); return *this;}
    inline AggFunction& WithAggregation(AggType&& value) { SetAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation parameters for an Agg function.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAggregationFunctionParameters() const{ return m_aggregationFunctionParameters; }
    inline bool AggregationFunctionParametersHasBeenSet() const { return m_aggregationFunctionParametersHasBeenSet; }
    inline void SetAggregationFunctionParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters = value; }
    inline void SetAggregationFunctionParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters = std::move(value); }
    inline AggFunction& WithAggregationFunctionParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAggregationFunctionParameters(value); return *this;}
    inline AggFunction& WithAggregationFunctionParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAggregationFunctionParameters(std::move(value)); return *this;}
    inline AggFunction& AddAggregationFunctionParameters(const Aws::String& key, const Aws::String& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, value); return *this; }
    inline AggFunction& AddAggregationFunctionParameters(Aws::String&& key, const Aws::String& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::move(key), value); return *this; }
    inline AggFunction& AddAggregationFunctionParameters(const Aws::String& key, Aws::String&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, std::move(value)); return *this; }
    inline AggFunction& AddAggregationFunctionParameters(Aws::String&& key, Aws::String&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline AggFunction& AddAggregationFunctionParameters(const char* key, Aws::String&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, std::move(value)); return *this; }
    inline AggFunction& AddAggregationFunctionParameters(Aws::String&& key, const char* value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::move(key), value); return *this; }
    inline AggFunction& AddAggregationFunctionParameters(const char* key, const char* value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The period of an Agg function.</p>
     */
    inline const TopicTimeGranularity& GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(const TopicTimeGranularity& value) { m_periodHasBeenSet = true; m_period = value; }
    inline void SetPeriod(TopicTimeGranularity&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }
    inline AggFunction& WithPeriod(const TopicTimeGranularity& value) { SetPeriod(value); return *this;}
    inline AggFunction& WithPeriod(TopicTimeGranularity&& value) { SetPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period field for an Agg function.</p>
     */
    inline const Aws::String& GetPeriodField() const{ return m_periodField; }
    inline bool PeriodFieldHasBeenSet() const { return m_periodFieldHasBeenSet; }
    inline void SetPeriodField(const Aws::String& value) { m_periodFieldHasBeenSet = true; m_periodField = value; }
    inline void SetPeriodField(Aws::String&& value) { m_periodFieldHasBeenSet = true; m_periodField = std::move(value); }
    inline void SetPeriodField(const char* value) { m_periodFieldHasBeenSet = true; m_periodField.assign(value); }
    inline AggFunction& WithPeriodField(const Aws::String& value) { SetPeriodField(value); return *this;}
    inline AggFunction& WithPeriodField(Aws::String&& value) { SetPeriodField(std::move(value)); return *this;}
    inline AggFunction& WithPeriodField(const char* value) { SetPeriodField(value); return *this;}
    ///@}
  private:

    AggType m_aggregation;
    bool m_aggregationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_aggregationFunctionParameters;
    bool m_aggregationFunctionParametersHasBeenSet = false;

    TopicTimeGranularity m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_periodField;
    bool m_periodFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
