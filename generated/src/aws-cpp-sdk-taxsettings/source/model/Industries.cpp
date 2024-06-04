/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/Industries.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TaxSettings
  {
    namespace Model
    {
      namespace IndustriesMapper
      {

        static const int CirculatingOrg_HASH = HashingUtils::HashString("CirculatingOrg");
        static const int ProfessionalOrg_HASH = HashingUtils::HashString("ProfessionalOrg");
        static const int Banks_HASH = HashingUtils::HashString("Banks");
        static const int Insurance_HASH = HashingUtils::HashString("Insurance");
        static const int PensionAndBenefitFunds_HASH = HashingUtils::HashString("PensionAndBenefitFunds");
        static const int DevelopmentAgencies_HASH = HashingUtils::HashString("DevelopmentAgencies");


        Industries GetIndustriesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CirculatingOrg_HASH)
          {
            return Industries::CirculatingOrg;
          }
          else if (hashCode == ProfessionalOrg_HASH)
          {
            return Industries::ProfessionalOrg;
          }
          else if (hashCode == Banks_HASH)
          {
            return Industries::Banks;
          }
          else if (hashCode == Insurance_HASH)
          {
            return Industries::Insurance;
          }
          else if (hashCode == PensionAndBenefitFunds_HASH)
          {
            return Industries::PensionAndBenefitFunds;
          }
          else if (hashCode == DevelopmentAgencies_HASH)
          {
            return Industries::DevelopmentAgencies;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Industries>(hashCode);
          }

          return Industries::NOT_SET;
        }

        Aws::String GetNameForIndustries(Industries enumValue)
        {
          switch(enumValue)
          {
          case Industries::NOT_SET:
            return {};
          case Industries::CirculatingOrg:
            return "CirculatingOrg";
          case Industries::ProfessionalOrg:
            return "ProfessionalOrg";
          case Industries::Banks:
            return "Banks";
          case Industries::Insurance:
            return "Insurance";
          case Industries::PensionAndBenefitFunds:
            return "PensionAndBenefitFunds";
          case Industries::DevelopmentAgencies:
            return "DevelopmentAgencies";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndustriesMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
