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
  enum class TargetDestination
  {
    NOT_SET,
    None_specified,
    AWS_Elastic_BeanStalk,
    AWS_Fargate,
    Amazon_Elastic_Cloud_Compute_EC2,
    Amazon_Elastic_Container_Service_ECS,
    Amazon_Elastic_Kubernetes_Service_EKS,
    Aurora_MySQL,
    Aurora_PostgreSQL,
    Amazon_Relational_Database_Service_on_MySQL,
    Amazon_Relational_Database_Service_on_PostgreSQL,
    Amazon_DocumentDB,
    Amazon_DynamoDB,
    Amazon_Relational_Database_Service,
    Babelfish_for_Aurora_PostgreSQL
  };

namespace TargetDestinationMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API TargetDestination GetTargetDestinationForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForTargetDestination(TargetDestination value);
} // namespace TargetDestinationMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
