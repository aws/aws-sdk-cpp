/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteAnalysisCompletionResultCode.h>
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
      namespace RouteAnalysisCompletionResultCodeMapper
      {

        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
        static const int NOT_CONNECTED_HASH = HashingUtils::HashString("NOT_CONNECTED");


        RouteAnalysisCompletionResultCode GetRouteAnalysisCompletionResultCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTED_HASH)
          {
            return RouteAnalysisCompletionResultCode::CONNECTED;
          }
          else if (hashCode == NOT_CONNECTED_HASH)
          {
            return RouteAnalysisCompletionResultCode::NOT_CONNECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteAnalysisCompletionResultCode>(hashCode);
          }

          return RouteAnalysisCompletionResultCode::NOT_SET;
        }

        Aws::String GetNameForRouteAnalysisCompletionResultCode(RouteAnalysisCompletionResultCode enumValue)
        {
          switch(enumValue)
          {
          case RouteAnalysisCompletionResultCode::NOT_SET:
            return {};
          case RouteAnalysisCompletionResultCode::CONNECTED:
            return "CONNECTED";
          case RouteAnalysisCompletionResultCode::NOT_CONNECTED:
            return "NOT_CONNECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteAnalysisCompletionResultCodeMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
