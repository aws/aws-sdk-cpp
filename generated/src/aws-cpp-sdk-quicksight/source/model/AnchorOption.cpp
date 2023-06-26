/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnchorOption.h>
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
      namespace AnchorOptionMapper
      {

        static const int NOW_HASH = HashingUtils::HashString("NOW");


        AnchorOption GetAnchorOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOW_HASH)
          {
            return AnchorOption::NOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnchorOption>(hashCode);
          }

          return AnchorOption::NOT_SET;
        }

        Aws::String GetNameForAnchorOption(AnchorOption enumValue)
        {
          switch(enumValue)
          {
          case AnchorOption::NOW:
            return "NOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnchorOptionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
