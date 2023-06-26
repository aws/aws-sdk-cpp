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
  enum class SortOrder
  {
    NOT_SET,
    asc,
    desc
  };

namespace SortOrderMapper
{
AWS_SECURITYHUB_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
