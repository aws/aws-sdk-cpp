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
  enum class RouteAnalysisCompletionReasonCode
  {
    NOT_SET,
    TRANSIT_GATEWAY_ATTACHMENT_NOT_FOUND,
    TRANSIT_GATEWAY_ATTACHMENT_NOT_IN_TRANSIT_GATEWAY,
    CYCLIC_PATH_DETECTED,
    TRANSIT_GATEWAY_ATTACHMENT_STABLE_ROUTE_TABLE_NOT_FOUND,
    ROUTE_NOT_FOUND,
    BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND,
    INACTIVE_ROUTE_FOR_DESTINATION_FOUND,
    TRANSIT_GATEWAY_ATTACHMENT_ATTACH_ARN_NO_MATCH,
    MAX_HOPS_EXCEEDED,
    POSSIBLE_MIDDLEBOX,
    NO_DESTINATION_ARN_PROVIDED
  };

namespace RouteAnalysisCompletionReasonCodeMapper
{
AWS_NETWORKMANAGER_API RouteAnalysisCompletionReasonCode GetRouteAnalysisCompletionReasonCodeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForRouteAnalysisCompletionReasonCode(RouteAnalysisCompletionReasonCode value);
} // namespace RouteAnalysisCompletionReasonCodeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
