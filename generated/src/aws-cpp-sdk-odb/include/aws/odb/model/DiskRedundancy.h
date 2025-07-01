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
  enum class DiskRedundancy
  {
    NOT_SET,
    HIGH,
    NORMAL
  };

namespace DiskRedundancyMapper
{
AWS_ODB_API DiskRedundancy GetDiskRedundancyForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDiskRedundancy(DiskRedundancy value);
} // namespace DiskRedundancyMapper
} // namespace Model
} // namespace odb
} // namespace Aws
