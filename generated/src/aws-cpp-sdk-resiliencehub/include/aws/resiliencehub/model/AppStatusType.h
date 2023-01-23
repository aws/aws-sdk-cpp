/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class AppStatusType
  {
    NOT_SET,
    Active,
    Deleting
  };

namespace AppStatusTypeMapper
{
AWS_RESILIENCEHUB_API AppStatusType GetAppStatusTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForAppStatusType(AppStatusType value);
} // namespace AppStatusTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
