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
  enum class S3PrefixType
  {
    NOT_SET,
    Object
  };

namespace S3PrefixTypeMapper
{
AWS_S3CONTROL_API S3PrefixType GetS3PrefixTypeForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3PrefixType(S3PrefixType value);
} // namespace S3PrefixTypeMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
