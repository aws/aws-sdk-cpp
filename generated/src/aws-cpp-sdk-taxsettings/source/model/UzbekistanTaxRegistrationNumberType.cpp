/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/UzbekistanTaxRegistrationNumberType.h>
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
      namespace UzbekistanTaxRegistrationNumberTypeMapper
      {

        static const int Business_HASH = HashingUtils::HashString("Business");
        static const int Individual_HASH = HashingUtils::HashString("Individual");


        UzbekistanTaxRegistrationNumberType GetUzbekistanTaxRegistrationNumberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Business_HASH)
          {
            return UzbekistanTaxRegistrationNumberType::Business;
          }
          else if (hashCode == Individual_HASH)
          {
            return UzbekistanTaxRegistrationNumberType::Individual;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UzbekistanTaxRegistrationNumberType>(hashCode);
          }

          return UzbekistanTaxRegistrationNumberType::NOT_SET;
        }

        Aws::String GetNameForUzbekistanTaxRegistrationNumberType(UzbekistanTaxRegistrationNumberType enumValue)
        {
          switch(enumValue)
          {
          case UzbekistanTaxRegistrationNumberType::NOT_SET:
            return {};
          case UzbekistanTaxRegistrationNumberType::Business:
            return "Business";
          case UzbekistanTaxRegistrationNumberType::Individual:
            return "Individual";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UzbekistanTaxRegistrationNumberTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
