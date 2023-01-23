/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264SceneChangeDetect.h>
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
      namespace H264SceneChangeDetectMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int TRANSITION_DETECTION_HASH = HashingUtils::HashString("TRANSITION_DETECTION");


        H264SceneChangeDetect GetH264SceneChangeDetectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H264SceneChangeDetect::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H264SceneChangeDetect::ENABLED;
          }
          else if (hashCode == TRANSITION_DETECTION_HASH)
          {
            return H264SceneChangeDetect::TRANSITION_DETECTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264SceneChangeDetect>(hashCode);
          }

          return H264SceneChangeDetect::NOT_SET;
        }

        Aws::String GetNameForH264SceneChangeDetect(H264SceneChangeDetect enumValue)
        {
          switch(enumValue)
          {
          case H264SceneChangeDetect::DISABLED:
            return "DISABLED";
          case H264SceneChangeDetect::ENABLED:
            return "ENABLED";
          case H264SceneChangeDetect::TRANSITION_DETECTION:
            return "TRANSITION_DETECTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264SceneChangeDetectMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
