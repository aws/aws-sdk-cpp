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

        static constexpr uint32_t TRANSIT_GATEWAY_ATTACHMENT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TRANSIT_GATEWAY_ATTACHMENT_NOT_FOUND");
        static constexpr uint32_t TRANSIT_GATEWAY_ATTACHMENT_NOT_IN_TRANSIT_GATEWAY_HASH = ConstExprHashingUtils::HashString("TRANSIT_GATEWAY_ATTACHMENT_NOT_IN_TRANSIT_GATEWAY");
        static constexpr uint32_t CYCLIC_PATH_DETECTED_HASH = ConstExprHashingUtils::HashString("CYCLIC_PATH_DETECTED");
        static constexpr uint32_t TRANSIT_GATEWAY_ATTACHMENT_STABLE_ROUTE_TABLE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TRANSIT_GATEWAY_ATTACHMENT_STABLE_ROUTE_TABLE_NOT_FOUND");
        static constexpr uint32_t ROUTE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ROUTE_NOT_FOUND");
        static constexpr uint32_t BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND_HASH = ConstExprHashingUtils::HashString("BLACKHOLE_ROUTE_FOR_DESTINATION_FOUND");
        static constexpr uint32_t INACTIVE_ROUTE_FOR_DESTINATION_FOUND_HASH = ConstExprHashingUtils::HashString("INACTIVE_ROUTE_FOR_DESTINATION_FOUND");
        static constexpr uint32_t TRANSIT_GATEWAY_ATTACHMENT_ATTACH_ARN_NO_MATCH_HASH = ConstExprHashingUtils::HashString("TRANSIT_GATEWAY_ATTACHMENT_ATTACH_ARN_NO_MATCH");
        static constexpr uint32_t MAX_HOPS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MAX_HOPS_EXCEEDED");
        static constexpr uint32_t POSSIBLE_MIDDLEBOX_HASH = ConstExprHashingUtils::HashString("POSSIBLE_MIDDLEBOX");
        static constexpr uint32_t NO_DESTINATION_ARN_PROVIDED_HASH = ConstExprHashingUtils::HashString("NO_DESTINATION_ARN_PROVIDED");


        RouteAnalysisCompletionReasonCode GetRouteAnalysisCompletionReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
