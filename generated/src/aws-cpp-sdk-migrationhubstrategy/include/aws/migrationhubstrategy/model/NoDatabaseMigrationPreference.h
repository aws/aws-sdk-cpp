/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/TargetDatabaseEngine.h>
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
   * <p> The object containing details about database migration preferences, when you
   * have no particular preference. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/NoDatabaseMigrationPreference">AWS
   * API Reference</a></p>
   */
  class NoDatabaseMigrationPreference
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoDatabaseMigrationPreference();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoDatabaseMigrationPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoDatabaseMigrationPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The target database engine for database migration preference that you
     * specify. </p>
     */
    inline const Aws::Vector<TargetDatabaseEngine>& GetTargetDatabaseEngine() const{ return m_targetDatabaseEngine; }

    /**
     * <p> The target database engine for database migration preference that you
     * specify. </p>
     */
    inline bool TargetDatabaseEngineHasBeenSet() const { return m_targetDatabaseEngineHasBeenSet; }

    /**
     * <p> The target database engine for database migration preference that you
     * specify. </p>
     */
    inline void SetTargetDatabaseEngine(const Aws::Vector<TargetDatabaseEngine>& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine = value; }

    /**
     * <p> The target database engine for database migration preference that you
     * specify. </p>
     */
    inline void SetTargetDatabaseEngine(Aws::Vector<TargetDatabaseEngine>&& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine = std::move(value); }

    /**
     * <p> The target database engine for database migration preference that you
     * specify. </p>
     */
    inline NoDatabaseMigrationPreference& WithTargetDatabaseEngine(const Aws::Vector<TargetDatabaseEngine>& value) { SetTargetDatabaseEngine(value); return *this;}

    /**
     * <p> The target database engine for database migration preference that you
     * specify. </p>
     */
    inline NoDatabaseMigrationPreference& WithTargetDatabaseEngine(Aws::Vector<TargetDatabaseEngine>&& value) { SetTargetDatabaseEngine(std::move(value)); return *this;}

    /**
     * <p> The target database engine for database migration preference that you
     * specify. </p>
     */
    inline NoDatabaseMigrationPreference& AddTargetDatabaseEngine(const TargetDatabaseEngine& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine.push_back(value); return *this; }

    /**
     * <p> The target database engine for database migration preference that you
     * specify. </p>
     */
    inline NoDatabaseMigrationPreference& AddTargetDatabaseEngine(TargetDatabaseEngine&& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TargetDatabaseEngine> m_targetDatabaseEngine;
    bool m_targetDatabaseEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
