/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/PaymentOption.h>
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
      namespace PaymentOptionMapper
      {

        static const int ALL_UPFRONT_HASH = HashingUtils::HashString("ALL_UPFRONT");
        static const int NO_UPFRONT_HASH = HashingUtils::HashString("NO_UPFRONT");
        static const int PARTIAL_UPFRONT_HASH = HashingUtils::HashString("PARTIAL_UPFRONT");


        PaymentOption GetPaymentOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_UPFRONT_HASH)
          {
            return PaymentOption::ALL_UPFRONT;
          }
          else if (hashCode == NO_UPFRONT_HASH)
          {
            return PaymentOption::NO_UPFRONT;
          }
          else if (hashCode == PARTIAL_UPFRONT_HASH)
          {
            return PaymentOption::PARTIAL_UPFRONT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PaymentOption>(hashCode);
          }

          return PaymentOption::NOT_SET;
        }

        Aws::String GetNameForPaymentOption(PaymentOption enumValue)
        {
          switch(enumValue)
          {
          case PaymentOption::NOT_SET:
            return {};
          case PaymentOption::ALL_UPFRONT:
            return "ALL_UPFRONT";
          case PaymentOption::NO_UPFRONT:
            return "NO_UPFRONT";
          case PaymentOption::PARTIAL_UPFRONT:
            return "PARTIAL_UPFRONT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PaymentOptionMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
