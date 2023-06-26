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
  enum class SelfManageTargetDestination
  {
    NOT_SET,
    None_specified,
    Amazon_Elastic_Cloud_Compute_EC2,
    Amazon_Elastic_Container_Service_ECS,
    Amazon_Elastic_Kubernetes_Service_EKS
  };

namespace SelfManageTargetDestinationMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SelfManageTargetDestination GetSelfManageTargetDestinationForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForSelfManageTargetDestination(SelfManageTargetDestination value);
} // namespace SelfManageTargetDestinationMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
