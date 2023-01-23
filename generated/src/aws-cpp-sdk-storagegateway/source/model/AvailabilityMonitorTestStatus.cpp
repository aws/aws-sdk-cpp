/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/AvailabilityMonitorTestStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace AvailabilityMonitorTestStatusMapper
      {

        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        AvailabilityMonitorTestStatus GetAvailabilityMonitorTestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_HASH)
          {
            return AvailabilityMonitorTestStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AvailabilityMonitorTestStatus::FAILED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return AvailabilityMonitorTestStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvailabilityMonitorTestStatus>(hashCode);
          }

          return AvailabilityMonitorTestStatus::NOT_SET;
        }

        Aws::String GetNameForAvailabilityMonitorTestStatus(AvailabilityMonitorTestStatus enumValue)
        {
          switch(enumValue)
          {
          case AvailabilityMonitorTestStatus::COMPLETE:
            return "COMPLETE";
          case AvailabilityMonitorTestStatus::FAILED:
            return "FAILED";
          case AvailabilityMonitorTestStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AvailabilityMonitorTestStatusMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
