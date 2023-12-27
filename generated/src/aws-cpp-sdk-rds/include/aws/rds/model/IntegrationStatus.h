/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{
  enum class IntegrationStatus
  {
    NOT_SET,
    creating,
    active,
    modifying,
    failed,
    deleting,
    syncing,
    needs_attention
  };

namespace IntegrationStatusMapper
{
AWS_RDS_API IntegrationStatus GetIntegrationStatusForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForIntegrationStatus(IntegrationStatus value);
} // namespace IntegrationStatusMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
