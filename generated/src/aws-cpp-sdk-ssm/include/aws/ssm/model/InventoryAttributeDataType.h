/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class InventoryAttributeDataType
  {
    NOT_SET,
    string,
    number
  };

namespace InventoryAttributeDataTypeMapper
{
AWS_SSM_API InventoryAttributeDataType GetInventoryAttributeDataTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForInventoryAttributeDataType(InventoryAttributeDataType value);
} // namespace InventoryAttributeDataTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
