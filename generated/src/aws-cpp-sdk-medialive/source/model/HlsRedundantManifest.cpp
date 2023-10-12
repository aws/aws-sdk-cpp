/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsRedundantManifest.h>
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
      namespace HlsRedundantManifestMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");


        HlsRedundantManifest GetHlsRedundantManifestForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return HlsRedundantManifest::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return HlsRedundantManifest::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsRedundantManifest>(hashCode);
          }

          return HlsRedundantManifest::NOT_SET;
        }

        Aws::String GetNameForHlsRedundantManifest(HlsRedundantManifest enumValue)
        {
          switch(enumValue)
          {
          case HlsRedundantManifest::NOT_SET:
            return {};
          case HlsRedundantManifest::DISABLED:
            return "DISABLED";
          case HlsRedundantManifest::ENABLED:
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

      } // namespace HlsRedundantManifestMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
