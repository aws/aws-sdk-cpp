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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabasePreferences();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabasePreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabasePreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies whether you're interested in self-managed databases or databases
     * managed by AWS. </p>
     */
    inline const DatabaseManagementPreference& GetDatabaseManagementPreference() const{ return m_databaseManagementPreference; }

    /**
     * <p> Specifies whether you're interested in self-managed databases or databases
     * managed by AWS. </p>
     */
    inline bool DatabaseManagementPreferenceHasBeenSet() const { return m_databaseManagementPreferenceHasBeenSet; }

    /**
     * <p> Specifies whether you're interested in self-managed databases or databases
     * managed by AWS. </p>
     */
    inline void SetDatabaseManagementPreference(const DatabaseManagementPreference& value) { m_databaseManagementPreferenceHasBeenSet = true; m_databaseManagementPreference = value; }

    /**
     * <p> Specifies whether you're interested in self-managed databases or databases
     * managed by AWS. </p>
     */
    inline void SetDatabaseManagementPreference(DatabaseManagementPreference&& value) { m_databaseManagementPreferenceHasBeenSet = true; m_databaseManagementPreference = std::move(value); }

    /**
     * <p> Specifies whether you're interested in self-managed databases or databases
     * managed by AWS. </p>
     */
    inline DatabasePreferences& WithDatabaseManagementPreference(const DatabaseManagementPreference& value) { SetDatabaseManagementPreference(value); return *this;}

    /**
     * <p> Specifies whether you're interested in self-managed databases or databases
     * managed by AWS. </p>
     */
    inline DatabasePreferences& WithDatabaseManagementPreference(DatabaseManagementPreference&& value) { SetDatabaseManagementPreference(std::move(value)); return *this;}


    /**
     * <p> Specifies your preferred migration path. </p>
     */
    inline const DatabaseMigrationPreference& GetDatabaseMigrationPreference() const{ return m_databaseMigrationPreference; }

    /**
     * <p> Specifies your preferred migration path. </p>
     */
    inline bool DatabaseMigrationPreferenceHasBeenSet() const { return m_databaseMigrationPreferenceHasBeenSet; }

    /**
     * <p> Specifies your preferred migration path. </p>
     */
    inline void SetDatabaseMigrationPreference(const DatabaseMigrationPreference& value) { m_databaseMigrationPreferenceHasBeenSet = true; m_databaseMigrationPreference = value; }

    /**
     * <p> Specifies your preferred migration path. </p>
     */
    inline void SetDatabaseMigrationPreference(DatabaseMigrationPreference&& value) { m_databaseMigrationPreferenceHasBeenSet = true; m_databaseMigrationPreference = std::move(value); }

    /**
     * <p> Specifies your preferred migration path. </p>
     */
    inline DatabasePreferences& WithDatabaseMigrationPreference(const DatabaseMigrationPreference& value) { SetDatabaseMigrationPreference(value); return *this;}

    /**
     * <p> Specifies your preferred migration path. </p>
     */
    inline DatabasePreferences& WithDatabaseMigrationPreference(DatabaseMigrationPreference&& value) { SetDatabaseMigrationPreference(std::move(value)); return *this;}

  private:

    DatabaseManagementPreference m_databaseManagementPreference;
    bool m_databaseManagementPreferenceHasBeenSet = false;

    DatabaseMigrationPreference m_databaseMigrationPreference;
    bool m_databaseMigrationPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
