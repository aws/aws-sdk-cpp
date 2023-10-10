/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsIntervalCadence.h>
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
      namespace HlsIntervalCadenceMapper
      {

        static const int FOLLOW_IFRAME_HASH = HashingUtils::HashString("FOLLOW_IFRAME");
        static const int FOLLOW_CUSTOM_HASH = HashingUtils::HashString("FOLLOW_CUSTOM");


        HlsIntervalCadence GetHlsIntervalCadenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_IFRAME_HASH)
          {
            return HlsIntervalCadence::FOLLOW_IFRAME;
          }
          else if (hashCode == FOLLOW_CUSTOM_HASH)
          {
            return HlsIntervalCadence::FOLLOW_CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsIntervalCadence>(hashCode);
          }

          return HlsIntervalCadence::NOT_SET;
        }

        Aws::String GetNameForHlsIntervalCadence(HlsIntervalCadence enumValue)
        {
          switch(enumValue)
          {
          case HlsIntervalCadence::NOT_SET:
            return {};
          case HlsIntervalCadence::FOLLOW_IFRAME:
            return "FOLLOW_IFRAME";
          case HlsIntervalCadence::FOLLOW_CUSTOM:
            return "FOLLOW_CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsIntervalCadenceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
