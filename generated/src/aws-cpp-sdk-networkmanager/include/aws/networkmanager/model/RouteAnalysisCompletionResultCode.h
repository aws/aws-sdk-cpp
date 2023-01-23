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
  enum class RouteAnalysisCompletionResultCode
  {
    NOT_SET,
    CONNECTED,
    NOT_CONNECTED
  };

namespace RouteAnalysisCompletionResultCodeMapper
{
AWS_NETWORKMANAGER_API RouteAnalysisCompletionResultCode GetRouteAnalysisCompletionResultCodeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForRouteAnalysisCompletionResultCode(RouteAnalysisCompletionResultCode value);
} // namespace RouteAnalysisCompletionResultCodeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
