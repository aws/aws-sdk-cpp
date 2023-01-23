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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationSet();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RecommendationSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The recommended strategy. </p>
     */
    inline const Strategy& GetStrategy() const{ return m_strategy; }

    /**
     * <p> The recommended strategy. </p>
     */
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }

    /**
     * <p> The recommended strategy. </p>
     */
    inline void SetStrategy(const Strategy& value) { m_strategyHasBeenSet = true; m_strategy = value; }

    /**
     * <p> The recommended strategy. </p>
     */
    inline void SetStrategy(Strategy&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }

    /**
     * <p> The recommended strategy. </p>
     */
    inline RecommendationSet& WithStrategy(const Strategy& value) { SetStrategy(value); return *this;}

    /**
     * <p> The recommended strategy. </p>
     */
    inline RecommendationSet& WithStrategy(Strategy&& value) { SetStrategy(std::move(value)); return *this;}


    /**
     * <p> The recommended target destination. </p>
     */
    inline const TargetDestination& GetTargetDestination() const{ return m_targetDestination; }

    /**
     * <p> The recommended target destination. </p>
     */
    inline bool TargetDestinationHasBeenSet() const { return m_targetDestinationHasBeenSet; }

    /**
     * <p> The recommended target destination. </p>
     */
    inline void SetTargetDestination(const TargetDestination& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = value; }

    /**
     * <p> The recommended target destination. </p>
     */
    inline void SetTargetDestination(TargetDestination&& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = std::move(value); }

    /**
     * <p> The recommended target destination. </p>
     */
    inline RecommendationSet& WithTargetDestination(const TargetDestination& value) { SetTargetDestination(value); return *this;}

    /**
     * <p> The recommended target destination. </p>
     */
    inline RecommendationSet& WithTargetDestination(TargetDestination&& value) { SetTargetDestination(std::move(value)); return *this;}


    /**
     * <p> The target destination for the recommendation set. </p>
     */
    inline const TransformationTool& GetTransformationTool() const{ return m_transformationTool; }

    /**
     * <p> The target destination for the recommendation set. </p>
     */
    inline bool TransformationToolHasBeenSet() const { return m_transformationToolHasBeenSet; }

    /**
     * <p> The target destination for the recommendation set. </p>
     */
    inline void SetTransformationTool(const TransformationTool& value) { m_transformationToolHasBeenSet = true; m_transformationTool = value; }

    /**
     * <p> The target destination for the recommendation set. </p>
     */
    inline void SetTransformationTool(TransformationTool&& value) { m_transformationToolHasBeenSet = true; m_transformationTool = std::move(value); }

    /**
     * <p> The target destination for the recommendation set. </p>
     */
    inline RecommendationSet& WithTransformationTool(const TransformationTool& value) { SetTransformationTool(value); return *this;}

    /**
     * <p> The target destination for the recommendation set. </p>
     */
    inline RecommendationSet& WithTransformationTool(TransformationTool&& value) { SetTransformationTool(std::move(value)); return *this;}

  private:

    Strategy m_strategy;
    bool m_strategyHasBeenSet = false;

    TargetDestination m_targetDestination;
    bool m_targetDestinationHasBeenSet = false;

    TransformationTool m_transformationTool;
    bool m_transformationToolHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
