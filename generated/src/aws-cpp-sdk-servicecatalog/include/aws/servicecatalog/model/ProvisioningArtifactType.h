/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class ProvisioningArtifactType
  {
    NOT_SET,
    CLOUD_FORMATION_TEMPLATE,
    MARKETPLACE_AMI,
    MARKETPLACE_CAR
  };

namespace ProvisioningArtifactTypeMapper
{
AWS_SERVICECATALOG_API ProvisioningArtifactType GetProvisioningArtifactTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProvisioningArtifactType(ProvisioningArtifactType value);
} // namespace ProvisioningArtifactTypeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
