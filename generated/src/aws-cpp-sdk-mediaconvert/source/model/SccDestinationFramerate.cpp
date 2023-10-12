/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/SccDestinationFramerate.h>
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
      namespace SccDestinationFramerateMapper
      {

        static constexpr uint32_t FRAMERATE_23_97_HASH = ConstExprHashingUtils::HashString("FRAMERATE_23_97");
        static constexpr uint32_t FRAMERATE_24_HASH = ConstExprHashingUtils::HashString("FRAMERATE_24");
        static constexpr uint32_t FRAMERATE_25_HASH = ConstExprHashingUtils::HashString("FRAMERATE_25");
        static constexpr uint32_t FRAMERATE_29_97_DROPFRAME_HASH = ConstExprHashingUtils::HashString("FRAMERATE_29_97_DROPFRAME");
        static constexpr uint32_t FRAMERATE_29_97_NON_DROPFRAME_HASH = ConstExprHashingUtils::HashString("FRAMERATE_29_97_NON_DROPFRAME");


        SccDestinationFramerate GetSccDestinationFramerateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAMERATE_23_97_HASH)
          {
            return SccDestinationFramerate::FRAMERATE_23_97;
          }
          else if (hashCode == FRAMERATE_24_HASH)
          {
            return SccDestinationFramerate::FRAMERATE_24;
          }
          else if (hashCode == FRAMERATE_25_HASH)
          {
            return SccDestinationFramerate::FRAMERATE_25;
          }
          else if (hashCode == FRAMERATE_29_97_DROPFRAME_HASH)
          {
            return SccDestinationFramerate::FRAMERATE_29_97_DROPFRAME;
          }
          else if (hashCode == FRAMERATE_29_97_NON_DROPFRAME_HASH)
          {
            return SccDestinationFramerate::FRAMERATE_29_97_NON_DROPFRAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SccDestinationFramerate>(hashCode);
          }

          return SccDestinationFramerate::NOT_SET;
        }

        Aws::String GetNameForSccDestinationFramerate(SccDestinationFramerate enumValue)
        {
          switch(enumValue)
          {
          case SccDestinationFramerate::NOT_SET:
            return {};
          case SccDestinationFramerate::FRAMERATE_23_97:
            return "FRAMERATE_23_97";
          case SccDestinationFramerate::FRAMERATE_24:
            return "FRAMERATE_24";
          case SccDestinationFramerate::FRAMERATE_25:
            return "FRAMERATE_25";
          case SccDestinationFramerate::FRAMERATE_29_97_DROPFRAME:
            return "FRAMERATE_29_97_DROPFRAME";
          case SccDestinationFramerate::FRAMERATE_29_97_NON_DROPFRAME:
            return "FRAMERATE_29_97_NON_DROPFRAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SccDestinationFramerateMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
