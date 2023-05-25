/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class VendorGuidance
  {
    NOT_SET,
    NOT_PROVIDED,
    STABLE,
    TO_BE_ARCHIVED,
    ARCHIVED
  };

namespace VendorGuidanceMapper
{
AWS_SAGEMAKER_API VendorGuidance GetVendorGuidanceForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForVendorGuidance(VendorGuidance value);
} // namespace VendorGuidanceMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
