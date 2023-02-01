/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/AccessorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace AccessorTypeMapper
      {

        static const int BILLING_TOKEN_HASH = HashingUtils::HashString("BILLING_TOKEN");


        AccessorType GetAccessorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BILLING_TOKEN_HASH)
          {
            return AccessorType::BILLING_TOKEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessorType>(hashCode);
          }

          return AccessorType::NOT_SET;
        }

        Aws::String GetNameForAccessorType(AccessorType enumValue)
        {
          switch(enumValue)
          {
          case AccessorType::BILLING_TOKEN:
            return "BILLING_TOKEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessorTypeMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
