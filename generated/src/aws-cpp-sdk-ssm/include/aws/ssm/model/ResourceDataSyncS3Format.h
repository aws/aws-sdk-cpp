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
  enum class ResourceDataSyncS3Format
  {
    NOT_SET,
    JsonSerDe
  };

namespace ResourceDataSyncS3FormatMapper
{
AWS_SSM_API ResourceDataSyncS3Format GetResourceDataSyncS3FormatForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForResourceDataSyncS3Format(ResourceDataSyncS3Format value);
} // namespace ResourceDataSyncS3FormatMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
