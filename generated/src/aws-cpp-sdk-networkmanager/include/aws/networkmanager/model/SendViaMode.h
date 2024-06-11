/**
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
  enum class SendViaMode
  {
    NOT_SET,
    dual_hop,
    single_hop
  };

namespace SendViaModeMapper
{
AWS_NETWORKMANAGER_API SendViaMode GetSendViaModeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForSendViaMode(SendViaMode value);
} // namespace SendViaModeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
