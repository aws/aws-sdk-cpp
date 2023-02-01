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
  enum class AppComplianceStatusType
  {
    NOT_SET,
    PolicyBreached,
    PolicyMet,
    NotAssessed,
    ChangesDetected
  };

namespace AppComplianceStatusTypeMapper
{
AWS_RESILIENCEHUB_API AppComplianceStatusType GetAppComplianceStatusTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForAppComplianceStatusType(AppComplianceStatusType value);
} // namespace AppComplianceStatusTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
