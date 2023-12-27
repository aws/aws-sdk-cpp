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
  enum class AppDriftStatusType
  {
    NOT_SET,
    NotChecked,
    NotDetected,
    Detected
  };

namespace AppDriftStatusTypeMapper
{
AWS_RESILIENCEHUB_API AppDriftStatusType GetAppDriftStatusTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForAppDriftStatusType(AppDriftStatusType value);
} // namespace AppDriftStatusTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
