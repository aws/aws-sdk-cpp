/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vc3InterlaceMode.h>
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
      namespace Vc3InterlaceModeMapper
      {

        static const int INTERLACED_HASH = HashingUtils::HashString("INTERLACED");
        static const int PROGRESSIVE_HASH = HashingUtils::HashString("PROGRESSIVE");


        Vc3InterlaceMode GetVc3InterlaceModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERLACED_HASH)
          {
            return Vc3InterlaceMode::INTERLACED;
          }
          else if (hashCode == PROGRESSIVE_HASH)
          {
            return Vc3InterlaceMode::PROGRESSIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vc3InterlaceMode>(hashCode);
          }

          return Vc3InterlaceMode::NOT_SET;
        }

        Aws::String GetNameForVc3InterlaceMode(Vc3InterlaceMode enumValue)
        {
          switch(enumValue)
          {
          case Vc3InterlaceMode::INTERLACED:
            return "INTERLACED";
          case Vc3InterlaceMode::PROGRESSIVE:
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

      } // namespace Vc3InterlaceModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
