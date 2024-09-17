/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/UkraineTrnType.h>
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
      namespace UkraineTrnTypeMapper
      {

        static const int Business_HASH = HashingUtils::HashString("Business");
        static const int Individual_HASH = HashingUtils::HashString("Individual");


        UkraineTrnType GetUkraineTrnTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Business_HASH)
          {
            return UkraineTrnType::Business;
          }
          else if (hashCode == Individual_HASH)
          {
            return UkraineTrnType::Individual;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UkraineTrnType>(hashCode);
          }

          return UkraineTrnType::NOT_SET;
        }

        Aws::String GetNameForUkraineTrnType(UkraineTrnType enumValue)
        {
          switch(enumValue)
          {
          case UkraineTrnType::NOT_SET:
            return {};
          case UkraineTrnType::Business:
            return "Business";
          case UkraineTrnType::Individual:
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

      } // namespace UkraineTrnTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
