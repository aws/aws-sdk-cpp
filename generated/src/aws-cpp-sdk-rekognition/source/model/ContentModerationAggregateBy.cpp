/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ContentModerationAggregateBy.h>
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
      namespace ContentModerationAggregateByMapper
      {

        static const int TIMESTAMPS_HASH = HashingUtils::HashString("TIMESTAMPS");
        static const int SEGMENTS_HASH = HashingUtils::HashString("SEGMENTS");


        ContentModerationAggregateBy GetContentModerationAggregateByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TIMESTAMPS_HASH)
          {
            return ContentModerationAggregateBy::TIMESTAMPS;
          }
          else if (hashCode == SEGMENTS_HASH)
          {
            return ContentModerationAggregateBy::SEGMENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentModerationAggregateBy>(hashCode);
          }

          return ContentModerationAggregateBy::NOT_SET;
        }

        Aws::String GetNameForContentModerationAggregateBy(ContentModerationAggregateBy enumValue)
        {
          switch(enumValue)
          {
          case ContentModerationAggregateBy::NOT_SET:
            return {};
          case ContentModerationAggregateBy::TIMESTAMPS:
            return "TIMESTAMPS";
          case ContentModerationAggregateBy::SEGMENTS:
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

      } // namespace ContentModerationAggregateByMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
