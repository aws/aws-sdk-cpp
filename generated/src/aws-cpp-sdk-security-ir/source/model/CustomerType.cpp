/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/CustomerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityIR
  {
    namespace Model
    {
      namespace CustomerTypeMapper
      {

        static const int Standalone_HASH = HashingUtils::HashString("Standalone");
        static const int Organization_HASH = HashingUtils::HashString("Organization");


        CustomerType GetCustomerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standalone_HASH)
          {
            return CustomerType::Standalone;
          }
          else if (hashCode == Organization_HASH)
          {
            return CustomerType::Organization;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomerType>(hashCode);
          }

          return CustomerType::NOT_SET;
        }

        Aws::String GetNameForCustomerType(CustomerType enumValue)
        {
          switch(enumValue)
          {
          case CustomerType::NOT_SET:
            return {};
          case CustomerType::Standalone:
            return "Standalone";
          case CustomerType::Organization:
            return "Organization";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomerTypeMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
