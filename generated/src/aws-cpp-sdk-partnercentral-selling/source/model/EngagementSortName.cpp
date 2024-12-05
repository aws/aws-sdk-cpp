/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/EngagementSortName.h>
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
      namespace EngagementSortNameMapper
      {

        static const int CreatedDate_HASH = HashingUtils::HashString("CreatedDate");


        EngagementSortName GetEngagementSortNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreatedDate_HASH)
          {
            return EngagementSortName::CreatedDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EngagementSortName>(hashCode);
          }

          return EngagementSortName::NOT_SET;
        }

        Aws::String GetNameForEngagementSortName(EngagementSortName enumValue)
        {
          switch(enumValue)
          {
          case EngagementSortName::NOT_SET:
            return {};
          case EngagementSortName::CreatedDate:
            return "CreatedDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngagementSortNameMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
