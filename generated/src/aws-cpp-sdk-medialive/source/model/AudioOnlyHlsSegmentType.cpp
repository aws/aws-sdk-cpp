/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioOnlyHlsSegmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace AudioOnlyHlsSegmentTypeMapper
      {

        static constexpr uint32_t AAC_HASH = ConstExprHashingUtils::HashString("AAC");
        static constexpr uint32_t FMP4_HASH = ConstExprHashingUtils::HashString("FMP4");


        AudioOnlyHlsSegmentType GetAudioOnlyHlsSegmentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AAC_HASH)
          {
            return AudioOnlyHlsSegmentType::AAC;
          }
          else if (hashCode == FMP4_HASH)
          {
            return AudioOnlyHlsSegmentType::FMP4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioOnlyHlsSegmentType>(hashCode);
          }

          return AudioOnlyHlsSegmentType::NOT_SET;
        }

        Aws::String GetNameForAudioOnlyHlsSegmentType(AudioOnlyHlsSegmentType enumValue)
        {
          switch(enumValue)
          {
          case AudioOnlyHlsSegmentType::NOT_SET:
            return {};
          case AudioOnlyHlsSegmentType::AAC:
            return "AAC";
          case AudioOnlyHlsSegmentType::FMP4:
            return "FMP4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioOnlyHlsSegmentTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
