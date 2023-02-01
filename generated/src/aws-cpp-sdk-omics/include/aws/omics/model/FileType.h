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
  enum class FileType
  {
    NOT_SET,
    FASTQ,
    BAM,
    CRAM
  };

namespace FileTypeMapper
{
AWS_OMICS_API FileType GetFileTypeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForFileType(FileType value);
} // namespace FileTypeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
