/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ReservedNodeOfferingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ReservedNodeOfferingTypeMapper
      {

        static const int Regular_HASH = HashingUtils::HashString("Regular");
        static const int Upgradable_HASH = HashingUtils::HashString("Upgradable");


        ReservedNodeOfferingType GetReservedNodeOfferingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Regular_HASH)
          {
            return ReservedNodeOfferingType::Regular;
          }
          else if (hashCode == Upgradable_HASH)
          {
            return ReservedNodeOfferingType::Upgradable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservedNodeOfferingType>(hashCode);
          }

          return ReservedNodeOfferingType::NOT_SET;
        }

        Aws::String GetNameForReservedNodeOfferingType(ReservedNodeOfferingType enumValue)
        {
          switch(enumValue)
          {
          case ReservedNodeOfferingType::Regular:
            return "Regular";
          case ReservedNodeOfferingType::Upgradable:
            return "Upgradable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservedNodeOfferingTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
