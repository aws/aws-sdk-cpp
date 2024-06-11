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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ManagementPreference();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ManagementPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ManagementPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates interest in solutions that are managed by AWS. </p>
     */
    inline const AwsManagedResources& GetAwsManagedResources() const{ return m_awsManagedResources; }
    inline bool AwsManagedResourcesHasBeenSet() const { return m_awsManagedResourcesHasBeenSet; }
    inline void SetAwsManagedResources(const AwsManagedResources& value) { m_awsManagedResourcesHasBeenSet = true; m_awsManagedResources = value; }
    inline void SetAwsManagedResources(AwsManagedResources&& value) { m_awsManagedResourcesHasBeenSet = true; m_awsManagedResources = std::move(value); }
    inline ManagementPreference& WithAwsManagedResources(const AwsManagedResources& value) { SetAwsManagedResources(value); return *this;}
    inline ManagementPreference& WithAwsManagedResources(AwsManagedResources&& value) { SetAwsManagedResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> No specific preference. </p>
     */
    inline const NoManagementPreference& GetNoPreference() const{ return m_noPreference; }
    inline bool NoPreferenceHasBeenSet() const { return m_noPreferenceHasBeenSet; }
    inline void SetNoPreference(const NoManagementPreference& value) { m_noPreferenceHasBeenSet = true; m_noPreference = value; }
    inline void SetNoPreference(NoManagementPreference&& value) { m_noPreferenceHasBeenSet = true; m_noPreference = std::move(value); }
    inline ManagementPreference& WithNoPreference(const NoManagementPreference& value) { SetNoPreference(value); return *this;}
    inline ManagementPreference& WithNoPreference(NoManagementPreference&& value) { SetNoPreference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates interest in managing your own resources on AWS. </p>
     */
    inline const SelfManageResources& GetSelfManageResources() const{ return m_selfManageResources; }
    inline bool SelfManageResourcesHasBeenSet() const { return m_selfManageResourcesHasBeenSet; }
    inline void SetSelfManageResources(const SelfManageResources& value) { m_selfManageResourcesHasBeenSet = true; m_selfManageResources = value; }
    inline void SetSelfManageResources(SelfManageResources&& value) { m_selfManageResourcesHasBeenSet = true; m_selfManageResources = std::move(value); }
    inline ManagementPreference& WithSelfManageResources(const SelfManageResources& value) { SetSelfManageResources(value); return *this;}
    inline ManagementPreference& WithSelfManageResources(SelfManageResources&& value) { SetSelfManageResources(std::move(value)); return *this;}
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
