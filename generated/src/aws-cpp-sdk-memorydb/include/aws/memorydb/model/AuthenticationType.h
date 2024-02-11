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
  enum class AuthenticationType
  {
    NOT_SET,
    password,
    no_password,
    iam
  };

namespace AuthenticationTypeMapper
{
AWS_MEMORYDB_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_MEMORYDB_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace MemoryDB
} // namespace Aws
