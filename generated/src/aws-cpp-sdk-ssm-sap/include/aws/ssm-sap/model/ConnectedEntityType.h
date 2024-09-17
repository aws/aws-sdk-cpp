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
  enum class ConnectedEntityType
  {
    NOT_SET,
    DBMS
  };

namespace ConnectedEntityTypeMapper
{
AWS_SSMSAP_API ConnectedEntityType GetConnectedEntityTypeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForConnectedEntityType(ConnectedEntityType value);
} // namespace ConnectedEntityTypeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
