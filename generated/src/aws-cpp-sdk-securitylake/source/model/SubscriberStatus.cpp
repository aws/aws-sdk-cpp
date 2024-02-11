/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/SubscriberStatus.h>
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
      namespace SubscriberStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int READY_HASH = HashingUtils::HashString("READY");


        SubscriberStatus GetSubscriberStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return SubscriberStatus::ACTIVE;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return SubscriberStatus::DEACTIVATED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SubscriberStatus::PENDING;
          }
          else if (hashCode == READY_HASH)
          {
            return SubscriberStatus::READY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriberStatus>(hashCode);
          }

          return SubscriberStatus::NOT_SET;
        }

        Aws::String GetNameForSubscriberStatus(SubscriberStatus enumValue)
        {
          switch(enumValue)
          {
          case SubscriberStatus::NOT_SET:
            return {};
          case SubscriberStatus::ACTIVE:
            return "ACTIVE";
          case SubscriberStatus::DEACTIVATED:
            return "DEACTIVATED";
          case SubscriberStatus::PENDING:
            return "PENDING";
          case SubscriberStatus::READY:
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

      } // namespace SubscriberStatusMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
