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
  enum class ReadSetPartSource
  {
    NOT_SET,
    SOURCE1,
    SOURCE2
  };

namespace ReadSetPartSourceMapper
{
AWS_OMICS_API ReadSetPartSource GetReadSetPartSourceForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReadSetPartSource(ReadSetPartSource value);
} // namespace ReadSetPartSourceMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
