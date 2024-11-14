/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/CompetitorName.h>
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
      namespace CompetitorNameMapper
      {

        static const int Oracle_Cloud_HASH = HashingUtils::HashString("Oracle Cloud");
        static const int On_Prem_HASH = HashingUtils::HashString("On-Prem");
        static const int Co_location_HASH = HashingUtils::HashString("Co-location");
        static const int Akamai_HASH = HashingUtils::HashString("Akamai");
        static const int AliCloud_HASH = HashingUtils::HashString("AliCloud");
        static const int Google_Cloud_Platform_HASH = HashingUtils::HashString("Google Cloud Platform");
        static const int IBM_Softlayer_HASH = HashingUtils::HashString("IBM Softlayer");
        static const int Microsoft_Azure_HASH = HashingUtils::HashString("Microsoft Azure");
        static const int Other_Cost_Optimization_HASH = HashingUtils::HashString("Other- Cost Optimization");
        static const int No_Competition_HASH = HashingUtils::HashString("No Competition");
        static const int _Other_HASH = HashingUtils::HashString("*Other");


        CompetitorName GetCompetitorNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Oracle_Cloud_HASH)
          {
            return CompetitorName::Oracle_Cloud;
          }
          else if (hashCode == On_Prem_HASH)
          {
            return CompetitorName::On_Prem;
          }
          else if (hashCode == Co_location_HASH)
          {
            return CompetitorName::Co_location;
          }
          else if (hashCode == Akamai_HASH)
          {
            return CompetitorName::Akamai;
          }
          else if (hashCode == AliCloud_HASH)
          {
            return CompetitorName::AliCloud;
          }
          else if (hashCode == Google_Cloud_Platform_HASH)
          {
            return CompetitorName::Google_Cloud_Platform;
          }
          else if (hashCode == IBM_Softlayer_HASH)
          {
            return CompetitorName::IBM_Softlayer;
          }
          else if (hashCode == Microsoft_Azure_HASH)
          {
            return CompetitorName::Microsoft_Azure;
          }
          else if (hashCode == Other_Cost_Optimization_HASH)
          {
            return CompetitorName::Other_Cost_Optimization;
          }
          else if (hashCode == No_Competition_HASH)
          {
            return CompetitorName::No_Competition;
          }
          else if (hashCode == _Other_HASH)
          {
            return CompetitorName::_Other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompetitorName>(hashCode);
          }

          return CompetitorName::NOT_SET;
        }

        Aws::String GetNameForCompetitorName(CompetitorName enumValue)
        {
          switch(enumValue)
          {
          case CompetitorName::NOT_SET:
            return {};
          case CompetitorName::Oracle_Cloud:
            return "Oracle Cloud";
          case CompetitorName::On_Prem:
            return "On-Prem";
          case CompetitorName::Co_location:
            return "Co-location";
          case CompetitorName::Akamai:
            return "Akamai";
          case CompetitorName::AliCloud:
            return "AliCloud";
          case CompetitorName::Google_Cloud_Platform:
            return "Google Cloud Platform";
          case CompetitorName::IBM_Softlayer:
            return "IBM Softlayer";
          case CompetitorName::Microsoft_Azure:
            return "Microsoft Azure";
          case CompetitorName::Other_Cost_Optimization:
            return "Other- Cost Optimization";
          case CompetitorName::No_Competition:
            return "No Competition";
          case CompetitorName::_Other:
            return "*Other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompetitorNameMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
