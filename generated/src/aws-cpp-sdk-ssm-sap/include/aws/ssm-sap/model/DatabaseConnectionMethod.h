/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class DatabaseConnectionMethod
  {
    NOT_SET,
    DIRECT,
    OVERLAY
  };

namespace DatabaseConnectionMethodMapper
{
AWS_SSMSAP_API DatabaseConnectionMethod GetDatabaseConnectionMethodForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForDatabaseConnectionMethod(DatabaseConnectionMethod value);
} // namespace DatabaseConnectionMethodMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
