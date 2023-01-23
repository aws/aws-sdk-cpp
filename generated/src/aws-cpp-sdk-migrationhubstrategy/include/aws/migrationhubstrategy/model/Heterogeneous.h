/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/HeterogeneousTargetDatabaseEngine.h>
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
   * <p> The object containing details about heterogeneous database preferences.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/Heterogeneous">AWS
   * API Reference</a></p>
   */
  class Heterogeneous
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Heterogeneous();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Heterogeneous(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Heterogeneous& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The target database engine for heterogeneous database migration preference.
     * </p>
     */
    inline const Aws::Vector<HeterogeneousTargetDatabaseEngine>& GetTargetDatabaseEngine() const{ return m_targetDatabaseEngine; }

    /**
     * <p> The target database engine for heterogeneous database migration preference.
     * </p>
     */
    inline bool TargetDatabaseEngineHasBeenSet() const { return m_targetDatabaseEngineHasBeenSet; }

    /**
     * <p> The target database engine for heterogeneous database migration preference.
     * </p>
     */
    inline void SetTargetDatabaseEngine(const Aws::Vector<HeterogeneousTargetDatabaseEngine>& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine = value; }

    /**
     * <p> The target database engine for heterogeneous database migration preference.
     * </p>
     */
    inline void SetTargetDatabaseEngine(Aws::Vector<HeterogeneousTargetDatabaseEngine>&& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine = std::move(value); }

    /**
     * <p> The target database engine for heterogeneous database migration preference.
     * </p>
     */
    inline Heterogeneous& WithTargetDatabaseEngine(const Aws::Vector<HeterogeneousTargetDatabaseEngine>& value) { SetTargetDatabaseEngine(value); return *this;}

    /**
     * <p> The target database engine for heterogeneous database migration preference.
     * </p>
     */
    inline Heterogeneous& WithTargetDatabaseEngine(Aws::Vector<HeterogeneousTargetDatabaseEngine>&& value) { SetTargetDatabaseEngine(std::move(value)); return *this;}

    /**
     * <p> The target database engine for heterogeneous database migration preference.
     * </p>
     */
    inline Heterogeneous& AddTargetDatabaseEngine(const HeterogeneousTargetDatabaseEngine& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine.push_back(value); return *this; }

    /**
     * <p> The target database engine for heterogeneous database migration preference.
     * </p>
     */
    inline Heterogeneous& AddTargetDatabaseEngine(HeterogeneousTargetDatabaseEngine&& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<HeterogeneousTargetDatabaseEngine> m_targetDatabaseEngine;
    bool m_targetDatabaseEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
