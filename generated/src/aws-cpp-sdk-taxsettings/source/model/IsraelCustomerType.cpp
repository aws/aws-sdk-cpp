/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/IsraelCustomerType.h>
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
      namespace IsraelCustomerTypeMapper
      {

        static const int Business_HASH = HashingUtils::HashString("Business");
        static const int Individual_HASH = HashingUtils::HashString("Individual");


        IsraelCustomerType GetIsraelCustomerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Business_HASH)
          {
            return IsraelCustomerType::Business;
          }
          else if (hashCode == Individual_HASH)
          {
            return IsraelCustomerType::Individual;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsraelCustomerType>(hashCode);
          }

          return IsraelCustomerType::NOT_SET;
        }

        Aws::String GetNameForIsraelCustomerType(IsraelCustomerType enumValue)
        {
          switch(enumValue)
          {
          case IsraelCustomerType::NOT_SET:
            return {};
          case IsraelCustomerType::Business:
            return "Business";
          case IsraelCustomerType::Individual:
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

      } // namespace IsraelCustomerTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
