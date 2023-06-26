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
  enum class SourceCollectionStatus
  {
    NOT_SET,
    COLLECTING,
    MISCONFIGURED,
    NOT_COLLECTING
  };

namespace SourceCollectionStatusMapper
{
AWS_SECURITYLAKE_API SourceCollectionStatus GetSourceCollectionStatusForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForSourceCollectionStatus(SourceCollectionStatus value);
} // namespace SourceCollectionStatusMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
