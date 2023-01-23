/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{
  enum class S3EncryptionOption
  {
    NOT_SET,
    SSE_S3,
    SSE_KMS
  };

namespace S3EncryptionOptionMapper
{
AWS_TIMESTREAMQUERY_API S3EncryptionOption GetS3EncryptionOptionForName(const Aws::String& name);

AWS_TIMESTREAMQUERY_API Aws::String GetNameForS3EncryptionOption(S3EncryptionOption value);
} // namespace S3EncryptionOptionMapper
} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
