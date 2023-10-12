/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SubscriptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace SubscriptionStatusMapper
      {

        static constexpr uint32_t OPT_IN_HASH = ConstExprHashingUtils::HashString("OPT_IN");
        static constexpr uint32_t OPT_OUT_HASH = ConstExprHashingUtils::HashString("OPT_OUT");


        SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPT_IN_HASH)
          {
            return SubscriptionStatus::OPT_IN;
          }
          else if (hashCode == OPT_OUT_HASH)
          {
            return SubscriptionStatus::OPT_OUT;
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
          case SubscriptionStatus::NOT_SET:
            return {};
          case SubscriptionStatus::OPT_IN:
            return "OPT_IN";
          case SubscriptionStatus::OPT_OUT:
            return "OPT_OUT";
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
  } // namespace SESV2
} // namespace Aws
