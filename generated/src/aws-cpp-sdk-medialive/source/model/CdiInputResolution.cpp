/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CdiInputResolution.h>
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
      namespace CdiInputResolutionMapper
      {

        static const int SD_HASH = HashingUtils::HashString("SD");
        static const int HD_HASH = HashingUtils::HashString("HD");
        static const int FHD_HASH = HashingUtils::HashString("FHD");
        static const int UHD_HASH = HashingUtils::HashString("UHD");


        CdiInputResolution GetCdiInputResolutionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SD_HASH)
          {
            return CdiInputResolution::SD;
          }
          else if (hashCode == HD_HASH)
          {
            return CdiInputResolution::HD;
          }
          else if (hashCode == FHD_HASH)
          {
            return CdiInputResolution::FHD;
          }
          else if (hashCode == UHD_HASH)
          {
            return CdiInputResolution::UHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CdiInputResolution>(hashCode);
          }

          return CdiInputResolution::NOT_SET;
        }

        Aws::String GetNameForCdiInputResolution(CdiInputResolution enumValue)
        {
          switch(enumValue)
          {
          case CdiInputResolution::SD:
            return "SD";
          case CdiInputResolution::HD:
            return "HD";
          case CdiInputResolution::FHD:
            return "FHD";
          case CdiInputResolution::UHD:
            return "UHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CdiInputResolutionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
