/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/MalaysiaServiceTaxCode.h>
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
      namespace MalaysiaServiceTaxCodeMapper
      {

        static const int Consultancy_HASH = HashingUtils::HashString("Consultancy");
        static const int Digital_Service_And_Electronic_Medium_HASH = HashingUtils::HashString("Digital Service And Electronic Medium");
        static const int IT_Services_HASH = HashingUtils::HashString("IT Services");
        static const int Training_Or_Coaching_HASH = HashingUtils::HashString("Training Or Coaching");


        MalaysiaServiceTaxCode GetMalaysiaServiceTaxCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Consultancy_HASH)
          {
            return MalaysiaServiceTaxCode::Consultancy;
          }
          else if (hashCode == Digital_Service_And_Electronic_Medium_HASH)
          {
            return MalaysiaServiceTaxCode::Digital_Service_And_Electronic_Medium;
          }
          else if (hashCode == IT_Services_HASH)
          {
            return MalaysiaServiceTaxCode::IT_Services;
          }
          else if (hashCode == Training_Or_Coaching_HASH)
          {
            return MalaysiaServiceTaxCode::Training_Or_Coaching;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MalaysiaServiceTaxCode>(hashCode);
          }

          return MalaysiaServiceTaxCode::NOT_SET;
        }

        Aws::String GetNameForMalaysiaServiceTaxCode(MalaysiaServiceTaxCode enumValue)
        {
          switch(enumValue)
          {
          case MalaysiaServiceTaxCode::NOT_SET:
            return {};
          case MalaysiaServiceTaxCode::Consultancy:
            return "Consultancy";
          case MalaysiaServiceTaxCode::Digital_Service_And_Electronic_Medium:
            return "Digital Service And Electronic Medium";
          case MalaysiaServiceTaxCode::IT_Services:
            return "IT Services";
          case MalaysiaServiceTaxCode::Training_Or_Coaching:
            return "Training Or Coaching";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MalaysiaServiceTaxCodeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
