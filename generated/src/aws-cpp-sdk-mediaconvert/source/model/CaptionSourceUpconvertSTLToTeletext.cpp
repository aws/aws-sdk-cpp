/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CaptionSourceUpconvertSTLToTeletext.h>
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
      namespace CaptionSourceUpconvertSTLToTeletextMapper
      {

        static const int UPCONVERT_HASH = HashingUtils::HashString("UPCONVERT");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CaptionSourceUpconvertSTLToTeletext GetCaptionSourceUpconvertSTLToTeletextForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPCONVERT_HASH)
          {
            return CaptionSourceUpconvertSTLToTeletext::UPCONVERT;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CaptionSourceUpconvertSTLToTeletext::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaptionSourceUpconvertSTLToTeletext>(hashCode);
          }

          return CaptionSourceUpconvertSTLToTeletext::NOT_SET;
        }

        Aws::String GetNameForCaptionSourceUpconvertSTLToTeletext(CaptionSourceUpconvertSTLToTeletext enumValue)
        {
          switch(enumValue)
          {
          case CaptionSourceUpconvertSTLToTeletext::NOT_SET:
            return {};
          case CaptionSourceUpconvertSTLToTeletext::UPCONVERT:
            return "UPCONVERT";
          case CaptionSourceUpconvertSTLToTeletext::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaptionSourceUpconvertSTLToTeletextMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
