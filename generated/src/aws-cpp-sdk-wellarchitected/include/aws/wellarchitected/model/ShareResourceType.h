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
  enum class ShareResourceType
  {
    NOT_SET,
    WORKLOAD,
    LENS,
    PROFILE,
    TEMPLATE
  };

namespace ShareResourceTypeMapper
{
AWS_WELLARCHITECTED_API ShareResourceType GetShareResourceTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForShareResourceType(ShareResourceType value);
} // namespace ShareResourceTypeMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
