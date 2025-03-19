/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TimeBasedForecastProperties.h>
#include <aws/quicksight/model/ForecastScenario.h>
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
   * <p>The forecast configuration that is used in a line chart's display
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ForecastConfiguration">AWS
   * API Reference</a></p>
   */
  class ForecastConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ForecastConfiguration() = default;
    AWS_QUICKSIGHT_API ForecastConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ForecastConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The forecast properties setup of a forecast in the line chart.</p>
     */
    inline const TimeBasedForecastProperties& GetForecastProperties() const { return m_forecastProperties; }
    inline bool ForecastPropertiesHasBeenSet() const { return m_forecastPropertiesHasBeenSet; }
    template<typename ForecastPropertiesT = TimeBasedForecastProperties>
    void SetForecastProperties(ForecastPropertiesT&& value) { m_forecastPropertiesHasBeenSet = true; m_forecastProperties = std::forward<ForecastPropertiesT>(value); }
    template<typename ForecastPropertiesT = TimeBasedForecastProperties>
    ForecastConfiguration& WithForecastProperties(ForecastPropertiesT&& value) { SetForecastProperties(std::forward<ForecastPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecast scenario of a forecast in the line chart.</p>
     */
    inline const ForecastScenario& GetScenario() const { return m_scenario; }
    inline bool ScenarioHasBeenSet() const { return m_scenarioHasBeenSet; }
    template<typename ScenarioT = ForecastScenario>
    void SetScenario(ScenarioT&& value) { m_scenarioHasBeenSet = true; m_scenario = std::forward<ScenarioT>(value); }
    template<typename ScenarioT = ForecastScenario>
    ForecastConfiguration& WithScenario(ScenarioT&& value) { SetScenario(std::forward<ScenarioT>(value)); return *this;}
    ///@}
  private:

    TimeBasedForecastProperties m_forecastProperties;
    bool m_forecastPropertiesHasBeenSet = false;

    ForecastScenario m_scenario;
    bool m_scenarioHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
