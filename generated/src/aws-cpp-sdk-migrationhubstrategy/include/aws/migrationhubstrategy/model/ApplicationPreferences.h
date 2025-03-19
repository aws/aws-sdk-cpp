/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/ManagementPreference.h>
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
   * <p> Application preferences that you specify. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ApplicationPreferences">AWS
   * API Reference</a></p>
   */
  class ApplicationPreferences
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationPreferences() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Application preferences that you specify to prefer managed environment. </p>
     */
    inline const ManagementPreference& GetManagementPreference() const { return m_managementPreference; }
    inline bool ManagementPreferenceHasBeenSet() const { return m_managementPreferenceHasBeenSet; }
    template<typename ManagementPreferenceT = ManagementPreference>
    void SetManagementPreference(ManagementPreferenceT&& value) { m_managementPreferenceHasBeenSet = true; m_managementPreference = std::forward<ManagementPreferenceT>(value); }
    template<typename ManagementPreferenceT = ManagementPreference>
    ApplicationPreferences& WithManagementPreference(ManagementPreferenceT&& value) { SetManagementPreference(std::forward<ManagementPreferenceT>(value)); return *this;}
    ///@}
  private:

    ManagementPreference m_managementPreference;
    bool m_managementPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
