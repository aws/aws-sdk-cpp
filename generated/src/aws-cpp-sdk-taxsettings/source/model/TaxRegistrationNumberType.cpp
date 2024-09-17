/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TaxRegistrationNumberType.h>
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
      namespace TaxRegistrationNumberTypeMapper
      {

        static const int TaxRegistrationNumber_HASH = HashingUtils::HashString("TaxRegistrationNumber");
        static const int LocalRegistrationNumber_HASH = HashingUtils::HashString("LocalRegistrationNumber");


        TaxRegistrationNumberType GetTaxRegistrationNumberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TaxRegistrationNumber_HASH)
          {
            return TaxRegistrationNumberType::TaxRegistrationNumber;
          }
          else if (hashCode == LocalRegistrationNumber_HASH)
          {
            return TaxRegistrationNumberType::LocalRegistrationNumber;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaxRegistrationNumberType>(hashCode);
          }

          return TaxRegistrationNumberType::NOT_SET;
        }

        Aws::String GetNameForTaxRegistrationNumberType(TaxRegistrationNumberType enumValue)
        {
          switch(enumValue)
          {
          case TaxRegistrationNumberType::NOT_SET:
            return {};
          case TaxRegistrationNumberType::TaxRegistrationNumber:
            return "TaxRegistrationNumber";
          case TaxRegistrationNumberType::LocalRegistrationNumber:
            return "LocalRegistrationNumber";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaxRegistrationNumberTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
