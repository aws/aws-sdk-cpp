/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{
  enum class RollbackOnDisable
  {
    NOT_SET,
    NO_ROLLBACK,
    DEFAULT_ROLLBACK
  };

namespace RollbackOnDisableMapper
{
AWS_OPENSEARCHSERVICE_API RollbackOnDisable GetRollbackOnDisableForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForRollbackOnDisable(RollbackOnDisable value);
} // namespace RollbackOnDisableMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
