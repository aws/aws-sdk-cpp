/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkMonitor
{
namespace Model
{
  enum class AddressFamily
  {
    NOT_SET,
    IPV4,
    IPV6
  };

namespace AddressFamilyMapper
{
AWS_NETWORKMONITOR_API AddressFamily GetAddressFamilyForName(const Aws::String& name);

AWS_NETWORKMONITOR_API Aws::String GetNameForAddressFamily(AddressFamily value);
} // namespace AddressFamilyMapper
} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
