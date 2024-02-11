/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/MapFilterComparison.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace MapFilterComparisonMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int NOT_CONTAINS_HASH = HashingUtils::HashString("NOT_CONTAINS");


        MapFilterComparison GetMapFilterComparisonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return MapFilterComparison::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return MapFilterComparison::NOT_EQUALS;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return MapFilterComparison::CONTAINS;
          }
          else if (hashCode == NOT_CONTAINS_HASH)
          {
            return MapFilterComparison::NOT_CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MapFilterComparison>(hashCode);
          }

          return MapFilterComparison::NOT_SET;
        }

        Aws::String GetNameForMapFilterComparison(MapFilterComparison enumValue)
        {
          switch(enumValue)
          {
          case MapFilterComparison::NOT_SET:
            return {};
          case MapFilterComparison::EQUALS:
            return "EQUALS";
          case MapFilterComparison::NOT_EQUALS:
            return "NOT_EQUALS";
          case MapFilterComparison::CONTAINS:
            return "CONTAINS";
          case MapFilterComparison::NOT_CONTAINS:
            return "NOT_CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MapFilterComparisonMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
