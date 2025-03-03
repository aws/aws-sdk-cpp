/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/VideoExtractionStatus.h>
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
      namespace VideoExtractionStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        VideoExtractionStatus GetVideoExtractionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return VideoExtractionStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return VideoExtractionStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoExtractionStatus>(hashCode);
          }

          return VideoExtractionStatus::NOT_SET;
        }

        Aws::String GetNameForVideoExtractionStatus(VideoExtractionStatus enumValue)
        {
          switch(enumValue)
          {
          case VideoExtractionStatus::NOT_SET:
            return {};
          case VideoExtractionStatus::ENABLED:
            return "ENABLED";
          case VideoExtractionStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoExtractionStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
