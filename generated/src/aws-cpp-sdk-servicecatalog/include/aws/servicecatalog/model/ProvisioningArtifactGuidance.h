/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>

namespace Aws {
namespace ServiceCatalog {
namespace Model {
enum class ProvisioningArtifactGuidance { NOT_SET, DEFAULT, DEPRECATED };

namespace ProvisioningArtifactGuidanceMapper {
AWS_SERVICECATALOG_API ProvisioningArtifactGuidance GetProvisioningArtifactGuidanceForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProvisioningArtifactGuidance(ProvisioningArtifactGuidance value);
}  // namespace ProvisioningArtifactGuidanceMapper
}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws
