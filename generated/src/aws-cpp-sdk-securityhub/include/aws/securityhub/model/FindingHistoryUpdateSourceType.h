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
  enum class FindingHistoryUpdateSourceType
  {
    NOT_SET,
    BATCH_UPDATE_FINDINGS,
    BATCH_IMPORT_FINDINGS
  };

namespace FindingHistoryUpdateSourceTypeMapper
{
AWS_SECURITYHUB_API FindingHistoryUpdateSourceType GetFindingHistoryUpdateSourceTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForFindingHistoryUpdateSourceType(FindingHistoryUpdateSourceType value);
} // namespace FindingHistoryUpdateSourceTypeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
