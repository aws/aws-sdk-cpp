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
  enum class OrganizationSharingStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace OrganizationSharingStatusMapper
{
AWS_WELLARCHITECTED_API OrganizationSharingStatus GetOrganizationSharingStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForOrganizationSharingStatus(OrganizationSharingStatus value);
} // namespace OrganizationSharingStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
