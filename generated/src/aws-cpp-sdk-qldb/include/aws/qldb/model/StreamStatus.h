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
  enum class StreamStatus
  {
    NOT_SET,
    ACTIVE,
    COMPLETED,
    CANCELED,
    FAILED,
    IMPAIRED
  };

namespace StreamStatusMapper
{
AWS_QLDB_API StreamStatus GetStreamStatusForName(const Aws::String& name);

AWS_QLDB_API Aws::String GetNameForStreamStatus(StreamStatus value);
} // namespace StreamStatusMapper
} // namespace Model
} // namespace QLDB
} // namespace Aws
