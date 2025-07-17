/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class DependencyType
  {
    NOT_SET,
    LambdaLayer
  };

namespace DependencyTypeMapper
{
AWS_SYNTHETICS_API DependencyType GetDependencyTypeForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForDependencyType(DependencyType value);
} // namespace DependencyTypeMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
