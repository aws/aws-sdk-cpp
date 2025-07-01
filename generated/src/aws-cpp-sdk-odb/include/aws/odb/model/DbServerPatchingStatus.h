/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace odb
{
namespace Model
{
  enum class DbServerPatchingStatus
  {
    NOT_SET,
    COMPLETE,
    FAILED,
    MAINTENANCE_IN_PROGRESS,
    SCHEDULED
  };

namespace DbServerPatchingStatusMapper
{
AWS_ODB_API DbServerPatchingStatus GetDbServerPatchingStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDbServerPatchingStatus(DbServerPatchingStatus value);
} // namespace DbServerPatchingStatusMapper
} // namespace Model
} // namespace odb
} // namespace Aws
