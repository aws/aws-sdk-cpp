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
  enum class DbNodeResourceStatus
  {
    NOT_SET,
    AVAILABLE,
    FAILED,
    PROVISIONING,
    TERMINATED,
    TERMINATING,
    UPDATING,
    STOPPING,
    STOPPED,
    STARTING
  };

namespace DbNodeResourceStatusMapper
{
AWS_ODB_API DbNodeResourceStatus GetDbNodeResourceStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDbNodeResourceStatus(DbNodeResourceStatus value);
} // namespace DbNodeResourceStatusMapper
} // namespace Model
} // namespace odb
} // namespace Aws
