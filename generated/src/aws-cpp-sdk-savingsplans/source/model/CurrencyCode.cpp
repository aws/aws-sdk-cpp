/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/CurrencyCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SavingsPlans
  {
    namespace Model
    {
      namespace CurrencyCodeMapper
      {

        static constexpr uint32_t CNY_HASH = ConstExprHashingUtils::HashString("CNY");
        static constexpr uint32_t USD_HASH = ConstExprHashingUtils::HashString("USD");


        CurrencyCode GetCurrencyCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CNY_HASH)
          {
            return CurrencyCode::CNY;
          }
          else if (hashCode == USD_HASH)
          {
            return CurrencyCode::USD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CurrencyCode>(hashCode);
          }

          return CurrencyCode::NOT_SET;
        }

        Aws::String GetNameForCurrencyCode(CurrencyCode enumValue)
        {
          switch(enumValue)
          {
          case CurrencyCode::NOT_SET:
            return {};
          case CurrencyCode::CNY:
            return "CNY";
          case CurrencyCode::USD:
            return "USD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CurrencyCodeMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
