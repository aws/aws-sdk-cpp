/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class BatchUpdateFindingsV2UnprocessedFindingErrorCode
  {
    NOT_SET,
    ResourceNotFoundException,
    ValidationException,
    InternalServerException,
    ConflictException
  };

namespace BatchUpdateFindingsV2UnprocessedFindingErrorCodeMapper
{
AWS_SECURITYHUB_API BatchUpdateFindingsV2UnprocessedFindingErrorCode GetBatchUpdateFindingsV2UnprocessedFindingErrorCodeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForBatchUpdateFindingsV2UnprocessedFindingErrorCode(BatchUpdateFindingsV2UnprocessedFindingErrorCode value);
} // namespace BatchUpdateFindingsV2UnprocessedFindingErrorCodeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
