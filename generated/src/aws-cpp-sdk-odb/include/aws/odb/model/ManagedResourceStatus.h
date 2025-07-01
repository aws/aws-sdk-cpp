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
  enum class ManagedResourceStatus
  {
    NOT_SET,
    ENABLED,
    ENABLING,
    DISABLED,
    DISABLING
  };

namespace ManagedResourceStatusMapper
{
AWS_ODB_API ManagedResourceStatus GetManagedResourceStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForManagedResourceStatus(ManagedResourceStatus value);
} // namespace ManagedResourceStatusMapper
} // namespace Model
} // namespace odb
} // namespace Aws
