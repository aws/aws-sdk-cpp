/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ContentModerationSortBy.h>
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
      namespace ContentModerationSortByMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");


        ContentModerationSortBy GetContentModerationSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return ContentModerationSortBy::NAME;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return ContentModerationSortBy::TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentModerationSortBy>(hashCode);
          }

          return ContentModerationSortBy::NOT_SET;
        }

        Aws::String GetNameForContentModerationSortBy(ContentModerationSortBy enumValue)
        {
          switch(enumValue)
          {
          case ContentModerationSortBy::NAME:
            return "NAME";
          case ContentModerationSortBy::TIMESTAMP:
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

      } // namespace ContentModerationSortByMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
