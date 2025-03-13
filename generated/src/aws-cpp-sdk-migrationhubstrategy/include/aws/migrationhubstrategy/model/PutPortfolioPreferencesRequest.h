/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/migrationhubstrategy/model/ApplicationMode.h>
#include <aws/migrationhubstrategy/model/ApplicationPreferences.h>
#include <aws/migrationhubstrategy/model/DatabasePreferences.h>
#include <aws/migrationhubstrategy/model/PrioritizeBusinessGoals.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class PutPortfolioPreferencesRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PutPortfolioPreferencesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPortfolioPreferences"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The classification for application component types.</p>
     */
    inline ApplicationMode GetApplicationMode() const { return m_applicationMode; }
    inline bool ApplicationModeHasBeenSet() const { return m_applicationModeHasBeenSet; }
    inline void SetApplicationMode(ApplicationMode value) { m_applicationModeHasBeenSet = true; m_applicationMode = value; }
    inline PutPortfolioPreferencesRequest& WithApplicationMode(ApplicationMode value) { SetApplicationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline const ApplicationPreferences& GetApplicationPreferences() const { return m_applicationPreferences; }
    inline bool ApplicationPreferencesHasBeenSet() const { return m_applicationPreferencesHasBeenSet; }
    template<typename ApplicationPreferencesT = ApplicationPreferences>
    void SetApplicationPreferences(ApplicationPreferencesT&& value) { m_applicationPreferencesHasBeenSet = true; m_applicationPreferences = std::forward<ApplicationPreferencesT>(value); }
    template<typename ApplicationPreferencesT = ApplicationPreferences>
    PutPortfolioPreferencesRequest& WithApplicationPreferences(ApplicationPreferencesT&& value) { SetApplicationPreferences(std::forward<ApplicationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline const DatabasePreferences& GetDatabasePreferences() const { return m_databasePreferences; }
    inline bool DatabasePreferencesHasBeenSet() const { return m_databasePreferencesHasBeenSet; }
    template<typename DatabasePreferencesT = DatabasePreferences>
    void SetDatabasePreferences(DatabasePreferencesT&& value) { m_databasePreferencesHasBeenSet = true; m_databasePreferences = std::forward<DatabasePreferencesT>(value); }
    template<typename DatabasePreferencesT = DatabasePreferences>
    PutPortfolioPreferencesRequest& WithDatabasePreferences(DatabasePreferencesT&& value) { SetDatabasePreferences(std::forward<DatabasePreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rank of the business goals based on priority. </p>
     */
    inline const PrioritizeBusinessGoals& GetPrioritizeBusinessGoals() const { return m_prioritizeBusinessGoals; }
    inline bool PrioritizeBusinessGoalsHasBeenSet() const { return m_prioritizeBusinessGoalsHasBeenSet; }
    template<typename PrioritizeBusinessGoalsT = PrioritizeBusinessGoals>
    void SetPrioritizeBusinessGoals(PrioritizeBusinessGoalsT&& value) { m_prioritizeBusinessGoalsHasBeenSet = true; m_prioritizeBusinessGoals = std::forward<PrioritizeBusinessGoalsT>(value); }
    template<typename PrioritizeBusinessGoalsT = PrioritizeBusinessGoals>
    PutPortfolioPreferencesRequest& WithPrioritizeBusinessGoals(PrioritizeBusinessGoalsT&& value) { SetPrioritizeBusinessGoals(std::forward<PrioritizeBusinessGoalsT>(value)); return *this;}
    ///@}
  private:

    ApplicationMode m_applicationMode{ApplicationMode::NOT_SET};
    bool m_applicationModeHasBeenSet = false;

    ApplicationPreferences m_applicationPreferences;
    bool m_applicationPreferencesHasBeenSet = false;

    DatabasePreferences m_databasePreferences;
    bool m_databasePreferencesHasBeenSet = false;

    PrioritizeBusinessGoals m_prioritizeBusinessGoals;
    bool m_prioritizeBusinessGoalsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
