/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{
  enum class ClientPasswordAuthType
  {
    NOT_SET,
    MYSQL_NATIVE_PASSWORD,
    POSTGRES_SCRAM_SHA_256,
    POSTGRES_MD5,
    SQL_SERVER_AUTHENTICATION
  };

namespace ClientPasswordAuthTypeMapper
{
AWS_RDS_API ClientPasswordAuthType GetClientPasswordAuthTypeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForClientPasswordAuthType(ClientPasswordAuthType value);
} // namespace ClientPasswordAuthTypeMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
