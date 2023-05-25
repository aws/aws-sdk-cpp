/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class ResourceMappingType
  {
    NOT_SET,
    CfnStack,
    Resource,
    AppRegistryApp,
    ResourceGroup,
    Terraform,
    EKS
  };

namespace ResourceMappingTypeMapper
{
AWS_RESILIENCEHUB_API ResourceMappingType GetResourceMappingTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForResourceMappingType(ResourceMappingType value);
} // namespace ResourceMappingTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
