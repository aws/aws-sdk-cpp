/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsProgressiveWriteHlsManifest.h>
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
      namespace HlsProgressiveWriteHlsManifestMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        HlsProgressiveWriteHlsManifest GetHlsProgressiveWriteHlsManifestForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return HlsProgressiveWriteHlsManifest::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return HlsProgressiveWriteHlsManifest::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsProgressiveWriteHlsManifest>(hashCode);
          }

          return HlsProgressiveWriteHlsManifest::NOT_SET;
        }

        Aws::String GetNameForHlsProgressiveWriteHlsManifest(HlsProgressiveWriteHlsManifest enumValue)
        {
          switch(enumValue)
          {
          case HlsProgressiveWriteHlsManifest::NOT_SET:
            return {};
          case HlsProgressiveWriteHlsManifest::ENABLED:
            return "ENABLED";
          case HlsProgressiveWriteHlsManifest::DISABLED:
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

      } // namespace HlsProgressiveWriteHlsManifestMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
