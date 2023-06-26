/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  enum class NoPreferenceTargetDestination
  {
    NOT_SET,
    None_specified,
    AWS_Elastic_BeanStalk,
    AWS_Fargate,
    Amazon_Elastic_Cloud_Compute_EC2,
    Amazon_Elastic_Container_Service_ECS,
    Amazon_Elastic_Kubernetes_Service_EKS
  };

namespace NoPreferenceTargetDestinationMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoPreferenceTargetDestination GetNoPreferenceTargetDestinationForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForNoPreferenceTargetDestination(NoPreferenceTargetDestination value);
} // namespace NoPreferenceTargetDestinationMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
