/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/Sector.h>
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
      namespace SectorMapper
      {

        static const int Business_HASH = HashingUtils::HashString("Business");
        static const int Individual_HASH = HashingUtils::HashString("Individual");
        static const int Government_HASH = HashingUtils::HashString("Government");


        Sector GetSectorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Business_HASH)
          {
            return Sector::Business;
          }
          else if (hashCode == Individual_HASH)
          {
            return Sector::Individual;
          }
          else if (hashCode == Government_HASH)
          {
            return Sector::Government;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Sector>(hashCode);
          }

          return Sector::NOT_SET;
        }

        Aws::String GetNameForSector(Sector enumValue)
        {
          switch(enumValue)
          {
          case Sector::NOT_SET:
            return {};
          case Sector::Business:
            return "Business";
          case Sector::Individual:
            return "Individual";
          case Sector::Government:
            return "Government";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SectorMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
