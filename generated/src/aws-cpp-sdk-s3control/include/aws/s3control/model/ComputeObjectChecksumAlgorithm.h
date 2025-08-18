/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class ComputeObjectChecksumAlgorithm
  {
    NOT_SET,
    CRC32,
    CRC32C,
    CRC64NVME,
    MD5,
    SHA1,
    SHA256
  };

namespace ComputeObjectChecksumAlgorithmMapper
{
AWS_S3CONTROL_API ComputeObjectChecksumAlgorithm GetComputeObjectChecksumAlgorithmForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForComputeObjectChecksumAlgorithm(ComputeObjectChecksumAlgorithm value);
} // namespace ComputeObjectChecksumAlgorithmMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
