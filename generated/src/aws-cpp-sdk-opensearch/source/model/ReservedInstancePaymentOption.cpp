/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ReservedInstancePaymentOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace ReservedInstancePaymentOptionMapper
      {

        static const int ALL_UPFRONT_HASH = HashingUtils::HashString("ALL_UPFRONT");
        static const int PARTIAL_UPFRONT_HASH = HashingUtils::HashString("PARTIAL_UPFRONT");
        static const int NO_UPFRONT_HASH = HashingUtils::HashString("NO_UPFRONT");


        ReservedInstancePaymentOption GetReservedInstancePaymentOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_UPFRONT_HASH)
          {
            return ReservedInstancePaymentOption::ALL_UPFRONT;
          }
          else if (hashCode == PARTIAL_UPFRONT_HASH)
          {
            return ReservedInstancePaymentOption::PARTIAL_UPFRONT;
          }
          else if (hashCode == NO_UPFRONT_HASH)
          {
            return ReservedInstancePaymentOption::NO_UPFRONT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservedInstancePaymentOption>(hashCode);
          }

          return ReservedInstancePaymentOption::NOT_SET;
        }

        Aws::String GetNameForReservedInstancePaymentOption(ReservedInstancePaymentOption enumValue)
        {
          switch(enumValue)
          {
          case ReservedInstancePaymentOption::NOT_SET:
            return {};
          case ReservedInstancePaymentOption::ALL_UPFRONT:
            return "ALL_UPFRONT";
          case ReservedInstancePaymentOption::PARTIAL_UPFRONT:
            return "PARTIAL_UPFRONT";
          case ReservedInstancePaymentOption::NO_UPFRONT:
            return "NO_UPFRONT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservedInstancePaymentOptionMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
