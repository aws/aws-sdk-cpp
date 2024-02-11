/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/StreamingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VoiceID
  {
    namespace Model
    {
      namespace StreamingStatusMapper
      {

        static const int PENDING_CONFIGURATION_HASH = HashingUtils::HashString("PENDING_CONFIGURATION");
        static const int ONGOING_HASH = HashingUtils::HashString("ONGOING");
        static const int ENDED_HASH = HashingUtils::HashString("ENDED");


        StreamingStatus GetStreamingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_CONFIGURATION_HASH)
          {
            return StreamingStatus::PENDING_CONFIGURATION;
          }
          else if (hashCode == ONGOING_HASH)
          {
            return StreamingStatus::ONGOING;
          }
          else if (hashCode == ENDED_HASH)
          {
            return StreamingStatus::ENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingStatus>(hashCode);
          }

          return StreamingStatus::NOT_SET;
        }

        Aws::String GetNameForStreamingStatus(StreamingStatus enumValue)
        {
          switch(enumValue)
          {
          case StreamingStatus::NOT_SET:
            return {};
          case StreamingStatus::PENDING_CONFIGURATION:
            return "PENDING_CONFIGURATION";
          case StreamingStatus::ONGOING:
            return "ONGOING";
          case StreamingStatus::ENDED:
            return "ENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingStatusMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
