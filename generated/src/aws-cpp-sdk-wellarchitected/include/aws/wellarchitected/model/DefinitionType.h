/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class DefinitionType
  {
    NOT_SET,
    WORKLOAD_METADATA,
    APP_REGISTRY
  };

namespace DefinitionTypeMapper
{
AWS_WELLARCHITECTED_API DefinitionType GetDefinitionTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForDefinitionType(DefinitionType value);
} // namespace DefinitionTypeMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
