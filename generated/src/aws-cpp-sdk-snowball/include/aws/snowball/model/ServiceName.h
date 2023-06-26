/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{
  enum class ServiceName
  {
    NOT_SET,
    KUBERNETES,
    EKS_ANYWHERE
  };

namespace ServiceNameMapper
{
AWS_SNOWBALL_API ServiceName GetServiceNameForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForServiceName(ServiceName value);
} // namespace ServiceNameMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
