/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class ChunkingStrategy
  {
    NOT_SET,
    FIXED_SIZE,
    NONE,
    HIERARCHICAL,
    SEMANTIC
  };

namespace ChunkingStrategyMapper
{
AWS_QCONNECT_API ChunkingStrategy GetChunkingStrategyForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForChunkingStrategy(ChunkingStrategy value);
} // namespace ChunkingStrategyMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
