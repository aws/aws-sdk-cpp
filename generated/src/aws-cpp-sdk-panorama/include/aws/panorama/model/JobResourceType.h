/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class JobResourceType
  {
    NOT_SET,
    PACKAGE
  };

namespace JobResourceTypeMapper
{
AWS_PANORAMA_API JobResourceType GetJobResourceTypeForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForJobResourceType(JobResourceType value);
} // namespace JobResourceTypeMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
