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
  enum class ParsingStrategy
  {
    NOT_SET,
    BEDROCK_FOUNDATION_MODEL
  };

namespace ParsingStrategyMapper
{
AWS_QCONNECT_API ParsingStrategy GetParsingStrategyForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForParsingStrategy(ParsingStrategy value);
} // namespace ParsingStrategyMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
