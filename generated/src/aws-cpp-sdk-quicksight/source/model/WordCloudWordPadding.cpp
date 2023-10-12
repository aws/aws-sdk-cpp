/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudWordPadding.h>
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
      namespace WordCloudWordPaddingMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t SMALL_HASH = ConstExprHashingUtils::HashString("SMALL");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t LARGE_HASH = ConstExprHashingUtils::HashString("LARGE");


        WordCloudWordPadding GetWordCloudWordPaddingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return WordCloudWordPadding::NONE;
          }
          else if (hashCode == SMALL_HASH)
          {
            return WordCloudWordPadding::SMALL;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return WordCloudWordPadding::MEDIUM;
          }
          else if (hashCode == LARGE_HASH)
          {
            return WordCloudWordPadding::LARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WordCloudWordPadding>(hashCode);
          }

          return WordCloudWordPadding::NOT_SET;
        }

        Aws::String GetNameForWordCloudWordPadding(WordCloudWordPadding enumValue)
        {
          switch(enumValue)
          {
          case WordCloudWordPadding::NOT_SET:
            return {};
          case WordCloudWordPadding::NONE:
            return "NONE";
          case WordCloudWordPadding::SMALL:
            return "SMALL";
          case WordCloudWordPadding::MEDIUM:
            return "MEDIUM";
          case WordCloudWordPadding::LARGE:
            return "LARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WordCloudWordPaddingMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
