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
  enum class IssueManagementType
  {
    NOT_SET,
    AUTO,
    MANUAL
  };

namespace IssueManagementTypeMapper
{
AWS_WELLARCHITECTED_API IssueManagementType GetIssueManagementTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForIssueManagementType(IssueManagementType value);
} // namespace IssueManagementTypeMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
