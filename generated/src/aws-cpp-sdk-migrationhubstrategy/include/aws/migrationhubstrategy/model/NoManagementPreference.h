﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/NoPreferenceTargetDestination.h>
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
   * <p> Object containing the choice of application destination that you specify.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/NoManagementPreference">AWS
   * API Reference</a></p>
   */
  class NoManagementPreference
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoManagementPreference() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoManagementPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoManagementPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The choice of application destination that you specify. </p>
     */
    inline const Aws::Vector<NoPreferenceTargetDestination>& GetTargetDestination() const { return m_targetDestination; }
    inline bool TargetDestinationHasBeenSet() const { return m_targetDestinationHasBeenSet; }
    template<typename TargetDestinationT = Aws::Vector<NoPreferenceTargetDestination>>
    void SetTargetDestination(TargetDestinationT&& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = std::forward<TargetDestinationT>(value); }
    template<typename TargetDestinationT = Aws::Vector<NoPreferenceTargetDestination>>
    NoManagementPreference& WithTargetDestination(TargetDestinationT&& value) { SetTargetDestination(std::forward<TargetDestinationT>(value)); return *this;}
    inline NoManagementPreference& AddTargetDestination(NoPreferenceTargetDestination value) { m_targetDestinationHasBeenSet = true; m_targetDestination.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<NoPreferenceTargetDestination> m_targetDestination;
    bool m_targetDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
