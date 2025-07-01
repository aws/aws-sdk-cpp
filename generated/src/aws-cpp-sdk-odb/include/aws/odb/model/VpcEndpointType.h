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
  enum class VpcEndpointType
  {
    NOT_SET,
    SERVICENETWORK
  };

namespace VpcEndpointTypeMapper
{
AWS_ODB_API VpcEndpointType GetVpcEndpointTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForVpcEndpointType(VpcEndpointType value);
} // namespace VpcEndpointTypeMapper
} // namespace Model
} // namespace odb
} // namespace Aws
