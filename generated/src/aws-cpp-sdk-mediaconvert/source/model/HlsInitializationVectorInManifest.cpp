/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsInitializationVectorInManifest.h>
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
      namespace HlsInitializationVectorInManifestMapper
      {

        static constexpr uint32_t INCLUDE_HASH = ConstExprHashingUtils::HashString("INCLUDE");
        static constexpr uint32_t EXCLUDE_HASH = ConstExprHashingUtils::HashString("EXCLUDE");


        HlsInitializationVectorInManifest GetHlsInitializationVectorInManifestForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return HlsInitializationVectorInManifest::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return HlsInitializationVectorInManifest::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsInitializationVectorInManifest>(hashCode);
          }

          return HlsInitializationVectorInManifest::NOT_SET;
        }

        Aws::String GetNameForHlsInitializationVectorInManifest(HlsInitializationVectorInManifest enumValue)
        {
          switch(enumValue)
          {
          case HlsInitializationVectorInManifest::NOT_SET:
            return {};
          case HlsInitializationVectorInManifest::INCLUDE:
            return "INCLUDE";
          case HlsInitializationVectorInManifest::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsInitializationVectorInManifestMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
