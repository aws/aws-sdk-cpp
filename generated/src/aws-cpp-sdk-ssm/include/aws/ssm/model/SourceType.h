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
  enum class SourceType
  {
    NOT_SET,
    AWS_EC2_Instance,
    AWS_IoT_Thing,
    AWS_SSM_ManagedInstance
  };

namespace SourceTypeMapper
{
AWS_SSM_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
