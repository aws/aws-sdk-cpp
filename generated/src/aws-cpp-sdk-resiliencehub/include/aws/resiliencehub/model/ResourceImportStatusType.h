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
  enum class ResourceImportStatusType
  {
    NOT_SET,
    Pending,
    InProgress,
    Failed,
    Success
  };

namespace ResourceImportStatusTypeMapper
{
AWS_RESILIENCEHUB_API ResourceImportStatusType GetResourceImportStatusTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForResourceImportStatusType(ResourceImportStatusType value);
} // namespace ResourceImportStatusTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
