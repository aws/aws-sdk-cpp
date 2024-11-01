/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TaxRegistrationType.h>
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
      namespace TaxRegistrationTypeMapper
      {

        static const int VAT_HASH = HashingUtils::HashString("VAT");
        static const int GST_HASH = HashingUtils::HashString("GST");
        static const int CPF_HASH = HashingUtils::HashString("CPF");
        static const int CNPJ_HASH = HashingUtils::HashString("CNPJ");
        static const int SST_HASH = HashingUtils::HashString("SST");
        static const int TIN_HASH = HashingUtils::HashString("TIN");
        static const int NRIC_HASH = HashingUtils::HashString("NRIC");


        TaxRegistrationType GetTaxRegistrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VAT_HASH)
          {
            return TaxRegistrationType::VAT;
          }
          else if (hashCode == GST_HASH)
          {
            return TaxRegistrationType::GST;
          }
          else if (hashCode == CPF_HASH)
          {
            return TaxRegistrationType::CPF;
          }
          else if (hashCode == CNPJ_HASH)
          {
            return TaxRegistrationType::CNPJ;
          }
          else if (hashCode == SST_HASH)
          {
            return TaxRegistrationType::SST;
          }
          else if (hashCode == TIN_HASH)
          {
            return TaxRegistrationType::TIN;
          }
          else if (hashCode == NRIC_HASH)
          {
            return TaxRegistrationType::NRIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaxRegistrationType>(hashCode);
          }

          return TaxRegistrationType::NOT_SET;
        }

        Aws::String GetNameForTaxRegistrationType(TaxRegistrationType enumValue)
        {
          switch(enumValue)
          {
          case TaxRegistrationType::NOT_SET:
            return {};
          case TaxRegistrationType::VAT:
            return "VAT";
          case TaxRegistrationType::GST:
            return "GST";
          case TaxRegistrationType::CPF:
            return "CPF";
          case TaxRegistrationType::CNPJ:
            return "CNPJ";
          case TaxRegistrationType::SST:
            return "SST";
          case TaxRegistrationType::TIN:
            return "TIN";
          case TaxRegistrationType::NRIC:
            return "NRIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaxRegistrationTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
