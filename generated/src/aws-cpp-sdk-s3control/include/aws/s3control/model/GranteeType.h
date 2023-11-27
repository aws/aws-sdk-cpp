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
  enum class GranteeType
  {
    NOT_SET,
    DIRECTORY_USER,
    DIRECTORY_GROUP,
    IAM
  };

namespace GranteeTypeMapper
{
AWS_S3CONTROL_API GranteeType GetGranteeTypeForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForGranteeType(GranteeType value);
} // namespace GranteeTypeMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
