/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/ScopeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFlowMonitor
  {
    namespace Model
    {
      namespace ScopeStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DEACTIVATING_HASH = HashingUtils::HashString("DEACTIVATING");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");


        ScopeStatus GetScopeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return ScopeStatus::SUCCEEDED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ScopeStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ScopeStatus::FAILED;
          }
          else if (hashCode == DEACTIVATING_HASH)
          {
            return ScopeStatus::DEACTIVATING;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return ScopeStatus::DEACTIVATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScopeStatus>(hashCode);
          }

          return ScopeStatus::NOT_SET;
        }

        Aws::String GetNameForScopeStatus(ScopeStatus enumValue)
        {
          switch(enumValue)
          {
          case ScopeStatus::NOT_SET:
            return {};
          case ScopeStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ScopeStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ScopeStatus::FAILED:
            return "FAILED";
          case ScopeStatus::DEACTIVATING:
            return "DEACTIVATING";
          case ScopeStatus::DEACTIVATED:
            return "DEACTIVATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScopeStatusMapper
    } // namespace Model
  } // namespace NetworkFlowMonitor
} // namespace Aws
