/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QLDB
{
namespace Model
{
  enum class ErrorCause
  {
    NOT_SET,
    KINESIS_STREAM_NOT_FOUND,
    IAM_PERMISSION_REVOKED
  };

namespace ErrorCauseMapper
{
AWS_QLDB_API ErrorCause GetErrorCauseForName(const Aws::String& name);

AWS_QLDB_API Aws::String GetNameForErrorCause(ErrorCause value);
} // namespace ErrorCauseMapper
} // namespace Model
} // namespace QLDB
} // namespace Aws
