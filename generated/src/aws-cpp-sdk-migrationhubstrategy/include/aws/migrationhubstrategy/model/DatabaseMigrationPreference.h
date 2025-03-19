/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/Heterogeneous.h>
#include <aws/migrationhubstrategy/model/Homogeneous.h>
#include <aws/migrationhubstrategy/model/NoDatabaseMigrationPreference.h>
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
   * <p> Preferences for migrating a database to AWS. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/DatabaseMigrationPreference">AWS
   * API Reference</a></p>
   */
  class DatabaseMigrationPreference
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseMigrationPreference() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseMigrationPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API DatabaseMigrationPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether you are interested in moving from one type of database to
     * another. For example, from SQL Server to Amazon Aurora MySQL-Compatible Edition.
     * </p>
     */
    inline const Heterogeneous& GetHeterogeneous() const { return m_heterogeneous; }
    inline bool HeterogeneousHasBeenSet() const { return m_heterogeneousHasBeenSet; }
    template<typename HeterogeneousT = Heterogeneous>
    void SetHeterogeneous(HeterogeneousT&& value) { m_heterogeneousHasBeenSet = true; m_heterogeneous = std::forward<HeterogeneousT>(value); }
    template<typename HeterogeneousT = Heterogeneous>
    DatabaseMigrationPreference& WithHeterogeneous(HeterogeneousT&& value) { SetHeterogeneous(std::forward<HeterogeneousT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether you are interested in moving to the same type of database
     * into AWS. For example, from SQL Server in your environment to SQL Server on AWS.
     * </p>
     */
    inline const Homogeneous& GetHomogeneous() const { return m_homogeneous; }
    inline bool HomogeneousHasBeenSet() const { return m_homogeneousHasBeenSet; }
    template<typename HomogeneousT = Homogeneous>
    void SetHomogeneous(HomogeneousT&& value) { m_homogeneousHasBeenSet = true; m_homogeneous = std::forward<HomogeneousT>(value); }
    template<typename HomogeneousT = Homogeneous>
    DatabaseMigrationPreference& WithHomogeneous(HomogeneousT&& value) { SetHomogeneous(std::forward<HomogeneousT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicated that you do not prefer heterogeneous or homogeneous. </p>
     */
    inline const NoDatabaseMigrationPreference& GetNoPreference() const { return m_noPreference; }
    inline bool NoPreferenceHasBeenSet() const { return m_noPreferenceHasBeenSet; }
    template<typename NoPreferenceT = NoDatabaseMigrationPreference>
    void SetNoPreference(NoPreferenceT&& value) { m_noPreferenceHasBeenSet = true; m_noPreference = std::forward<NoPreferenceT>(value); }
    template<typename NoPreferenceT = NoDatabaseMigrationPreference>
    DatabaseMigrationPreference& WithNoPreference(NoPreferenceT&& value) { SetNoPreference(std::forward<NoPreferenceT>(value)); return *this;}
    ///@}
  private:

    Heterogeneous m_heterogeneous;
    bool m_heterogeneousHasBeenSet = false;

    Homogeneous m_homogeneous;
    bool m_homogeneousHasBeenSet = false;

    NoDatabaseMigrationPreference m_noPreference;
    bool m_noPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
