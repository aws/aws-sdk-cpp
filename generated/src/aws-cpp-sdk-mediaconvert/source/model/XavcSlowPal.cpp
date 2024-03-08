/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcSlowPal.h>
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
      namespace XavcSlowPalMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        XavcSlowPal GetXavcSlowPalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return XavcSlowPal::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return XavcSlowPal::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcSlowPal>(hashCode);
          }

          return XavcSlowPal::NOT_SET;
        }

        Aws::String GetNameForXavcSlowPal(XavcSlowPal enumValue)
        {
          switch(enumValue)
          {
          case XavcSlowPal::NOT_SET:
            return {};
          case XavcSlowPal::DISABLED:
            return "DISABLED";
          case XavcSlowPal::ENABLED:
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

      } // namespace XavcSlowPalMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
