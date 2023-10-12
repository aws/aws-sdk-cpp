/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/LabelDetectionAggregateBy.h>
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
      namespace LabelDetectionAggregateByMapper
      {

        static constexpr uint32_t TIMESTAMPS_HASH = ConstExprHashingUtils::HashString("TIMESTAMPS");
        static constexpr uint32_t SEGMENTS_HASH = ConstExprHashingUtils::HashString("SEGMENTS");


        LabelDetectionAggregateBy GetLabelDetectionAggregateByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TIMESTAMPS_HASH)
          {
            return LabelDetectionAggregateBy::TIMESTAMPS;
          }
          else if (hashCode == SEGMENTS_HASH)
          {
            return LabelDetectionAggregateBy::SEGMENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LabelDetectionAggregateBy>(hashCode);
          }

          return LabelDetectionAggregateBy::NOT_SET;
        }

        Aws::String GetNameForLabelDetectionAggregateBy(LabelDetectionAggregateBy enumValue)
        {
          switch(enumValue)
          {
          case LabelDetectionAggregateBy::NOT_SET:
            return {};
          case LabelDetectionAggregateBy::TIMESTAMPS:
            return "TIMESTAMPS";
          case LabelDetectionAggregateBy::SEGMENTS:
            return "SEGMENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LabelDetectionAggregateByMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
