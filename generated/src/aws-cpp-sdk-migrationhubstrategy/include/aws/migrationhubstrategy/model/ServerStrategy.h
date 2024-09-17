/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/RecommendationSet.h>
#include <aws/migrationhubstrategy/model/StrategyRecommendation.h>
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
   * <p> Contains information about a strategy recommendation for a server.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ServerStrategy">AWS
   * API Reference</a></p>
   */
  class ServerStrategy
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerStrategy();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Set to true if the recommendation is set as preferred. </p>
     */
    inline bool GetIsPreferred() const{ return m_isPreferred; }
    inline bool IsPreferredHasBeenSet() const { return m_isPreferredHasBeenSet; }
    inline void SetIsPreferred(bool value) { m_isPreferredHasBeenSet = true; m_isPreferred = value; }
    inline ServerStrategy& WithIsPreferred(bool value) { SetIsPreferred(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of application components with this strategy recommendation
     * running on the server. </p>
     */
    inline int GetNumberOfApplicationComponents() const{ return m_numberOfApplicationComponents; }
    inline bool NumberOfApplicationComponentsHasBeenSet() const { return m_numberOfApplicationComponentsHasBeenSet; }
    inline void SetNumberOfApplicationComponents(int value) { m_numberOfApplicationComponentsHasBeenSet = true; m_numberOfApplicationComponents = value; }
    inline ServerStrategy& WithNumberOfApplicationComponents(int value) { SetNumberOfApplicationComponents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Strategy recommendation for the server. </p>
     */
    inline const RecommendationSet& GetRecommendation() const{ return m_recommendation; }
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
    inline void SetRecommendation(const RecommendationSet& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }
    inline void SetRecommendation(RecommendationSet&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }
    inline ServerStrategy& WithRecommendation(const RecommendationSet& value) { SetRecommendation(value); return *this;}
    inline ServerStrategy& WithRecommendation(RecommendationSet&& value) { SetRecommendation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The recommendation status of the strategy for the server. </p>
     */
    inline const StrategyRecommendation& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StrategyRecommendation& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StrategyRecommendation&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ServerStrategy& WithStatus(const StrategyRecommendation& value) { SetStatus(value); return *this;}
    inline ServerStrategy& WithStatus(StrategyRecommendation&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    bool m_isPreferred;
    bool m_isPreferredHasBeenSet = false;

    int m_numberOfApplicationComponents;
    bool m_numberOfApplicationComponentsHasBeenSet = false;

    RecommendationSet m_recommendation;
    bool m_recommendationHasBeenSet = false;

    StrategyRecommendation m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
