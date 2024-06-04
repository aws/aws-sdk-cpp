/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/PersonType.h>
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
      namespace PersonTypeMapper
      {

        static const int Legal_Person_HASH = HashingUtils::HashString("Legal Person");
        static const int Physical_Person_HASH = HashingUtils::HashString("Physical Person");
        static const int Business_HASH = HashingUtils::HashString("Business");


        PersonType GetPersonTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Legal_Person_HASH)
          {
            return PersonType::Legal_Person;
          }
          else if (hashCode == Physical_Person_HASH)
          {
            return PersonType::Physical_Person;
          }
          else if (hashCode == Business_HASH)
          {
            return PersonType::Business;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PersonType>(hashCode);
          }

          return PersonType::NOT_SET;
        }

        Aws::String GetNameForPersonType(PersonType enumValue)
        {
          switch(enumValue)
          {
          case PersonType::NOT_SET:
            return {};
          case PersonType::Legal_Person:
            return "Legal Person";
          case PersonType::Physical_Person:
            return "Physical Person";
          case PersonType::Business:
            return "Business";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PersonTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
