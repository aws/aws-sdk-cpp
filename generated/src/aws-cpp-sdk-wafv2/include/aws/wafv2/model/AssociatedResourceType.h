/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class AssociatedResourceType
  {
    NOT_SET,
    CLOUDFRONT,
    API_GATEWAY,
    COGNITO_USER_POOL,
    APP_RUNNER_SERVICE,
    VERIFIED_ACCESS_INSTANCE
  };

namespace AssociatedResourceTypeMapper
{
AWS_WAFV2_API AssociatedResourceType GetAssociatedResourceTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForAssociatedResourceType(AssociatedResourceType value);
} // namespace AssociatedResourceTypeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
