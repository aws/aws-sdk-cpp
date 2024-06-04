/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/AddressRoleType.h>
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
      namespace AddressRoleTypeMapper
      {

        static const int TaxAddress_HASH = HashingUtils::HashString("TaxAddress");
        static const int BillingAddress_HASH = HashingUtils::HashString("BillingAddress");
        static const int ContactAddress_HASH = HashingUtils::HashString("ContactAddress");


        AddressRoleType GetAddressRoleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TaxAddress_HASH)
          {
            return AddressRoleType::TaxAddress;
          }
          else if (hashCode == BillingAddress_HASH)
          {
            return AddressRoleType::BillingAddress;
          }
          else if (hashCode == ContactAddress_HASH)
          {
            return AddressRoleType::ContactAddress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AddressRoleType>(hashCode);
          }

          return AddressRoleType::NOT_SET;
        }

        Aws::String GetNameForAddressRoleType(AddressRoleType enumValue)
        {
          switch(enumValue)
          {
          case AddressRoleType::NOT_SET:
            return {};
          case AddressRoleType::TaxAddress:
            return "TaxAddress";
          case AddressRoleType::BillingAddress:
            return "BillingAddress";
          case AddressRoleType::ContactAddress:
            return "ContactAddress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AddressRoleTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
