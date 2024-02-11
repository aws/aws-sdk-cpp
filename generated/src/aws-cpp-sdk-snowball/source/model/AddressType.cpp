/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/AddressType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace AddressTypeMapper
      {

        static const int CUST_PICKUP_HASH = HashingUtils::HashString("CUST_PICKUP");
        static const int AWS_SHIP_HASH = HashingUtils::HashString("AWS_SHIP");


        AddressType GetAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUST_PICKUP_HASH)
          {
            return AddressType::CUST_PICKUP;
          }
          else if (hashCode == AWS_SHIP_HASH)
          {
            return AddressType::AWS_SHIP;
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
          case AddressType::CUST_PICKUP:
            return "CUST_PICKUP";
          case AddressType::AWS_SHIP:
            return "AWS_SHIP";
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
  } // namespace Snowball
} // namespace Aws
