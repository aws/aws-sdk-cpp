/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/IndonesiaTaxRegistrationNumberType.h>
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
      namespace IndonesiaTaxRegistrationNumberTypeMapper
      {

        static const int NIK_HASH = HashingUtils::HashString("NIK");
        static const int PassportNumber_HASH = HashingUtils::HashString("PassportNumber");
        static const int NPWP_HASH = HashingUtils::HashString("NPWP");
        static const int NITKU_HASH = HashingUtils::HashString("NITKU");


        IndonesiaTaxRegistrationNumberType GetIndonesiaTaxRegistrationNumberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NIK_HASH)
          {
            return IndonesiaTaxRegistrationNumberType::NIK;
          }
          else if (hashCode == PassportNumber_HASH)
          {
            return IndonesiaTaxRegistrationNumberType::PassportNumber;
          }
          else if (hashCode == NPWP_HASH)
          {
            return IndonesiaTaxRegistrationNumberType::NPWP;
          }
          else if (hashCode == NITKU_HASH)
          {
            return IndonesiaTaxRegistrationNumberType::NITKU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndonesiaTaxRegistrationNumberType>(hashCode);
          }

          return IndonesiaTaxRegistrationNumberType::NOT_SET;
        }

        Aws::String GetNameForIndonesiaTaxRegistrationNumberType(IndonesiaTaxRegistrationNumberType enumValue)
        {
          switch(enumValue)
          {
          case IndonesiaTaxRegistrationNumberType::NOT_SET:
            return {};
          case IndonesiaTaxRegistrationNumberType::NIK:
            return "NIK";
          case IndonesiaTaxRegistrationNumberType::PassportNumber:
            return "PassportNumber";
          case IndonesiaTaxRegistrationNumberType::NPWP:
            return "NPWP";
          case IndonesiaTaxRegistrationNumberType::NITKU:
            return "NITKU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndonesiaTaxRegistrationNumberTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
