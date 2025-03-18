/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/AwsManagedResources.h>
#include <aws/migrationhubstrategy/model/NoManagementPreference.h>
#include <aws/migrationhubstrategy/model/SelfManageResources.h>
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
   * <p> Preferences for migrating an application to AWS. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ManagementPreference">AWS
   * API Reference</a></p>
   */
  class ManagementPreference
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ManagementPreference() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ManagementPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ManagementPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates interest in solutions that are managed by AWS. </p>
     */
    inline const AwsManagedResources& GetAwsManagedResources() const { return m_awsManagedResources; }
    inline bool AwsManagedResourcesHasBeenSet() const { return m_awsManagedResourcesHasBeenSet; }
    template<typename AwsManagedResourcesT = AwsManagedResources>
    void SetAwsManagedResources(AwsManagedResourcesT&& value) { m_awsManagedResourcesHasBeenSet = true; m_awsManagedResources = std::forward<AwsManagedResourcesT>(value); }
    template<typename AwsManagedResourcesT = AwsManagedResources>
    ManagementPreference& WithAwsManagedResources(AwsManagedResourcesT&& value) { SetAwsManagedResources(std::forward<AwsManagedResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> No specific preference. </p>
     */
    inline const NoManagementPreference& GetNoPreference() const { return m_noPreference; }
    inline bool NoPreferenceHasBeenSet() const { return m_noPreferenceHasBeenSet; }
    template<typename NoPreferenceT = NoManagementPreference>
    void SetNoPreference(NoPreferenceT&& value) { m_noPreferenceHasBeenSet = true; m_noPreference = std::forward<NoPreferenceT>(value); }
    template<typename NoPreferenceT = NoManagementPreference>
    ManagementPreference& WithNoPreference(NoPreferenceT&& value) { SetNoPreference(std::forward<NoPreferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates interest in managing your own resources on AWS. </p>
     */
    inline const SelfManageResources& GetSelfManageResources() const { return m_selfManageResources; }
    inline bool SelfManageResourcesHasBeenSet() const { return m_selfManageResourcesHasBeenSet; }
    template<typename SelfManageResourcesT = SelfManageResources>
    void SetSelfManageResources(SelfManageResourcesT&& value) { m_selfManageResourcesHasBeenSet = true; m_selfManageResources = std::forward<SelfManageResourcesT>(value); }
    template<typename SelfManageResourcesT = SelfManageResources>
    ManagementPreference& WithSelfManageResources(SelfManageResourcesT&& value) { SetSelfManageResources(std::forward<SelfManageResourcesT>(value)); return *this;}
    ///@}
  private:

    AwsManagedResources m_awsManagedResources;
    bool m_awsManagedResourcesHasBeenSet = false;

    NoManagementPreference m_noPreference;
    bool m_noPreferenceHasBeenSet = false;

    SelfManageResources m_selfManageResources;
    bool m_selfManageResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
