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
  enum class S3GranteeTypeIdentifier
  {
    NOT_SET,
    id,
    emailAddress,
    uri
  };

namespace S3GranteeTypeIdentifierMapper
{
AWS_S3CONTROL_API S3GranteeTypeIdentifier GetS3GranteeTypeIdentifierForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3GranteeTypeIdentifier(S3GranteeTypeIdentifier value);
} // namespace S3GranteeTypeIdentifierMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
