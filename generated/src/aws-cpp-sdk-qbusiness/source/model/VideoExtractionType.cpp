/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/VideoExtractionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace VideoExtractionTypeMapper
      {

        static const int TRANSCRIPT_HASH = HashingUtils::HashString("TRANSCRIPT");
        static const int SUMMARY_HASH = HashingUtils::HashString("SUMMARY");


        VideoExtractionType GetVideoExtractionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSCRIPT_HASH)
          {
            return VideoExtractionType::TRANSCRIPT;
          }
          else if (hashCode == SUMMARY_HASH)
          {
            return VideoExtractionType::SUMMARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoExtractionType>(hashCode);
          }

          return VideoExtractionType::NOT_SET;
        }

        Aws::String GetNameForVideoExtractionType(VideoExtractionType enumValue)
        {
          switch(enumValue)
          {
          case VideoExtractionType::NOT_SET:
            return {};
          case VideoExtractionType::TRANSCRIPT:
            return "TRANSCRIPT";
          case VideoExtractionType::SUMMARY:
            return "SUMMARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoExtractionTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
