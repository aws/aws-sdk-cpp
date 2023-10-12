/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Eac3BitstreamMode.h>
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
      namespace Eac3BitstreamModeMapper
      {

        static constexpr uint32_t COMMENTARY_HASH = ConstExprHashingUtils::HashString("COMMENTARY");
        static constexpr uint32_t COMPLETE_MAIN_HASH = ConstExprHashingUtils::HashString("COMPLETE_MAIN");
        static constexpr uint32_t EMERGENCY_HASH = ConstExprHashingUtils::HashString("EMERGENCY");
        static constexpr uint32_t HEARING_IMPAIRED_HASH = ConstExprHashingUtils::HashString("HEARING_IMPAIRED");
        static constexpr uint32_t VISUALLY_IMPAIRED_HASH = ConstExprHashingUtils::HashString("VISUALLY_IMPAIRED");


        Eac3BitstreamMode GetEac3BitstreamModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMMENTARY_HASH)
          {
            return Eac3BitstreamMode::COMMENTARY;
          }
          else if (hashCode == COMPLETE_MAIN_HASH)
          {
            return Eac3BitstreamMode::COMPLETE_MAIN;
          }
          else if (hashCode == EMERGENCY_HASH)
          {
            return Eac3BitstreamMode::EMERGENCY;
          }
          else if (hashCode == HEARING_IMPAIRED_HASH)
          {
            return Eac3BitstreamMode::HEARING_IMPAIRED;
          }
          else if (hashCode == VISUALLY_IMPAIRED_HASH)
          {
            return Eac3BitstreamMode::VISUALLY_IMPAIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3BitstreamMode>(hashCode);
          }

          return Eac3BitstreamMode::NOT_SET;
        }

        Aws::String GetNameForEac3BitstreamMode(Eac3BitstreamMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3BitstreamMode::NOT_SET:
            return {};
          case Eac3BitstreamMode::COMMENTARY:
            return "COMMENTARY";
          case Eac3BitstreamMode::COMPLETE_MAIN:
            return "COMPLETE_MAIN";
          case Eac3BitstreamMode::EMERGENCY:
            return "EMERGENCY";
          case Eac3BitstreamMode::HEARING_IMPAIRED:
            return "HEARING_IMPAIRED";
          case Eac3BitstreamMode::VISUALLY_IMPAIRED:
            return "VISUALLY_IMPAIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3BitstreamModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
