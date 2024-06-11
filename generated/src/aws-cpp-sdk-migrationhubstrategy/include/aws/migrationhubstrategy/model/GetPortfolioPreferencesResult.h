﻿/**
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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioPreferencesResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The classification for application component types.</p>
     */
    inline const ApplicationMode& GetApplicationMode() const{ return m_applicationMode; }
    inline void SetApplicationMode(const ApplicationMode& value) { m_applicationMode = value; }
    inline void SetApplicationMode(ApplicationMode&& value) { m_applicationMode = std::move(value); }
    inline GetPortfolioPreferencesResult& WithApplicationMode(const ApplicationMode& value) { SetApplicationMode(value); return *this;}
    inline GetPortfolioPreferencesResult& WithApplicationMode(ApplicationMode&& value) { SetApplicationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline const ApplicationPreferences& GetApplicationPreferences() const{ return m_applicationPreferences; }
    inline void SetApplicationPreferences(const ApplicationPreferences& value) { m_applicationPreferences = value; }
    inline void SetApplicationPreferences(ApplicationPreferences&& value) { m_applicationPreferences = std::move(value); }
    inline GetPortfolioPreferencesResult& WithApplicationPreferences(const ApplicationPreferences& value) { SetApplicationPreferences(value); return *this;}
    inline GetPortfolioPreferencesResult& WithApplicationPreferences(ApplicationPreferences&& value) { SetApplicationPreferences(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline const DatabasePreferences& GetDatabasePreferences() const{ return m_databasePreferences; }
    inline void SetDatabasePreferences(const DatabasePreferences& value) { m_databasePreferences = value; }
    inline void SetDatabasePreferences(DatabasePreferences&& value) { m_databasePreferences = std::move(value); }
    inline GetPortfolioPreferencesResult& WithDatabasePreferences(const DatabasePreferences& value) { SetDatabasePreferences(value); return *this;}
    inline GetPortfolioPreferencesResult& WithDatabasePreferences(DatabasePreferences&& value) { SetDatabasePreferences(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rank of business goals based on priority. </p>
     */
    inline const PrioritizeBusinessGoals& GetPrioritizeBusinessGoals() const{ return m_prioritizeBusinessGoals; }
    inline void SetPrioritizeBusinessGoals(const PrioritizeBusinessGoals& value) { m_prioritizeBusinessGoals = value; }
    inline void SetPrioritizeBusinessGoals(PrioritizeBusinessGoals&& value) { m_prioritizeBusinessGoals = std::move(value); }
    inline GetPortfolioPreferencesResult& WithPrioritizeBusinessGoals(const PrioritizeBusinessGoals& value) { SetPrioritizeBusinessGoals(value); return *this;}
    inline GetPortfolioPreferencesResult& WithPrioritizeBusinessGoals(PrioritizeBusinessGoals&& value) { SetPrioritizeBusinessGoals(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPortfolioPreferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPortfolioPreferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPortfolioPreferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ApplicationMode m_applicationMode;

    ApplicationPreferences m_applicationPreferences;

    DatabasePreferences m_databasePreferences;

    PrioritizeBusinessGoals m_prioritizeBusinessGoals;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
