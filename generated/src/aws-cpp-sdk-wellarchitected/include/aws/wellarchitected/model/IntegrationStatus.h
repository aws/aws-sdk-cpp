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
  enum class IntegrationStatus
  {
    NOT_SET,
    CONFIGURED,
    NOT_CONFIGURED
  };

namespace IntegrationStatusMapper
{
AWS_WELLARCHITECTED_API IntegrationStatus GetIntegrationStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForIntegrationStatus(IntegrationStatus value);
} // namespace IntegrationStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
