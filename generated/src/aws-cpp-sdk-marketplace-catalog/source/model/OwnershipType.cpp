/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/OwnershipType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceCatalog
  {
    namespace Model
    {
      namespace OwnershipTypeMapper
      {

        static const int SELF_HASH = HashingUtils::HashString("SELF");
        static const int SHARED_HASH = HashingUtils::HashString("SHARED");


        OwnershipType GetOwnershipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELF_HASH)
          {
            return OwnershipType::SELF;
          }
          else if (hashCode == SHARED_HASH)
          {
            return OwnershipType::SHARED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OwnershipType>(hashCode);
          }

          return OwnershipType::NOT_SET;
        }

        Aws::String GetNameForOwnershipType(OwnershipType enumValue)
        {
          switch(enumValue)
          {
          case OwnershipType::NOT_SET:
            return {};
          case OwnershipType::SELF:
            return "SELF";
          case OwnershipType::SHARED:
            return "SHARED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OwnershipTypeMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
