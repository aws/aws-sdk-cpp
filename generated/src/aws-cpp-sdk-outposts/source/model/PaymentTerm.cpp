/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/PaymentTerm.h>
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
      namespace PaymentTermMapper
      {

        static constexpr uint32_t THREE_YEARS_HASH = ConstExprHashingUtils::HashString("THREE_YEARS");
        static constexpr uint32_t ONE_YEAR_HASH = ConstExprHashingUtils::HashString("ONE_YEAR");


        PaymentTerm GetPaymentTermForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == THREE_YEARS_HASH)
          {
            return PaymentTerm::THREE_YEARS;
          }
          else if (hashCode == ONE_YEAR_HASH)
          {
            return PaymentTerm::ONE_YEAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PaymentTerm>(hashCode);
          }

          return PaymentTerm::NOT_SET;
        }

        Aws::String GetNameForPaymentTerm(PaymentTerm enumValue)
        {
          switch(enumValue)
          {
          case PaymentTerm::NOT_SET:
            return {};
          case PaymentTerm::THREE_YEARS:
            return "THREE_YEARS";
          case PaymentTerm::ONE_YEAR:
            return "ONE_YEAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PaymentTermMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
