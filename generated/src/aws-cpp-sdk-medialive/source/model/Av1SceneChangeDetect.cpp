/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Av1SceneChangeDetect.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Av1SceneChangeDetectMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        Av1SceneChangeDetect GetAv1SceneChangeDetectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Av1SceneChangeDetect::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Av1SceneChangeDetect::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Av1SceneChangeDetect>(hashCode);
          }

          return Av1SceneChangeDetect::NOT_SET;
        }

        Aws::String GetNameForAv1SceneChangeDetect(Av1SceneChangeDetect enumValue)
        {
          switch(enumValue)
          {
          case Av1SceneChangeDetect::NOT_SET:
            return {};
          case Av1SceneChangeDetect::DISABLED:
            return "DISABLED";
          case Av1SceneChangeDetect::ENABLED:
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

      } // namespace Av1SceneChangeDetectMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
