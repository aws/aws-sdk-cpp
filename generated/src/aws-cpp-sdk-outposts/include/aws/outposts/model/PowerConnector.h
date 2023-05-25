/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class PowerConnector
  {
    NOT_SET,
    L6_30P,
    IEC309,
    AH530P7W,
    AH532P6W
  };

namespace PowerConnectorMapper
{
AWS_OUTPOSTS_API PowerConnector GetPowerConnectorForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForPowerConnector(PowerConnector value);
} // namespace PowerConnectorMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
