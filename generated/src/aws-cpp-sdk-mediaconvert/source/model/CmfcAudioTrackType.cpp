﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmfcAudioTrackType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace CmfcAudioTrackTypeMapper
      {

        static const int ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT_HASH = HashingUtils::HashString("ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT");
        static const int ALTERNATE_AUDIO_AUTO_SELECT_HASH = HashingUtils::HashString("ALTERNATE_AUDIO_AUTO_SELECT");
        static const int ALTERNATE_AUDIO_NOT_AUTO_SELECT_HASH = HashingUtils::HashString("ALTERNATE_AUDIO_NOT_AUTO_SELECT");


        CmfcAudioTrackType GetCmfcAudioTrackTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT_HASH)
          {
            return CmfcAudioTrackType::ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT;
          }
          else if (hashCode == ALTERNATE_AUDIO_AUTO_SELECT_HASH)
          {
            return CmfcAudioTrackType::ALTERNATE_AUDIO_AUTO_SELECT;
          }
          else if (hashCode == ALTERNATE_AUDIO_NOT_AUTO_SELECT_HASH)
          {
            return CmfcAudioTrackType::ALTERNATE_AUDIO_NOT_AUTO_SELECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmfcAudioTrackType>(hashCode);
          }

          return CmfcAudioTrackType::NOT_SET;
        }

        Aws::String GetNameForCmfcAudioTrackType(CmfcAudioTrackType enumValue)
        {
          switch(enumValue)
          {
          case CmfcAudioTrackType::ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT:
            return "ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT";
          case CmfcAudioTrackType::ALTERNATE_AUDIO_AUTO_SELECT:
            return "ALTERNATE_AUDIO_AUTO_SELECT";
          case CmfcAudioTrackType::ALTERNATE_AUDIO_NOT_AUTO_SELECT:
            return "ALTERNATE_AUDIO_NOT_AUTO_SELECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmfcAudioTrackTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
