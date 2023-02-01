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
  enum class ReadSetFile
  {
    NOT_SET,
    SOURCE1,
    SOURCE2,
    INDEX
  };

namespace ReadSetFileMapper
{
AWS_OMICS_API ReadSetFile GetReadSetFileForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReadSetFile(ReadSetFile value);
} // namespace ReadSetFileMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
