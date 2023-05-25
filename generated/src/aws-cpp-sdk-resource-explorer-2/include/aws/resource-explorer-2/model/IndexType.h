/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{
  enum class IndexType
  {
    NOT_SET,
    LOCAL,
    AGGREGATOR
  };

namespace IndexTypeMapper
{
AWS_RESOURCEEXPLORER2_API IndexType GetIndexTypeForName(const Aws::String& name);

AWS_RESOURCEEXPLORER2_API Aws::String GetNameForIndexType(IndexType value);
} // namespace IndexTypeMapper
} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
