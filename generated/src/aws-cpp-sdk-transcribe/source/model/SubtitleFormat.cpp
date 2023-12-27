/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/SubtitleFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace SubtitleFormatMapper
      {

        static const int vtt_HASH = HashingUtils::HashString("vtt");
        static const int srt_HASH = HashingUtils::HashString("srt");


        SubtitleFormat GetSubtitleFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == vtt_HASH)
          {
            return SubtitleFormat::vtt;
          }
          else if (hashCode == srt_HASH)
          {
            return SubtitleFormat::srt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubtitleFormat>(hashCode);
          }

          return SubtitleFormat::NOT_SET;
        }

        Aws::String GetNameForSubtitleFormat(SubtitleFormat enumValue)
        {
          switch(enumValue)
          {
          case SubtitleFormat::NOT_SET:
            return {};
          case SubtitleFormat::vtt:
            return "vtt";
          case SubtitleFormat::srt:
            return "srt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubtitleFormatMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
