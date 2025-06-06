﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/BusinessGoals.h>
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
   * <p> Rank of business goals based on priority. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/PrioritizeBusinessGoals">AWS
   * API Reference</a></p>
   */
  class PrioritizeBusinessGoals
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PrioritizeBusinessGoals() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PrioritizeBusinessGoals(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PrioritizeBusinessGoals& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Rank of business goals based on priority. </p>
     */
    inline const BusinessGoals& GetBusinessGoals() const { return m_businessGoals; }
    inline bool BusinessGoalsHasBeenSet() const { return m_businessGoalsHasBeenSet; }
    template<typename BusinessGoalsT = BusinessGoals>
    void SetBusinessGoals(BusinessGoalsT&& value) { m_businessGoalsHasBeenSet = true; m_businessGoals = std::forward<BusinessGoalsT>(value); }
    template<typename BusinessGoalsT = BusinessGoals>
    PrioritizeBusinessGoals& WithBusinessGoals(BusinessGoalsT&& value) { SetBusinessGoals(std::forward<BusinessGoalsT>(value)); return *this;}
    ///@}
  private:

    BusinessGoals m_businessGoals;
    bool m_businessGoalsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
