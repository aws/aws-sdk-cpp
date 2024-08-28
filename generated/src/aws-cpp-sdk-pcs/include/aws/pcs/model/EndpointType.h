/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PCS
{
namespace Model
{
  enum class EndpointType
  {
    NOT_SET,
    SLURMCTLD,
    SLURMDBD
  };

namespace EndpointTypeMapper
{
AWS_PCS_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForEndpointType(EndpointType value);
} // namespace EndpointTypeMapper
} // namespace Model
} // namespace PCS
} // namespace Aws
