/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mpeg2SceneChangeDetect.h>
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
      namespace Mpeg2SceneChangeDetectMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        Mpeg2SceneChangeDetect GetMpeg2SceneChangeDetectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Mpeg2SceneChangeDetect::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Mpeg2SceneChangeDetect::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2SceneChangeDetect>(hashCode);
          }

          return Mpeg2SceneChangeDetect::NOT_SET;
        }

        Aws::String GetNameForMpeg2SceneChangeDetect(Mpeg2SceneChangeDetect enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2SceneChangeDetect::DISABLED:
            return "DISABLED";
          case Mpeg2SceneChangeDetect::ENABLED:
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

      } // namespace Mpeg2SceneChangeDetectMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
