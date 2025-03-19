/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/Strategy.h>
#include <aws/migrationhubstrategy/model/TargetDestination.h>
#include <aws/migrationhubstrategy/model/TransformationTool.h>
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
   * <p> Contains a recommendation set. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/RecommendationSet">AWS
   * API Reference</a></p>
   */
  class RecommendationSet
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationSet() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The recommended strategy. </p>
     */
    inline Strategy GetStrategy() const { return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(Strategy value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline RecommendationSet& WithStrategy(Strategy value) { SetStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The recommended target destination. </p>
     */
    inline TargetDestination GetTargetDestination() const { return m_targetDestination; }
    inline bool TargetDestinationHasBeenSet() const { return m_targetDestinationHasBeenSet; }
    inline void SetTargetDestination(TargetDestination value) { m_targetDestinationHasBeenSet = true; m_targetDestination = value; }
    inline RecommendationSet& WithTargetDestination(TargetDestination value) { SetTargetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The target destination for the recommendation set. </p>
     */
    inline const TransformationTool& GetTransformationTool() const { return m_transformationTool; }
    inline bool TransformationToolHasBeenSet() const { return m_transformationToolHasBeenSet; }
    template<typename TransformationToolT = TransformationTool>
    void SetTransformationTool(TransformationToolT&& value) { m_transformationToolHasBeenSet = true; m_transformationTool = std::forward<TransformationToolT>(value); }
    template<typename TransformationToolT = TransformationTool>
    RecommendationSet& WithTransformationTool(TransformationToolT&& value) { SetTransformationTool(std::forward<TransformationToolT>(value)); return *this;}
    ///@}
  private:

    Strategy m_strategy{Strategy::NOT_SET};
    bool m_strategyHasBeenSet = false;

    TargetDestination m_targetDestination{TargetDestination::NOT_SET};
    bool m_targetDestinationHasBeenSet = false;

    TransformationTool m_transformationTool;
    bool m_transformationToolHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
