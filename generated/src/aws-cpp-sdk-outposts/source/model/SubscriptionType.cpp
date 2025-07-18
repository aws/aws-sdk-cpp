/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/SubscriptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace SubscriptionTypeMapper
      {

        static const int ORIGINAL_HASH = HashingUtils::HashString("ORIGINAL");
        static const int RENEWAL_HASH = HashingUtils::HashString("RENEWAL");
        static const int CAPACITY_INCREASE_HASH = HashingUtils::HashString("CAPACITY_INCREASE");


        SubscriptionType GetSubscriptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORIGINAL_HASH)
          {
            return SubscriptionType::ORIGINAL;
          }
          else if (hashCode == RENEWAL_HASH)
          {
            return SubscriptionType::RENEWAL;
          }
          else if (hashCode == CAPACITY_INCREASE_HASH)
          {
            return SubscriptionType::CAPACITY_INCREASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionType>(hashCode);
          }

          return SubscriptionType::NOT_SET;
        }

        Aws::String GetNameForSubscriptionType(SubscriptionType enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionType::NOT_SET:
            return {};
          case SubscriptionType::ORIGINAL:
            return "ORIGINAL";
          case SubscriptionType::RENEWAL:
            return "RENEWAL";
          case SubscriptionType::CAPACITY_INCREASE:
            return "CAPACITY_INCREASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriptionTypeMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
