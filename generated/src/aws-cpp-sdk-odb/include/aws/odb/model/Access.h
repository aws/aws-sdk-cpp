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
  enum class Access
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AccessMapper
{
AWS_ODB_API Access GetAccessForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForAccess(Access value);
} // namespace AccessMapper
} // namespace Model
} // namespace odb
} // namespace Aws
