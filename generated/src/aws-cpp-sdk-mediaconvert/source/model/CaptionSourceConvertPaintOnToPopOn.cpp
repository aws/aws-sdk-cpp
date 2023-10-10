/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CaptionSourceConvertPaintOnToPopOn.h>
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
      namespace CaptionSourceConvertPaintOnToPopOnMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CaptionSourceConvertPaintOnToPopOn GetCaptionSourceConvertPaintOnToPopOnForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CaptionSourceConvertPaintOnToPopOn::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CaptionSourceConvertPaintOnToPopOn::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaptionSourceConvertPaintOnToPopOn>(hashCode);
          }

          return CaptionSourceConvertPaintOnToPopOn::NOT_SET;
        }

        Aws::String GetNameForCaptionSourceConvertPaintOnToPopOn(CaptionSourceConvertPaintOnToPopOn enumValue)
        {
          switch(enumValue)
          {
          case CaptionSourceConvertPaintOnToPopOn::NOT_SET:
            return {};
          case CaptionSourceConvertPaintOnToPopOn::ENABLED:
            return "ENABLED";
          case CaptionSourceConvertPaintOnToPopOn::DISABLED:
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

      } // namespace CaptionSourceConvertPaintOnToPopOnMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
