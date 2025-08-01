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
  enum class NetworkType
  {
    NOT_SET,
    IPV4,
    IPV6
  };

namespace NetworkTypeMapper
{
AWS_PCS_API NetworkType GetNetworkTypeForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForNetworkType(NetworkType value);
} // namespace NetworkTypeMapper
} // namespace Model
} // namespace PCS
} // namespace Aws
