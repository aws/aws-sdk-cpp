/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    CanonicalUser,
    AmazonCustomerByEmail,
    Group
  };

namespace TypeMapper
{
AWS_S3CRT_API Type GetTypeForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
