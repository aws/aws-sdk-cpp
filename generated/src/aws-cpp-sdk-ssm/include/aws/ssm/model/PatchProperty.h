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
  enum class PatchProperty
  {
    NOT_SET,
    PRODUCT,
    PRODUCT_FAMILY,
    CLASSIFICATION,
    MSRC_SEVERITY,
    PRIORITY,
    SEVERITY
  };

namespace PatchPropertyMapper
{
AWS_SSM_API PatchProperty GetPatchPropertyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPatchProperty(PatchProperty value);
} // namespace PatchPropertyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
