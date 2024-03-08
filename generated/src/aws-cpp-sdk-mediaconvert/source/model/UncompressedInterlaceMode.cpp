/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/UncompressedInterlaceMode.h>
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
      namespace UncompressedInterlaceModeMapper
      {

        static const int INTERLACED_HASH = HashingUtils::HashString("INTERLACED");
        static const int PROGRESSIVE_HASH = HashingUtils::HashString("PROGRESSIVE");


        UncompressedInterlaceMode GetUncompressedInterlaceModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERLACED_HASH)
          {
            return UncompressedInterlaceMode::INTERLACED;
          }
          else if (hashCode == PROGRESSIVE_HASH)
          {
            return UncompressedInterlaceMode::PROGRESSIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UncompressedInterlaceMode>(hashCode);
          }

          return UncompressedInterlaceMode::NOT_SET;
        }

        Aws::String GetNameForUncompressedInterlaceMode(UncompressedInterlaceMode enumValue)
        {
          switch(enumValue)
          {
          case UncompressedInterlaceMode::NOT_SET:
            return {};
          case UncompressedInterlaceMode::INTERLACED:
            return "INTERLACED";
          case UncompressedInterlaceMode::PROGRESSIVE:
            return "PROGRESSIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UncompressedInterlaceModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
