/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-entitlement/model/GetEntitlementFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceEntitlementService
  {
    namespace Model
    {
      namespace GetEntitlementFilterNameMapper
      {

        static const int CUSTOMER_IDENTIFIER_HASH = HashingUtils::HashString("CUSTOMER_IDENTIFIER");
        static const int DIMENSION_HASH = HashingUtils::HashString("DIMENSION");
        static const int CUSTOMER_AWS_ACCOUNT_ID_HASH = HashingUtils::HashString("CUSTOMER_AWS_ACCOUNT_ID");


        GetEntitlementFilterName GetGetEntitlementFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_IDENTIFIER_HASH)
          {
            return GetEntitlementFilterName::CUSTOMER_IDENTIFIER;
          }
          else if (hashCode == DIMENSION_HASH)
          {
            return GetEntitlementFilterName::DIMENSION;
          }
          else if (hashCode == CUSTOMER_AWS_ACCOUNT_ID_HASH)
          {
            return GetEntitlementFilterName::CUSTOMER_AWS_ACCOUNT_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GetEntitlementFilterName>(hashCode);
          }

          return GetEntitlementFilterName::NOT_SET;
        }

        Aws::String GetNameForGetEntitlementFilterName(GetEntitlementFilterName enumValue)
        {
          switch(enumValue)
          {
          case GetEntitlementFilterName::NOT_SET:
            return {};
          case GetEntitlementFilterName::CUSTOMER_IDENTIFIER:
            return "CUSTOMER_IDENTIFIER";
          case GetEntitlementFilterName::DIMENSION:
            return "DIMENSION";
          case GetEntitlementFilterName::CUSTOMER_AWS_ACCOUNT_ID:
            return "CUSTOMER_AWS_ACCOUNT_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GetEntitlementFilterNameMapper
    } // namespace Model
  } // namespace MarketplaceEntitlementService
} // namespace Aws
