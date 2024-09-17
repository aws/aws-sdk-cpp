/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/SaudiArabiaTaxRegistrationNumberType.h>
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
      namespace SaudiArabiaTaxRegistrationNumberTypeMapper
      {

        static const int TaxRegistrationNumber_HASH = HashingUtils::HashString("TaxRegistrationNumber");
        static const int TaxIdentificationNumber_HASH = HashingUtils::HashString("TaxIdentificationNumber");
        static const int CommercialRegistrationNumber_HASH = HashingUtils::HashString("CommercialRegistrationNumber");


        SaudiArabiaTaxRegistrationNumberType GetSaudiArabiaTaxRegistrationNumberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TaxRegistrationNumber_HASH)
          {
            return SaudiArabiaTaxRegistrationNumberType::TaxRegistrationNumber;
          }
          else if (hashCode == TaxIdentificationNumber_HASH)
          {
            return SaudiArabiaTaxRegistrationNumberType::TaxIdentificationNumber;
          }
          else if (hashCode == CommercialRegistrationNumber_HASH)
          {
            return SaudiArabiaTaxRegistrationNumberType::CommercialRegistrationNumber;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SaudiArabiaTaxRegistrationNumberType>(hashCode);
          }

          return SaudiArabiaTaxRegistrationNumberType::NOT_SET;
        }

        Aws::String GetNameForSaudiArabiaTaxRegistrationNumberType(SaudiArabiaTaxRegistrationNumberType enumValue)
        {
          switch(enumValue)
          {
          case SaudiArabiaTaxRegistrationNumberType::NOT_SET:
            return {};
          case SaudiArabiaTaxRegistrationNumberType::TaxRegistrationNumber:
            return "TaxRegistrationNumber";
          case SaudiArabiaTaxRegistrationNumberType::TaxIdentificationNumber:
            return "TaxIdentificationNumber";
          case SaudiArabiaTaxRegistrationNumberType::CommercialRegistrationNumber:
            return "CommercialRegistrationNumber";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SaudiArabiaTaxRegistrationNumberTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
