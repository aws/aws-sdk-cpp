/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcTemporalAdaptiveQuantization.h>
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
      namespace XavcTemporalAdaptiveQuantizationMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        XavcTemporalAdaptiveQuantization GetXavcTemporalAdaptiveQuantizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return XavcTemporalAdaptiveQuantization::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return XavcTemporalAdaptiveQuantization::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcTemporalAdaptiveQuantization>(hashCode);
          }

          return XavcTemporalAdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForXavcTemporalAdaptiveQuantization(XavcTemporalAdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case XavcTemporalAdaptiveQuantization::NOT_SET:
            return {};
          case XavcTemporalAdaptiveQuantization::DISABLED:
            return "DISABLED";
          case XavcTemporalAdaptiveQuantization::ENABLED:
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

      } // namespace XavcTemporalAdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
