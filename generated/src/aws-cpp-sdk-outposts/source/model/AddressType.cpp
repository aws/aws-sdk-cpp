/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/AddressType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace AddressTypeMapper
      {

        static const int SHIPPING_ADDRESS_HASH = HashingUtils::HashString("SHIPPING_ADDRESS");
        static const int OPERATING_ADDRESS_HASH = HashingUtils::HashString("OPERATING_ADDRESS");


        AddressType GetAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHIPPING_ADDRESS_HASH)
          {
            return AddressType::SHIPPING_ADDRESS;
          }
          else if (hashCode == OPERATING_ADDRESS_HASH)
          {
            return AddressType::OPERATING_ADDRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AddressType>(hashCode);
          }

          return AddressType::NOT_SET;
        }

        Aws::String GetNameForAddressType(AddressType enumValue)
        {
          switch(enumValue)
          {
          case AddressType::NOT_SET:
            return {};
          case AddressType::SHIPPING_ADDRESS:
            return "SHIPPING_ADDRESS";
          case AddressType::OPERATING_ADDRESS:
            return "OPERATING_ADDRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AddressTypeMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
