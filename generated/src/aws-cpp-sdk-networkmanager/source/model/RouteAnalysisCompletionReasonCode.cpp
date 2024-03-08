/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteAnalysisCompletionReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace RouteAnalysisCompletionReasonCodeMapper
      {

        static const int TRANSIT_GATEWAY_ATTACHMENT_NOT_FOUND_HASH = HashingUtils::HashString("TRANSIT_GATEWAY_ATTACHMENT_NOT_FOUND");
        static const int TRANSIT_GATEWAY_ATTACHMENT_NOT_IN_TRANSIT_GATEWAY_HASH = HashingUtils::HashString("TRANSIT_GATEWAY_ATTACHMENT_NOT_IN_TRANSIT_GATEWAY");
        static const int CYCLIC_PATH_DETECTED_HASH = HashingUtils::HashString("CYCLIC_PATH_DETECTED");
        static const int TRANSIT_GATEWAY_ATTACHMENT_STABLE_ROUTE_TABLE_NOT_FOUND_HASH = HashingUtils::HashString("TRANSIT_GATEWAY_ATTACHMENT_STABLE_ROUTE_TABLE_NOT_FOUND");
        static const int ROUTE_NOT_FOUND_HASH = HashingUtils::HashString("ROUTE_NOT_FOUND");
        static const int BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND_HASH = HashingUtils::HashString("BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND");
        static const int INACTIVE_ROUTE_FOR_DESTINATION_FOUND_HASH = HashingUtils::HashString("INACTIVE_ROUTE_FOR_DESTINATION_FOUND");
        static const int TRANSIT_GATEWAY_ATTACHMENT_ATTACH_ARN_NO_MATCH_HASH = HashingUtils::HashString("TRANSIT_GATEWAY_ATTACHMENT_ATTACH_ARN_NO_MATCH");
        static const int MAX_HOPS_EXCEEDED_HASH = HashingUtils::HashString("MAX_HOPS_EXCEEDED");
        static const int POSSIBLE_MIDDLEBOX_HASH = HashingUtils::HashString("POSSIBLE_MIDDLEBOX");
        static const int NO_DESTINATION_ARN_PROVIDED_HASH = HashingUtils::HashString("NO_DESTINATION_ARN_PROVIDED");


        RouteAnalysisCompletionReasonCode GetRouteAnalysisCompletionReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSIT_GATEWAY_ATTACHMENT_NOT_FOUND_HASH)
          {
            return RouteAnalysisCompletionReasonCode::TRANSIT_GATEWAY_ATTACHMENT_NOT_FOUND;
          }
          else if (hashCode == TRANSIT_GATEWAY_ATTACHMENT_NOT_IN_TRANSIT_GATEWAY_HASH)
          {
            return RouteAnalysisCompletionReasonCode::TRANSIT_GATEWAY_ATTACHMENT_NOT_IN_TRANSIT_GATEWAY;
          }
          else if (hashCode == CYCLIC_PATH_DETECTED_HASH)
          {
            return RouteAnalysisCompletionReasonCode::CYCLIC_PATH_DETECTED;
          }
          else if (hashCode == TRANSIT_GATEWAY_ATTACHMENT_STABLE_ROUTE_TABLE_NOT_FOUND_HASH)
          {
            return RouteAnalysisCompletionReasonCode::TRANSIT_GATEWAY_ATTACHMENT_STABLE_ROUTE_TABLE_NOT_FOUND;
          }
          else if (hashCode == ROUTE_NOT_FOUND_HASH)
          {
            return RouteAnalysisCompletionReasonCode::ROUTE_NOT_FOUND;
          }
          else if (hashCode == BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND_HASH)
          {
            return RouteAnalysisCompletionReasonCode::BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND;
          }
          else if (hashCode == INACTIVE_ROUTE_FOR_DESTINATION_FOUND_HASH)
          {
            return RouteAnalysisCompletionReasonCode::INACTIVE_ROUTE_FOR_DESTINATION_FOUND;
          }
          else if (hashCode == TRANSIT_GATEWAY_ATTACHMENT_ATTACH_ARN_NO_MATCH_HASH)
          {
            return RouteAnalysisCompletionReasonCode::TRANSIT_GATEWAY_ATTACHMENT_ATTACH_ARN_NO_MATCH;
          }
          else if (hashCode == MAX_HOPS_EXCEEDED_HASH)
          {
            return RouteAnalysisCompletionReasonCode::MAX_HOPS_EXCEEDED;
          }
          else if (hashCode == POSSIBLE_MIDDLEBOX_HASH)
          {
            return RouteAnalysisCompletionReasonCode::POSSIBLE_MIDDLEBOX;
          }
          else if (hashCode == NO_DESTINATION_ARN_PROVIDED_HASH)
          {
            return RouteAnalysisCompletionReasonCode::NO_DESTINATION_ARN_PROVIDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteAnalysisCompletionReasonCode>(hashCode);
          }

          return RouteAnalysisCompletionReasonCode::NOT_SET;
        }

        Aws::String GetNameForRouteAnalysisCompletionReasonCode(RouteAnalysisCompletionReasonCode enumValue)
        {
          switch(enumValue)
          {
          case RouteAnalysisCompletionReasonCode::NOT_SET:
            return {};
          case RouteAnalysisCompletionReasonCode::TRANSIT_GATEWAY_ATTACHMENT_NOT_FOUND:
            return "TRANSIT_GATEWAY_ATTACHMENT_NOT_FOUND";
          case RouteAnalysisCompletionReasonCode::TRANSIT_GATEWAY_ATTACHMENT_NOT_IN_TRANSIT_GATEWAY:
            return "TRANSIT_GATEWAY_ATTACHMENT_NOT_IN_TRANSIT_GATEWAY";
          case RouteAnalysisCompletionReasonCode::CYCLIC_PATH_DETECTED:
            return "CYCLIC_PATH_DETECTED";
          case RouteAnalysisCompletionReasonCode::TRANSIT_GATEWAY_ATTACHMENT_STABLE_ROUTE_TABLE_NOT_FOUND:
            return "TRANSIT_GATEWAY_ATTACHMENT_STABLE_ROUTE_TABLE_NOT_FOUND";
          case RouteAnalysisCompletionReasonCode::ROUTE_NOT_FOUND:
            return "ROUTE_NOT_FOUND";
          case RouteAnalysisCompletionReasonCode::BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND:
            return "BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND";
          case RouteAnalysisCompletionReasonCode::INACTIVE_ROUTE_FOR_DESTINATION_FOUND:
            return "INACTIVE_ROUTE_FOR_DESTINATION_FOUND";
          case RouteAnalysisCompletionReasonCode::TRANSIT_GATEWAY_ATTACHMENT_ATTACH_ARN_NO_MATCH:
            return "TRANSIT_GATEWAY_ATTACHMENT_ATTACH_ARN_NO_MATCH";
          case RouteAnalysisCompletionReasonCode::MAX_HOPS_EXCEEDED:
            return "MAX_HOPS_EXCEEDED";
          case RouteAnalysisCompletionReasonCode::POSSIBLE_MIDDLEBOX:
            return "POSSIBLE_MIDDLEBOX";
          case RouteAnalysisCompletionReasonCode::NO_DESTINATION_ARN_PROVIDED:
            return "NO_DESTINATION_ARN_PROVIDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteAnalysisCompletionReasonCodeMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
