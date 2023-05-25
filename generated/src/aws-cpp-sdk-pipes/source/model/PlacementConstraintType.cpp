/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PlacementConstraintType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace PlacementConstraintTypeMapper
      {

        static const int distinctInstance_HASH = HashingUtils::HashString("distinctInstance");
        static const int memberOf_HASH = HashingUtils::HashString("memberOf");


        PlacementConstraintType GetPlacementConstraintTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == distinctInstance_HASH)
          {
            return PlacementConstraintType::distinctInstance;
          }
          else if (hashCode == memberOf_HASH)
          {
            return PlacementConstraintType::memberOf;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlacementConstraintType>(hashCode);
          }

          return PlacementConstraintType::NOT_SET;
        }

        Aws::String GetNameForPlacementConstraintType(PlacementConstraintType enumValue)
        {
          switch(enumValue)
          {
          case PlacementConstraintType::distinctInstance:
            return "distinctInstance";
          case PlacementConstraintType::memberOf:
            return "memberOf";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlacementConstraintTypeMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
