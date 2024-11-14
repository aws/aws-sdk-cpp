/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/SalesInvolvementType.h>
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
      namespace SalesInvolvementTypeMapper
      {

        static const int For_Visibility_Only_HASH = HashingUtils::HashString("For Visibility Only");
        static const int Co_Sell_HASH = HashingUtils::HashString("Co-Sell");


        SalesInvolvementType GetSalesInvolvementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == For_Visibility_Only_HASH)
          {
            return SalesInvolvementType::For_Visibility_Only;
          }
          else if (hashCode == Co_Sell_HASH)
          {
            return SalesInvolvementType::Co_Sell;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SalesInvolvementType>(hashCode);
          }

          return SalesInvolvementType::NOT_SET;
        }

        Aws::String GetNameForSalesInvolvementType(SalesInvolvementType enumValue)
        {
          switch(enumValue)
          {
          case SalesInvolvementType::NOT_SET:
            return {};
          case SalesInvolvementType::For_Visibility_Only:
            return "For Visibility Only";
          case SalesInvolvementType::Co_Sell:
            return "Co-Sell";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SalesInvolvementTypeMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
