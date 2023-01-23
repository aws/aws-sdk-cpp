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
  enum class CustomEngineVersionStatus
  {
    NOT_SET,
    available,
    inactive,
    inactive_except_restore
  };

namespace CustomEngineVersionStatusMapper
{
AWS_RDS_API CustomEngineVersionStatus GetCustomEngineVersionStatusForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForCustomEngineVersionStatus(CustomEngineVersionStatus value);
} // namespace CustomEngineVersionStatusMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
