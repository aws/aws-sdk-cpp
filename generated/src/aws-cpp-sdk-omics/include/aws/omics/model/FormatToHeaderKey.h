/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class FormatToHeaderKey
  {
    NOT_SET,
    CHR,
    START,
    END,
    REF,
    ALT,
    POS
  };

namespace FormatToHeaderKeyMapper
{
AWS_OMICS_API FormatToHeaderKey GetFormatToHeaderKeyForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForFormatToHeaderKey(FormatToHeaderKey value);
} // namespace FormatToHeaderKeyMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
