/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/PaymentFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace PaymentFrequencyMapper
      {

        static const int Monthly_HASH = HashingUtils::HashString("Monthly");


        PaymentFrequency GetPaymentFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Monthly_HASH)
          {
            return PaymentFrequency::Monthly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PaymentFrequency>(hashCode);
          }

          return PaymentFrequency::NOT_SET;
        }

        Aws::String GetNameForPaymentFrequency(PaymentFrequency enumValue)
        {
          switch(enumValue)
          {
          case PaymentFrequency::NOT_SET:
            return {};
          case PaymentFrequency::Monthly:
            return "Monthly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PaymentFrequencyMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
