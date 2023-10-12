/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/SpeakerStatus.h>
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
      namespace SpeakerStatusMapper
      {

        static constexpr uint32_t ENROLLED_HASH = ConstExprHashingUtils::HashString("ENROLLED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");
        static constexpr uint32_t OPTED_OUT_HASH = ConstExprHashingUtils::HashString("OPTED_OUT");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");


        SpeakerStatus GetSpeakerStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENROLLED_HASH)
          {
            return SpeakerStatus::ENROLLED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return SpeakerStatus::EXPIRED;
          }
          else if (hashCode == OPTED_OUT_HASH)
          {
            return SpeakerStatus::OPTED_OUT;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SpeakerStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpeakerStatus>(hashCode);
          }

          return SpeakerStatus::NOT_SET;
        }

        Aws::String GetNameForSpeakerStatus(SpeakerStatus enumValue)
        {
          switch(enumValue)
          {
          case SpeakerStatus::NOT_SET:
            return {};
          case SpeakerStatus::ENROLLED:
            return "ENROLLED";
          case SpeakerStatus::EXPIRED:
            return "EXPIRED";
          case SpeakerStatus::OPTED_OUT:
            return "OPTED_OUT";
          case SpeakerStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpeakerStatusMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
