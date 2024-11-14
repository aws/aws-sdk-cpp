/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/Industry.h>
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
      namespace IndustryMapper
      {

        static const int Aerospace_HASH = HashingUtils::HashString("Aerospace");
        static const int Agriculture_HASH = HashingUtils::HashString("Agriculture");
        static const int Automotive_HASH = HashingUtils::HashString("Automotive");
        static const int Computers_and_Electronics_HASH = HashingUtils::HashString("Computers and Electronics");
        static const int Consumer_Goods_HASH = HashingUtils::HashString("Consumer Goods");
        static const int Education_HASH = HashingUtils::HashString("Education");
        static const int Energy_Oil_and_Gas_HASH = HashingUtils::HashString("Energy - Oil and Gas");
        static const int Energy_Power_and_Utilities_HASH = HashingUtils::HashString("Energy - Power and Utilities");
        static const int Financial_Services_HASH = HashingUtils::HashString("Financial Services");
        static const int Gaming_HASH = HashingUtils::HashString("Gaming");
        static const int Government_HASH = HashingUtils::HashString("Government");
        static const int Healthcare_HASH = HashingUtils::HashString("Healthcare");
        static const int Hospitality_HASH = HashingUtils::HashString("Hospitality");
        static const int Life_Sciences_HASH = HashingUtils::HashString("Life Sciences");
        static const int Manufacturing_HASH = HashingUtils::HashString("Manufacturing");
        static const int Marketing_and_Advertising_HASH = HashingUtils::HashString("Marketing and Advertising");
        static const int Media_and_Entertainment_HASH = HashingUtils::HashString("Media and Entertainment");
        static const int Mining_HASH = HashingUtils::HashString("Mining");
        static const int Non_Profit_Organization_HASH = HashingUtils::HashString("Non-Profit Organization");
        static const int Professional_Services_HASH = HashingUtils::HashString("Professional Services");
        static const int Real_Estate_and_Construction_HASH = HashingUtils::HashString("Real Estate and Construction");
        static const int Retail_HASH = HashingUtils::HashString("Retail");
        static const int Software_and_Internet_HASH = HashingUtils::HashString("Software and Internet");
        static const int Telecommunications_HASH = HashingUtils::HashString("Telecommunications");
        static const int Transportation_and_Logistics_HASH = HashingUtils::HashString("Transportation and Logistics");
        static const int Travel_HASH = HashingUtils::HashString("Travel");
        static const int Wholesale_and_Distribution_HASH = HashingUtils::HashString("Wholesale and Distribution");
        static const int Other_HASH = HashingUtils::HashString("Other");


        Industry GetIndustryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Aerospace_HASH)
          {
            return Industry::Aerospace;
          }
          else if (hashCode == Agriculture_HASH)
          {
            return Industry::Agriculture;
          }
          else if (hashCode == Automotive_HASH)
          {
            return Industry::Automotive;
          }
          else if (hashCode == Computers_and_Electronics_HASH)
          {
            return Industry::Computers_and_Electronics;
          }
          else if (hashCode == Consumer_Goods_HASH)
          {
            return Industry::Consumer_Goods;
          }
          else if (hashCode == Education_HASH)
          {
            return Industry::Education;
          }
          else if (hashCode == Energy_Oil_and_Gas_HASH)
          {
            return Industry::Energy_Oil_and_Gas;
          }
          else if (hashCode == Energy_Power_and_Utilities_HASH)
          {
            return Industry::Energy_Power_and_Utilities;
          }
          else if (hashCode == Financial_Services_HASH)
          {
            return Industry::Financial_Services;
          }
          else if (hashCode == Gaming_HASH)
          {
            return Industry::Gaming;
          }
          else if (hashCode == Government_HASH)
          {
            return Industry::Government;
          }
          else if (hashCode == Healthcare_HASH)
          {
            return Industry::Healthcare;
          }
          else if (hashCode == Hospitality_HASH)
          {
            return Industry::Hospitality;
          }
          else if (hashCode == Life_Sciences_HASH)
          {
            return Industry::Life_Sciences;
          }
          else if (hashCode == Manufacturing_HASH)
          {
            return Industry::Manufacturing;
          }
          else if (hashCode == Marketing_and_Advertising_HASH)
          {
            return Industry::Marketing_and_Advertising;
          }
          else if (hashCode == Media_and_Entertainment_HASH)
          {
            return Industry::Media_and_Entertainment;
          }
          else if (hashCode == Mining_HASH)
          {
            return Industry::Mining;
          }
          else if (hashCode == Non_Profit_Organization_HASH)
          {
            return Industry::Non_Profit_Organization;
          }
          else if (hashCode == Professional_Services_HASH)
          {
            return Industry::Professional_Services;
          }
          else if (hashCode == Real_Estate_and_Construction_HASH)
          {
            return Industry::Real_Estate_and_Construction;
          }
          else if (hashCode == Retail_HASH)
          {
            return Industry::Retail;
          }
          else if (hashCode == Software_and_Internet_HASH)
          {
            return Industry::Software_and_Internet;
          }
          else if (hashCode == Telecommunications_HASH)
          {
            return Industry::Telecommunications;
          }
          else if (hashCode == Transportation_and_Logistics_HASH)
          {
            return Industry::Transportation_and_Logistics;
          }
          else if (hashCode == Travel_HASH)
          {
            return Industry::Travel;
          }
          else if (hashCode == Wholesale_and_Distribution_HASH)
          {
            return Industry::Wholesale_and_Distribution;
          }
          else if (hashCode == Other_HASH)
          {
            return Industry::Other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Industry>(hashCode);
          }

          return Industry::NOT_SET;
        }

        Aws::String GetNameForIndustry(Industry enumValue)
        {
          switch(enumValue)
          {
          case Industry::NOT_SET:
            return {};
          case Industry::Aerospace:
            return "Aerospace";
          case Industry::Agriculture:
            return "Agriculture";
          case Industry::Automotive:
            return "Automotive";
          case Industry::Computers_and_Electronics:
            return "Computers and Electronics";
          case Industry::Consumer_Goods:
            return "Consumer Goods";
          case Industry::Education:
            return "Education";
          case Industry::Energy_Oil_and_Gas:
            return "Energy - Oil and Gas";
          case Industry::Energy_Power_and_Utilities:
            return "Energy - Power and Utilities";
          case Industry::Financial_Services:
            return "Financial Services";
          case Industry::Gaming:
            return "Gaming";
          case Industry::Government:
            return "Government";
          case Industry::Healthcare:
            return "Healthcare";
          case Industry::Hospitality:
            return "Hospitality";
          case Industry::Life_Sciences:
            return "Life Sciences";
          case Industry::Manufacturing:
            return "Manufacturing";
          case Industry::Marketing_and_Advertising:
            return "Marketing and Advertising";
          case Industry::Media_and_Entertainment:
            return "Media and Entertainment";
          case Industry::Mining:
            return "Mining";
          case Industry::Non_Profit_Organization:
            return "Non-Profit Organization";
          case Industry::Professional_Services:
            return "Professional Services";
          case Industry::Real_Estate_and_Construction:
            return "Real Estate and Construction";
          case Industry::Retail:
            return "Retail";
          case Industry::Software_and_Internet:
            return "Software and Internet";
          case Industry::Telecommunications:
            return "Telecommunications";
          case Industry::Transportation_and_Logistics:
            return "Transportation and Logistics";
          case Industry::Travel:
            return "Travel";
          case Industry::Wholesale_and_Distribution:
            return "Wholesale and Distribution";
          case Industry::Other:
            return "Other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndustryMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
