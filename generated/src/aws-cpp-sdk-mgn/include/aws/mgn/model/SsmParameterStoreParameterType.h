/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class SsmParameterStoreParameterType
  {
    NOT_SET,
    STRING
  };

namespace SsmParameterStoreParameterTypeMapper
{
AWS_MGN_API SsmParameterStoreParameterType GetSsmParameterStoreParameterTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForSsmParameterStoreParameterType(SsmParameterStoreParameterType value);
} // namespace SsmParameterStoreParameterTypeMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
