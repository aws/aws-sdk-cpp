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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoDatabaseMigrationPreference() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoDatabaseMigrationPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoDatabaseMigrationPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The target database engine for database migration preference that you
     * specify. </p>
     */
    inline const Aws::Vector<TargetDatabaseEngine>& GetTargetDatabaseEngine() const { return m_targetDatabaseEngine; }
    inline bool TargetDatabaseEngineHasBeenSet() const { return m_targetDatabaseEngineHasBeenSet; }
    template<typename TargetDatabaseEngineT = Aws::Vector<TargetDatabaseEngine>>
    void SetTargetDatabaseEngine(TargetDatabaseEngineT&& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine = std::forward<TargetDatabaseEngineT>(value); }
    template<typename TargetDatabaseEngineT = Aws::Vector<TargetDatabaseEngine>>
    NoDatabaseMigrationPreference& WithTargetDatabaseEngine(TargetDatabaseEngineT&& value) { SetTargetDatabaseEngine(std::forward<TargetDatabaseEngineT>(value)); return *this;}
    inline NoDatabaseMigrationPreference& AddTargetDatabaseEngine(TargetDatabaseEngine value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<TargetDatabaseEngine> m_targetDatabaseEngine;
    bool m_targetDatabaseEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
