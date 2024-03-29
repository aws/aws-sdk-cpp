﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class PeeringType
  {
    NOT_SET,
    TRANSIT_GATEWAY
  };

namespace PeeringTypeMapper
{
AWS_NETWORKMANAGER_API PeeringType GetPeeringTypeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForPeeringType(PeeringType value);
} // namespace PeeringTypeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
