﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class ServiceType
  {
    NOT_SET,
    REDSHIFT
  };

namespace ServiceTypeMapper
{
AWS_QUICKSIGHT_API ServiceType GetServiceTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForServiceType(ServiceType value);
} // namespace ServiceTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
