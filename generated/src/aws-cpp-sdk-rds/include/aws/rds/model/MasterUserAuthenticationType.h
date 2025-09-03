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
  enum class MasterUserAuthenticationType
  {
    NOT_SET,
    password,
    iam_db_auth
  };

namespace MasterUserAuthenticationTypeMapper
{
AWS_RDS_API MasterUserAuthenticationType GetMasterUserAuthenticationTypeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForMasterUserAuthenticationType(MasterUserAuthenticationType value);
} // namespace MasterUserAuthenticationTypeMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
