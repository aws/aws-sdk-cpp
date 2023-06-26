/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
{
namespace Model
{
  enum class MigrationErrorType
  {
    NOT_SET,
    ENTITY_NOT_SUPPORTED,
    ENTITY_NOT_FOUND,
    S3_BUCKET_NO_PERMISSION,
    S3_BUCKET_NOT_ACCESSIBLE,
    S3_BUCKET_NOT_FOUND,
    S3_BUCKET_INVALID_REGION,
    S3_INTERNAL_ERROR
  };

namespace MigrationErrorTypeMapper
{
AWS_WAF_API MigrationErrorType GetMigrationErrorTypeForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForMigrationErrorType(MigrationErrorType value);
} // namespace MigrationErrorTypeMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
