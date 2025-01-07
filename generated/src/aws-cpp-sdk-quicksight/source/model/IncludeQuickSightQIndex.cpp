/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IncludeQuickSightQIndex.h>
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
      namespace IncludeQuickSightQIndexMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        IncludeQuickSightQIndex GetIncludeQuickSightQIndexForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return IncludeQuickSightQIndex::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return IncludeQuickSightQIndex::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncludeQuickSightQIndex>(hashCode);
          }

          return IncludeQuickSightQIndex::NOT_SET;
        }

        Aws::String GetNameForIncludeQuickSightQIndex(IncludeQuickSightQIndex enumValue)
        {
          switch(enumValue)
          {
          case IncludeQuickSightQIndex::NOT_SET:
            return {};
          case IncludeQuickSightQIndex::INCLUDE:
            return "INCLUDE";
          case IncludeQuickSightQIndex::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncludeQuickSightQIndexMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
