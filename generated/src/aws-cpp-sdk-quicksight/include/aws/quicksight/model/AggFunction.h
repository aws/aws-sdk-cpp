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
    AWS_QUICKSIGHT_API AggFunction() = default;
    AWS_QUICKSIGHT_API AggFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AggFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregation of an Agg function.</p>
     */
    inline AggType GetAggregation() const { return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(AggType value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline AggFunction& WithAggregation(AggType value) { SetAggregation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation parameters for an Agg function.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAggregationFunctionParameters() const { return m_aggregationFunctionParameters; }
    inline bool AggregationFunctionParametersHasBeenSet() const { return m_aggregationFunctionParametersHasBeenSet; }
    template<typename AggregationFunctionParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetAggregationFunctionParameters(AggregationFunctionParametersT&& value) { m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters = std::forward<AggregationFunctionParametersT>(value); }
    template<typename AggregationFunctionParametersT = Aws::Map<Aws::String, Aws::String>>
    AggFunction& WithAggregationFunctionParameters(AggregationFunctionParametersT&& value) { SetAggregationFunctionParameters(std::forward<AggregationFunctionParametersT>(value)); return *this;}
    template<typename AggregationFunctionParametersKeyT = Aws::String, typename AggregationFunctionParametersValueT = Aws::String>
    AggFunction& AddAggregationFunctionParameters(AggregationFunctionParametersKeyT&& key, AggregationFunctionParametersValueT&& value) {
      m_aggregationFunctionParametersHasBeenSet = true; m_aggregationFunctionParameters.emplace(std::forward<AggregationFunctionParametersKeyT>(key), std::forward<AggregationFunctionParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The period of an Agg function.</p>
     */
    inline TopicTimeGranularity GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(TopicTimeGranularity value) { m_periodHasBeenSet = true; m_period = value; }
    inline AggFunction& WithPeriod(TopicTimeGranularity value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period field for an Agg function.</p>
     */
    inline const Aws::String& GetPeriodField() const { return m_periodField; }
    inline bool PeriodFieldHasBeenSet() const { return m_periodFieldHasBeenSet; }
    template<typename PeriodFieldT = Aws::String>
    void SetPeriodField(PeriodFieldT&& value) { m_periodFieldHasBeenSet = true; m_periodField = std::forward<PeriodFieldT>(value); }
    template<typename PeriodFieldT = Aws::String>
    AggFunction& WithPeriodField(PeriodFieldT&& value) { SetPeriodField(std::forward<PeriodFieldT>(value)); return *this;}
    ///@}
  private:

    AggType m_aggregation{AggType::NOT_SET};
    bool m_aggregationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_aggregationFunctionParameters;
    bool m_aggregationFunctionParametersHasBeenSet = false;

    TopicTimeGranularity m_period{TopicTimeGranularity::NOT_SET};
    bool m_periodHasBeenSet = false;

    Aws::String m_periodField;
    bool m_periodFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
