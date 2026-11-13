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
enum class DeploymentStrategyOverride { NOT_SET, ClonedBlueGreen };

namespace DeploymentStrategyOverrideMapper {
AWS_OPENSEARCHSERVICE_API DeploymentStrategyOverride GetDeploymentStrategyOverrideForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDeploymentStrategyOverride(DeploymentStrategyOverride value);
}  // namespace DeploymentStrategyOverrideMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
