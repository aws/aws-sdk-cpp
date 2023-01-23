﻿/**
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
  enum class S3SSEAlgorithm
  {
    NOT_SET,
    AES256,
    KMS
  };

namespace S3SSEAlgorithmMapper
{
AWS_S3CONTROL_API S3SSEAlgorithm GetS3SSEAlgorithmForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3SSEAlgorithm(S3SSEAlgorithm value);
} // namespace S3SSEAlgorithmMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
