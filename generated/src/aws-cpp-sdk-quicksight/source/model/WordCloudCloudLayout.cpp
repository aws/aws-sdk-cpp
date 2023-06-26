/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudCloudLayout.h>
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
      namespace WordCloudCloudLayoutMapper
      {

        static const int FLUID_HASH = HashingUtils::HashString("FLUID");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        WordCloudCloudLayout GetWordCloudCloudLayoutForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLUID_HASH)
          {
            return WordCloudCloudLayout::FLUID;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return WordCloudCloudLayout::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WordCloudCloudLayout>(hashCode);
          }

          return WordCloudCloudLayout::NOT_SET;
        }

        Aws::String GetNameForWordCloudCloudLayout(WordCloudCloudLayout enumValue)
        {
          switch(enumValue)
          {
          case WordCloudCloudLayout::FLUID:
            return "FLUID";
          case WordCloudCloudLayout::NORMAL:
            return "NORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WordCloudCloudLayoutMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
