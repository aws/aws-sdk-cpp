/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DynamicAudioSelectorType.h>
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
      namespace DynamicAudioSelectorTypeMapper
      {

        static const int ALL_TRACKS_HASH = HashingUtils::HashString("ALL_TRACKS");
        static const int LANGUAGE_CODE_HASH = HashingUtils::HashString("LANGUAGE_CODE");


        DynamicAudioSelectorType GetDynamicAudioSelectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_TRACKS_HASH)
          {
            return DynamicAudioSelectorType::ALL_TRACKS;
          }
          else if (hashCode == LANGUAGE_CODE_HASH)
          {
            return DynamicAudioSelectorType::LANGUAGE_CODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DynamicAudioSelectorType>(hashCode);
          }

          return DynamicAudioSelectorType::NOT_SET;
        }

        Aws::String GetNameForDynamicAudioSelectorType(DynamicAudioSelectorType enumValue)
        {
          switch(enumValue)
          {
          case DynamicAudioSelectorType::NOT_SET:
            return {};
          case DynamicAudioSelectorType::ALL_TRACKS:
            return "ALL_TRACKS";
          case DynamicAudioSelectorType::LANGUAGE_CODE:
            return "LANGUAGE_CODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DynamicAudioSelectorTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
