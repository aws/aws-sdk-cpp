/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace OpenSearchService {
namespace Model {
enum class DeploymentStrategy { NOT_SET, Default, CapacityOptimized };

namespace DeploymentStrategyMapper {
AWS_OPENSEARCHSERVICE_API DeploymentStrategy GetDeploymentStrategyForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDeploymentStrategy(DeploymentStrategy value);
}  // namespace DeploymentStrategyMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
