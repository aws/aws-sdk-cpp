/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class AdditionalResourceType
  {
    NOT_SET,
    HELPFUL_RESOURCE,
    IMPROVEMENT_PLAN
  };

namespace AdditionalResourceTypeMapper
{
AWS_WELLARCHITECTED_API AdditionalResourceType GetAdditionalResourceTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForAdditionalResourceType(AdditionalResourceType value);
} // namespace AdditionalResourceTypeMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
