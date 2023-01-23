/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class ResourceTypeForTagging
  {
    NOT_SET,
    Document,
    ManagedInstance,
    MaintenanceWindow,
    Parameter,
    PatchBaseline,
    OpsItem,
    OpsMetadata,
    Automation,
    Association
  };

namespace ResourceTypeForTaggingMapper
{
AWS_SSM_API ResourceTypeForTagging GetResourceTypeForTaggingForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForResourceTypeForTagging(ResourceTypeForTagging value);
} // namespace ResourceTypeForTaggingMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
