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
  enum class ETagAlgorithm
  {
    NOT_SET,
    FASTQ_MD5up,
    BAM_MD5up,
    CRAM_MD5up
  };

namespace ETagAlgorithmMapper
{
AWS_OMICS_API ETagAlgorithm GetETagAlgorithmForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForETagAlgorithm(ETagAlgorithm value);
} // namespace ETagAlgorithmMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
