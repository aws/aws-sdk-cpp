/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/EngagementScore.h>
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
      namespace EngagementScoreMapper
      {

        static const int High_HASH = HashingUtils::HashString("High");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int Low_HASH = HashingUtils::HashString("Low");


        EngagementScore GetEngagementScoreForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == High_HASH)
          {
            return EngagementScore::High;
          }
          else if (hashCode == Medium_HASH)
          {
            return EngagementScore::Medium;
          }
          else if (hashCode == Low_HASH)
          {
            return EngagementScore::Low;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EngagementScore>(hashCode);
          }

          return EngagementScore::NOT_SET;
        }

        Aws::String GetNameForEngagementScore(EngagementScore enumValue)
        {
          switch(enumValue)
          {
          case EngagementScore::NOT_SET:
            return {};
          case EngagementScore::High:
            return "High";
          case EngagementScore::Medium:
            return "Medium";
          case EngagementScore::Low:
            return "Low";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngagementScoreMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
