/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ProtectStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace ProtectStatusMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");
        static const int MONITOR_HASH = HashingUtils::HashString("MONITOR");
        static const int FILTER_HASH = HashingUtils::HashString("FILTER");


        ProtectStatus GetProtectStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return ProtectStatus::ALLOW;
          }
          else if (hashCode == BLOCK_HASH)
          {
            return ProtectStatus::BLOCK;
          }
          else if (hashCode == MONITOR_HASH)
          {
            return ProtectStatus::MONITOR;
          }
          else if (hashCode == FILTER_HASH)
          {
            return ProtectStatus::FILTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectStatus>(hashCode);
          }

          return ProtectStatus::NOT_SET;
        }

        Aws::String GetNameForProtectStatus(ProtectStatus enumValue)
        {
          switch(enumValue)
          {
          case ProtectStatus::NOT_SET:
            return {};
          case ProtectStatus::ALLOW:
            return "ALLOW";
          case ProtectStatus::BLOCK:
            return "BLOCK";
          case ProtectStatus::MONITOR:
            return "MONITOR";
          case ProtectStatus::FILTER:
            return "FILTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectStatusMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
