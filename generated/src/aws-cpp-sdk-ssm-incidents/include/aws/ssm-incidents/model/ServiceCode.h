/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{
  enum class ServiceCode
  {
    NOT_SET,
    ssm_incidents
  };

namespace ServiceCodeMapper
{
AWS_SSMINCIDENTS_API ServiceCode GetServiceCodeForName(const Aws::String& name);

AWS_SSMINCIDENTS_API Aws::String GetNameForServiceCode(ServiceCode value);
} // namespace ServiceCodeMapper
} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
