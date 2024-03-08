/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class ServiceAuthorization
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace ServiceAuthorizationMapper
{
AWS_REDSHIFT_API ServiceAuthorization GetServiceAuthorizationForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForServiceAuthorization(ServiceAuthorization value);
} // namespace ServiceAuthorizationMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
