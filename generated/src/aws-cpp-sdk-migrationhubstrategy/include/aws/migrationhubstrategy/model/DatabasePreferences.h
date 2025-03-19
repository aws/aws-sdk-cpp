/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/DatabaseManagementPreference.h>
#include <aws/migrationhubstrategy/model/DatabaseMigrationPreference.h>
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
   * <p> Preferences on managing your databases on AWS. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/DatabasePreferences">AWS
   * API Reference</a></p>
   */
  class DatabasePreferences
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabasePreferences() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabasePreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabasePreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies whether you're interested in self-managed databases or databases
     * managed by AWS. </p>
     */
    inline DatabaseManagementPreference GetDatabaseManagementPreference() const { return m_databaseManagementPreference; }
    inline bool DatabaseManagementPreferenceHasBeenSet() const { return m_databaseManagementPreferenceHasBeenSet; }
    inline void SetDatabaseManagementPreference(DatabaseManagementPreference value) { m_databaseManagementPreferenceHasBeenSet = true; m_databaseManagementPreference = value; }
    inline DatabasePreferences& WithDatabaseManagementPreference(DatabaseManagementPreference value) { SetDatabaseManagementPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies your preferred migration path. </p>
     */
    inline const DatabaseMigrationPreference& GetDatabaseMigrationPreference() const { return m_databaseMigrationPreference; }
    inline bool DatabaseMigrationPreferenceHasBeenSet() const { return m_databaseMigrationPreferenceHasBeenSet; }
    template<typename DatabaseMigrationPreferenceT = DatabaseMigrationPreference>
    void SetDatabaseMigrationPreference(DatabaseMigrationPreferenceT&& value) { m_databaseMigrationPreferenceHasBeenSet = true; m_databaseMigrationPreference = std::forward<DatabaseMigrationPreferenceT>(value); }
    template<typename DatabaseMigrationPreferenceT = DatabaseMigrationPreference>
    DatabasePreferences& WithDatabaseMigrationPreference(DatabaseMigrationPreferenceT&& value) { SetDatabaseMigrationPreference(std::forward<DatabaseMigrationPreferenceT>(value)); return *this;}
    ///@}
  private:

    DatabaseManagementPreference m_databaseManagementPreference{DatabaseManagementPreference::NOT_SET};
    bool m_databaseManagementPreferenceHasBeenSet = false;

    DatabaseMigrationPreference m_databaseMigrationPreference;
    bool m_databaseMigrationPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
