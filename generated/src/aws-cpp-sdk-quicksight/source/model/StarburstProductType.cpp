/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StarburstProductType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace StarburstProductTypeMapper
      {

        static const int GALAXY_HASH = HashingUtils::HashString("GALAXY");
        static const int ENTERPRISE_HASH = HashingUtils::HashString("ENTERPRISE");


        StarburstProductType GetStarburstProductTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GALAXY_HASH)
          {
            return StarburstProductType::GALAXY;
          }
          else if (hashCode == ENTERPRISE_HASH)
          {
            return StarburstProductType::ENTERPRISE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StarburstProductType>(hashCode);
          }

          return StarburstProductType::NOT_SET;
        }

        Aws::String GetNameForStarburstProductType(StarburstProductType enumValue)
        {
          switch(enumValue)
          {
          case StarburstProductType::NOT_SET:
            return {};
          case StarburstProductType::GALAXY:
            return "GALAXY";
          case StarburstProductType::ENTERPRISE:
            return "ENTERPRISE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StarburstProductTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
