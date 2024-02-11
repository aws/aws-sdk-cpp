/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcHdProfileBitrateClass.h>
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
      namespace XavcHdProfileBitrateClassMapper
      {

        static const int BITRATE_CLASS_25_HASH = HashingUtils::HashString("BITRATE_CLASS_25");
        static const int BITRATE_CLASS_35_HASH = HashingUtils::HashString("BITRATE_CLASS_35");
        static const int BITRATE_CLASS_50_HASH = HashingUtils::HashString("BITRATE_CLASS_50");


        XavcHdProfileBitrateClass GetXavcHdProfileBitrateClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BITRATE_CLASS_25_HASH)
          {
            return XavcHdProfileBitrateClass::BITRATE_CLASS_25;
          }
          else if (hashCode == BITRATE_CLASS_35_HASH)
          {
            return XavcHdProfileBitrateClass::BITRATE_CLASS_35;
          }
          else if (hashCode == BITRATE_CLASS_50_HASH)
          {
            return XavcHdProfileBitrateClass::BITRATE_CLASS_50;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcHdProfileBitrateClass>(hashCode);
          }

          return XavcHdProfileBitrateClass::NOT_SET;
        }

        Aws::String GetNameForXavcHdProfileBitrateClass(XavcHdProfileBitrateClass enumValue)
        {
          switch(enumValue)
          {
          case XavcHdProfileBitrateClass::NOT_SET:
            return {};
          case XavcHdProfileBitrateClass::BITRATE_CLASS_25:
            return "BITRATE_CLASS_25";
          case XavcHdProfileBitrateClass::BITRATE_CLASS_35:
            return "BITRATE_CLASS_35";
          case XavcHdProfileBitrateClass::BITRATE_CLASS_50:
            return "BITRATE_CLASS_50";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XavcHdProfileBitrateClassMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
