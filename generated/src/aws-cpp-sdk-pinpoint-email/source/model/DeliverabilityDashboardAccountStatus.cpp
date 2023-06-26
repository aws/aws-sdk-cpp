/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/DeliverabilityDashboardAccountStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointEmail
  {
    namespace Model
    {
      namespace DeliverabilityDashboardAccountStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PENDING_EXPIRATION_HASH = HashingUtils::HashString("PENDING_EXPIRATION");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DeliverabilityDashboardAccountStatus GetDeliverabilityDashboardAccountStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return DeliverabilityDashboardAccountStatus::ACTIVE;
          }
          else if (hashCode == PENDING_EXPIRATION_HASH)
          {
            return DeliverabilityDashboardAccountStatus::PENDING_EXPIRATION;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DeliverabilityDashboardAccountStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliverabilityDashboardAccountStatus>(hashCode);
          }

          return DeliverabilityDashboardAccountStatus::NOT_SET;
        }

        Aws::String GetNameForDeliverabilityDashboardAccountStatus(DeliverabilityDashboardAccountStatus enumValue)
        {
          switch(enumValue)
          {
          case DeliverabilityDashboardAccountStatus::ACTIVE:
            return "ACTIVE";
          case DeliverabilityDashboardAccountStatus::PENDING_EXPIRATION:
            return "PENDING_EXPIRATION";
          case DeliverabilityDashboardAccountStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliverabilityDashboardAccountStatusMapper
    } // namespace Model
  } // namespace PinpointEmail
} // namespace Aws
