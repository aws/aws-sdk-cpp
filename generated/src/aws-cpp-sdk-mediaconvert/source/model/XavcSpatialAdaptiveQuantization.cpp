/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcSpatialAdaptiveQuantization.h>
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
      namespace XavcSpatialAdaptiveQuantizationMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        XavcSpatialAdaptiveQuantization GetXavcSpatialAdaptiveQuantizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return XavcSpatialAdaptiveQuantization::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return XavcSpatialAdaptiveQuantization::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcSpatialAdaptiveQuantization>(hashCode);
          }

          return XavcSpatialAdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForXavcSpatialAdaptiveQuantization(XavcSpatialAdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case XavcSpatialAdaptiveQuantization::NOT_SET:
            return {};
          case XavcSpatialAdaptiveQuantization::DISABLED:
            return "DISABLED";
          case XavcSpatialAdaptiveQuantization::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XavcSpatialAdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
