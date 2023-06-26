/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class DataLakeStatus
  {
    NOT_SET,
    INITIALIZED,
    PENDING,
    COMPLETED,
    FAILED
  };

namespace DataLakeStatusMapper
{
AWS_SECURITYLAKE_API DataLakeStatus GetDataLakeStatusForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForDataLakeStatus(DataLakeStatus value);
} // namespace DataLakeStatusMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
