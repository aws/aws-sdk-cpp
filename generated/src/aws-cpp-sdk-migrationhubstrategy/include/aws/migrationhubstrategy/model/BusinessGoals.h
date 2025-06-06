﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>

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
   * <p> Business goals that you specify. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/BusinessGoals">AWS
   * API Reference</a></p>
   */
  class BusinessGoals
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API BusinessGoals() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API BusinessGoals(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API BusinessGoals& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Business goal to reduce license costs. </p>
     */
    inline int GetLicenseCostReduction() const { return m_licenseCostReduction; }
    inline bool LicenseCostReductionHasBeenSet() const { return m_licenseCostReductionHasBeenSet; }
    inline void SetLicenseCostReduction(int value) { m_licenseCostReductionHasBeenSet = true; m_licenseCostReduction = value; }
    inline BusinessGoals& WithLicenseCostReduction(int value) { SetLicenseCostReduction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Business goal to modernize infrastructure by moving to cloud native
     * technologies. </p>
     */
    inline int GetModernizeInfrastructureWithCloudNativeTechnologies() const { return m_modernizeInfrastructureWithCloudNativeTechnologies; }
    inline bool ModernizeInfrastructureWithCloudNativeTechnologiesHasBeenSet() const { return m_modernizeInfrastructureWithCloudNativeTechnologiesHasBeenSet; }
    inline void SetModernizeInfrastructureWithCloudNativeTechnologies(int value) { m_modernizeInfrastructureWithCloudNativeTechnologiesHasBeenSet = true; m_modernizeInfrastructureWithCloudNativeTechnologies = value; }
    inline BusinessGoals& WithModernizeInfrastructureWithCloudNativeTechnologies(int value) { SetModernizeInfrastructureWithCloudNativeTechnologies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Business goal to reduce the operational overhead on the team by moving into
     * managed services. </p>
     */
    inline int GetReduceOperationalOverheadWithManagedServices() const { return m_reduceOperationalOverheadWithManagedServices; }
    inline bool ReduceOperationalOverheadWithManagedServicesHasBeenSet() const { return m_reduceOperationalOverheadWithManagedServicesHasBeenSet; }
    inline void SetReduceOperationalOverheadWithManagedServices(int value) { m_reduceOperationalOverheadWithManagedServicesHasBeenSet = true; m_reduceOperationalOverheadWithManagedServices = value; }
    inline BusinessGoals& WithReduceOperationalOverheadWithManagedServices(int value) { SetReduceOperationalOverheadWithManagedServices(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Business goal to achieve migration at a fast pace. </p>
     */
    inline int GetSpeedOfMigration() const { return m_speedOfMigration; }
    inline bool SpeedOfMigrationHasBeenSet() const { return m_speedOfMigrationHasBeenSet; }
    inline void SetSpeedOfMigration(int value) { m_speedOfMigrationHasBeenSet = true; m_speedOfMigration = value; }
    inline BusinessGoals& WithSpeedOfMigration(int value) { SetSpeedOfMigration(value); return *this;}
    ///@}
  private:

    int m_licenseCostReduction{0};
    bool m_licenseCostReductionHasBeenSet = false;

    int m_modernizeInfrastructureWithCloudNativeTechnologies{0};
    bool m_modernizeInfrastructureWithCloudNativeTechnologiesHasBeenSet = false;

    int m_reduceOperationalOverheadWithManagedServices{0};
    bool m_reduceOperationalOverheadWithManagedServicesHasBeenSet = false;

    int m_speedOfMigration{0};
    bool m_speedOfMigrationHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
