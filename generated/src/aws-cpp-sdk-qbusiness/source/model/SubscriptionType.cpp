/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/SubscriptionType.h>
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
      namespace SubscriptionTypeMapper
      {

        static const int Q_LITE_HASH = HashingUtils::HashString("Q_LITE");
        static const int Q_BUSINESS_HASH = HashingUtils::HashString("Q_BUSINESS");


        SubscriptionType GetSubscriptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Q_LITE_HASH)
          {
            return SubscriptionType::Q_LITE;
          }
          else if (hashCode == Q_BUSINESS_HASH)
          {
            return SubscriptionType::Q_BUSINESS;
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
          case SubscriptionType::Q_LITE:
            return "Q_LITE";
          case SubscriptionType::Q_BUSINESS:
            return "Q_BUSINESS";
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
  } // namespace QBusiness
} // namespace Aws
