/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/Strategy.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Object containing the summary of the strategy recommendations.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StrategySummary">AWS
   * API Reference</a></p>
   */
  class StrategySummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StrategySummary();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StrategySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StrategySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The count of recommendations per strategy. </p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline StrategySummary& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of recommended strategy. </p>
     */
    inline const Strategy& GetStrategy() const{ return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(const Strategy& value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline void SetStrategy(Strategy&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }
    inline StrategySummary& WithStrategy(const Strategy& value) { SetStrategy(value); return *this;}
    inline StrategySummary& WithStrategy(Strategy&& value) { SetStrategy(std::move(value)); return *this;}
    ///@}
  private:

    int m_count;
    bool m_countHasBeenSet = false;

    Strategy m_strategy;
    bool m_strategyHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
