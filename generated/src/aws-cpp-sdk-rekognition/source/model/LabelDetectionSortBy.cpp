/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/LabelDetectionSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace LabelDetectionSortByMapper
      {

        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t TIMESTAMP_HASH = ConstExprHashingUtils::HashString("TIMESTAMP");


        LabelDetectionSortBy GetLabelDetectionSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return LabelDetectionSortBy::NAME;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return LabelDetectionSortBy::TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LabelDetectionSortBy>(hashCode);
          }

          return LabelDetectionSortBy::NOT_SET;
        }

        Aws::String GetNameForLabelDetectionSortBy(LabelDetectionSortBy enumValue)
        {
          switch(enumValue)
          {
          case LabelDetectionSortBy::NOT_SET:
            return {};
          case LabelDetectionSortBy::NAME:
            return "NAME";
          case LabelDetectionSortBy::TIMESTAMP:
            return "TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LabelDetectionSortByMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
