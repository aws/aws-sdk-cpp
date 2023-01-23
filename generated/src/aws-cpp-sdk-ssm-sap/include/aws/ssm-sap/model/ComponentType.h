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
  enum class ComponentType
  {
    NOT_SET,
    HANA
  };

namespace ComponentTypeMapper
{
AWS_SSMSAP_API ComponentType GetComponentTypeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForComponentType(ComponentType value);
} // namespace ComponentTypeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
