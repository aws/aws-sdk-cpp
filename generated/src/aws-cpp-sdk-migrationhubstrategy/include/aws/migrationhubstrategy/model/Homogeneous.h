/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/HomogeneousTargetDatabaseEngine.h>
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
   * <p> The object containing details about homogeneous database preferences.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/Homogeneous">AWS
   * API Reference</a></p>
   */
  class Homogeneous
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Homogeneous() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Homogeneous(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Homogeneous& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The target database engine for homogeneous database migration preferences.
     * </p>
     */
    inline const Aws::Vector<HomogeneousTargetDatabaseEngine>& GetTargetDatabaseEngine() const { return m_targetDatabaseEngine; }
    inline bool TargetDatabaseEngineHasBeenSet() const { return m_targetDatabaseEngineHasBeenSet; }
    template<typename TargetDatabaseEngineT = Aws::Vector<HomogeneousTargetDatabaseEngine>>
    void SetTargetDatabaseEngine(TargetDatabaseEngineT&& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine = std::forward<TargetDatabaseEngineT>(value); }
    template<typename TargetDatabaseEngineT = Aws::Vector<HomogeneousTargetDatabaseEngine>>
    Homogeneous& WithTargetDatabaseEngine(TargetDatabaseEngineT&& value) { SetTargetDatabaseEngine(std::forward<TargetDatabaseEngineT>(value)); return *this;}
    inline Homogeneous& AddTargetDatabaseEngine(HomogeneousTargetDatabaseEngine value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<HomogeneousTargetDatabaseEngine> m_targetDatabaseEngine;
    bool m_targetDatabaseEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
