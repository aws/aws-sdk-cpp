/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Translate
{
namespace Model
{
  enum class ParallelDataFormat
  {
    NOT_SET,
    TSV,
    CSV,
    TMX
  };

namespace ParallelDataFormatMapper
{
AWS_TRANSLATE_API ParallelDataFormat GetParallelDataFormatForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForParallelDataFormat(ParallelDataFormat value);
} // namespace ParallelDataFormatMapper
} // namespace Model
} // namespace Translate
} // namespace Aws
