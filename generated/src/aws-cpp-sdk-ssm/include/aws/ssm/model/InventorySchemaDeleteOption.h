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
  enum class InventorySchemaDeleteOption
  {
    NOT_SET,
    DisableSchema,
    DeleteSchema
  };

namespace InventorySchemaDeleteOptionMapper
{
AWS_SSM_API InventorySchemaDeleteOption GetInventorySchemaDeleteOptionForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForInventorySchemaDeleteOption(InventorySchemaDeleteOption value);
} // namespace InventorySchemaDeleteOptionMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
