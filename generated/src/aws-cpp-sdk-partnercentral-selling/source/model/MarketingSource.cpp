/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/MarketingSource.h>
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
      namespace MarketingSourceMapper
      {

        static const int Marketing_Activity_HASH = HashingUtils::HashString("Marketing Activity");
        static const int None_HASH = HashingUtils::HashString("None");


        MarketingSource GetMarketingSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Marketing_Activity_HASH)
          {
            return MarketingSource::Marketing_Activity;
          }
          else if (hashCode == None_HASH)
          {
            return MarketingSource::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MarketingSource>(hashCode);
          }

          return MarketingSource::NOT_SET;
        }

        Aws::String GetNameForMarketingSource(MarketingSource enumValue)
        {
          switch(enumValue)
          {
          case MarketingSource::NOT_SET:
            return {};
          case MarketingSource::Marketing_Activity:
            return "Marketing Activity";
          case MarketingSource::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MarketingSourceMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
