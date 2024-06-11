﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/Strategy.h>
#include <aws/migrationhubstrategy/model/TargetDestination.h>
#include <aws/migrationhubstrategy/model/TransformationToolName.h>
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
   * <p> Information about all the available strategy options for migrating and
   * modernizing an application component. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StrategyOption">AWS
   * API Reference</a></p>
   */
  class StrategyOption
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StrategyOption();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StrategyOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StrategyOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates if a specific strategy is preferred for the application component.
     * </p>
     */
    inline bool GetIsPreferred() const{ return m_isPreferred; }
    inline bool IsPreferredHasBeenSet() const { return m_isPreferredHasBeenSet; }
    inline void SetIsPreferred(bool value) { m_isPreferredHasBeenSet = true; m_isPreferred = value; }
    inline StrategyOption& WithIsPreferred(bool value) { SetIsPreferred(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Type of transformation. For example, Rehost, Replatform, and so on. </p>
     */
    inline const Strategy& GetStrategy() const{ return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(const Strategy& value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline void SetStrategy(Strategy&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }
    inline StrategyOption& WithStrategy(const Strategy& value) { SetStrategy(value); return *this;}
    inline StrategyOption& WithStrategy(Strategy&& value) { SetStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Destination information about where the application component can migrate
     * to. For example, <code>EC2</code>, <code>ECS</code>, and so on. </p>
     */
    inline const TargetDestination& GetTargetDestination() const{ return m_targetDestination; }
    inline bool TargetDestinationHasBeenSet() const { return m_targetDestinationHasBeenSet; }
    inline void SetTargetDestination(const TargetDestination& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = value; }
    inline void SetTargetDestination(TargetDestination&& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = std::move(value); }
    inline StrategyOption& WithTargetDestination(const TargetDestination& value) { SetTargetDestination(value); return *this;}
    inline StrategyOption& WithTargetDestination(TargetDestination&& value) { SetTargetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the tool that can be used to transform an application component
     * using this strategy. </p>
     */
    inline const TransformationToolName& GetToolName() const{ return m_toolName; }
    inline bool ToolNameHasBeenSet() const { return m_toolNameHasBeenSet; }
    inline void SetToolName(const TransformationToolName& value) { m_toolNameHasBeenSet = true; m_toolName = value; }
    inline void SetToolName(TransformationToolName&& value) { m_toolNameHasBeenSet = true; m_toolName = std::move(value); }
    inline StrategyOption& WithToolName(const TransformationToolName& value) { SetToolName(value); return *this;}
    inline StrategyOption& WithToolName(TransformationToolName&& value) { SetToolName(std::move(value)); return *this;}
    ///@}
  private:

    bool m_isPreferred;
    bool m_isPreferredHasBeenSet = false;

    Strategy m_strategy;
    bool m_strategyHasBeenSet = false;

    TargetDestination m_targetDestination;
    bool m_targetDestinationHasBeenSet = false;

    TransformationToolName m_toolName;
    bool m_toolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
