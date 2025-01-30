/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/StreamingMediaFileConditioning.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace StreamingMediaFileConditioningMapper
      {

        static const int TRANSCODE_HASH = HashingUtils::HashString("TRANSCODE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        StreamingMediaFileConditioning GetStreamingMediaFileConditioningForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSCODE_HASH)
          {
            return StreamingMediaFileConditioning::TRANSCODE;
          }
          else if (hashCode == NONE_HASH)
          {
            return StreamingMediaFileConditioning::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingMediaFileConditioning>(hashCode);
          }

          return StreamingMediaFileConditioning::NOT_SET;
        }

        Aws::String GetNameForStreamingMediaFileConditioning(StreamingMediaFileConditioning enumValue)
        {
          switch(enumValue)
          {
          case StreamingMediaFileConditioning::NOT_SET:
            return {};
          case StreamingMediaFileConditioning::TRANSCODE:
            return "TRANSCODE";
          case StreamingMediaFileConditioning::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingMediaFileConditioningMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
