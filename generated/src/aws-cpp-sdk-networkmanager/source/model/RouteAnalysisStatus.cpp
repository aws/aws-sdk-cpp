/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteAnalysisStatus.h>
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
      namespace RouteAnalysisStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RouteAnalysisStatus GetRouteAnalysisStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return RouteAnalysisStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return RouteAnalysisStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RouteAnalysisStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteAnalysisStatus>(hashCode);
          }

          return RouteAnalysisStatus::NOT_SET;
        }

        Aws::String GetNameForRouteAnalysisStatus(RouteAnalysisStatus enumValue)
        {
          switch(enumValue)
          {
          case RouteAnalysisStatus::NOT_SET:
            return {};
          case RouteAnalysisStatus::RUNNING:
            return "RUNNING";
          case RouteAnalysisStatus::COMPLETED:
            return "COMPLETED";
          case RouteAnalysisStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteAnalysisStatusMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
