/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/EngagementContextType.h>
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
      namespace EngagementContextTypeMapper
      {

        static const int CustomerProject_HASH = HashingUtils::HashString("CustomerProject");


        EngagementContextType GetEngagementContextTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CustomerProject_HASH)
          {
            return EngagementContextType::CustomerProject;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EngagementContextType>(hashCode);
          }

          return EngagementContextType::NOT_SET;
        }

        Aws::String GetNameForEngagementContextType(EngagementContextType enumValue)
        {
          switch(enumValue)
          {
          case EngagementContextType::NOT_SET:
            return {};
          case EngagementContextType::CustomerProject:
            return "CustomerProject";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngagementContextTypeMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
