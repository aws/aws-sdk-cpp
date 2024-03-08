/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ElevationUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrivateNetworks
  {
    namespace Model
    {
      namespace ElevationUnitMapper
      {

        static const int FEET_HASH = HashingUtils::HashString("FEET");


        ElevationUnit GetElevationUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FEET_HASH)
          {
            return ElevationUnit::FEET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ElevationUnit>(hashCode);
          }

          return ElevationUnit::NOT_SET;
        }

        Aws::String GetNameForElevationUnit(ElevationUnit enumValue)
        {
          switch(enumValue)
          {
          case ElevationUnit::NOT_SET:
            return {};
          case ElevationUnit::FEET:
            return "FEET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ElevationUnitMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
