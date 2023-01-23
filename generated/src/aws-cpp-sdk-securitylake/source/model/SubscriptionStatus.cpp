/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/SubscriptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace SubscriptionStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int READY_HASH = HashingUtils::HashString("READY");


        SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return SubscriptionStatus::ACTIVE;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return SubscriptionStatus::DEACTIVATED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SubscriptionStatus::PENDING;
          }
          else if (hashCode == READY_HASH)
          {
            return SubscriptionStatus::READY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionStatus>(hashCode);
          }

          return SubscriptionStatus::NOT_SET;
        }

        Aws::String GetNameForSubscriptionStatus(SubscriptionStatus enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionStatus::ACTIVE:
            return "ACTIVE";
          case SubscriptionStatus::DEACTIVATED:
            return "DEACTIVATED";
          case SubscriptionStatus::PENDING:
            return "PENDING";
          case SubscriptionStatus::READY:
            return "READY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriptionStatusMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
