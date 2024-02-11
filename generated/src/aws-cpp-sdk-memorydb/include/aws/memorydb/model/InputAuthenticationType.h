/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{
  enum class InputAuthenticationType
  {
    NOT_SET,
    password,
    iam
  };

namespace InputAuthenticationTypeMapper
{
AWS_MEMORYDB_API InputAuthenticationType GetInputAuthenticationTypeForName(const Aws::String& name);

AWS_MEMORYDB_API Aws::String GetNameForInputAuthenticationType(InputAuthenticationType value);
} // namespace InputAuthenticationTypeMapper
} // namespace Model
} // namespace MemoryDB
} // namespace Aws
