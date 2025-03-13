/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/ApplicationMode.h>
#include <aws/migrationhubstrategy/model/ApplicationPreferences.h>
#include <aws/migrationhubstrategy/model/DatabasePreferences.h>
#include <aws/migrationhubstrategy/model/PrioritizeBusinessGoals.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class GetPortfolioPreferencesResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioPreferencesResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The classification for application component types.</p>
     */
    inline ApplicationMode GetApplicationMode() const { return m_applicationMode; }
    inline void SetApplicationMode(ApplicationMode value) { m_applicationModeHasBeenSet = true; m_applicationMode = value; }
    inline GetPortfolioPreferencesResult& WithApplicationMode(ApplicationMode value) { SetApplicationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline const ApplicationPreferences& GetApplicationPreferences() const { return m_applicationPreferences; }
    template<typename ApplicationPreferencesT = ApplicationPreferences>
    void SetApplicationPreferences(ApplicationPreferencesT&& value) { m_applicationPreferencesHasBeenSet = true; m_applicationPreferences = std::forward<ApplicationPreferencesT>(value); }
    template<typename ApplicationPreferencesT = ApplicationPreferences>
    GetPortfolioPreferencesResult& WithApplicationPreferences(ApplicationPreferencesT&& value) { SetApplicationPreferences(std::forward<ApplicationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline const DatabasePreferences& GetDatabasePreferences() const { return m_databasePreferences; }
    template<typename DatabasePreferencesT = DatabasePreferences>
    void SetDatabasePreferences(DatabasePreferencesT&& value) { m_databasePreferencesHasBeenSet = true; m_databasePreferences = std::forward<DatabasePreferencesT>(value); }
    template<typename DatabasePreferencesT = DatabasePreferences>
    GetPortfolioPreferencesResult& WithDatabasePreferences(DatabasePreferencesT&& value) { SetDatabasePreferences(std::forward<DatabasePreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rank of business goals based on priority. </p>
     */
    inline const PrioritizeBusinessGoals& GetPrioritizeBusinessGoals() const { return m_prioritizeBusinessGoals; }
    template<typename PrioritizeBusinessGoalsT = PrioritizeBusinessGoals>
    void SetPrioritizeBusinessGoals(PrioritizeBusinessGoalsT&& value) { m_prioritizeBusinessGoalsHasBeenSet = true; m_prioritizeBusinessGoals = std::forward<PrioritizeBusinessGoalsT>(value); }
    template<typename PrioritizeBusinessGoalsT = PrioritizeBusinessGoals>
    GetPortfolioPreferencesResult& WithPrioritizeBusinessGoals(PrioritizeBusinessGoalsT&& value) { SetPrioritizeBusinessGoals(std::forward<PrioritizeBusinessGoalsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPortfolioPreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
