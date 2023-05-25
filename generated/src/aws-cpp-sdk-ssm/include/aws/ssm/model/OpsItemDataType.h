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
  enum class OpsItemDataType
  {
    NOT_SET,
    SearchableString,
    String
  };

namespace OpsItemDataTypeMapper
{
AWS_SSM_API OpsItemDataType GetOpsItemDataTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForOpsItemDataType(OpsItemDataType value);
} // namespace OpsItemDataTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
