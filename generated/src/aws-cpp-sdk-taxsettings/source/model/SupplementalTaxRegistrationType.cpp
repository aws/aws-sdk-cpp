/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/SupplementalTaxRegistrationType.h>
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
      namespace SupplementalTaxRegistrationTypeMapper
      {

        static const int VAT_HASH = HashingUtils::HashString("VAT");


        SupplementalTaxRegistrationType GetSupplementalTaxRegistrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VAT_HASH)
          {
            return SupplementalTaxRegistrationType::VAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupplementalTaxRegistrationType>(hashCode);
          }

          return SupplementalTaxRegistrationType::NOT_SET;
        }

        Aws::String GetNameForSupplementalTaxRegistrationType(SupplementalTaxRegistrationType enumValue)
        {
          switch(enumValue)
          {
          case SupplementalTaxRegistrationType::NOT_SET:
            return {};
          case SupplementalTaxRegistrationType::VAT:
            return "VAT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupplementalTaxRegistrationTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
