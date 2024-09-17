/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AutoSubscriptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace AutoSubscriptionStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AutoSubscriptionStatus GetAutoSubscriptionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AutoSubscriptionStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AutoSubscriptionStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoSubscriptionStatus>(hashCode);
          }

          return AutoSubscriptionStatus::NOT_SET;
        }

        Aws::String GetNameForAutoSubscriptionStatus(AutoSubscriptionStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoSubscriptionStatus::NOT_SET:
            return {};
          case AutoSubscriptionStatus::ENABLED:
            return "ENABLED";
          case AutoSubscriptionStatus::DISABLED:
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

      } // namespace AutoSubscriptionStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
