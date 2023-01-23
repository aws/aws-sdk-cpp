/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MpdManifestMetadataSignaling.h>
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
      namespace MpdManifestMetadataSignalingMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        MpdManifestMetadataSignaling GetMpdManifestMetadataSignalingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return MpdManifestMetadataSignaling::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return MpdManifestMetadataSignaling::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MpdManifestMetadataSignaling>(hashCode);
          }

          return MpdManifestMetadataSignaling::NOT_SET;
        }

        Aws::String GetNameForMpdManifestMetadataSignaling(MpdManifestMetadataSignaling enumValue)
        {
          switch(enumValue)
          {
          case MpdManifestMetadataSignaling::ENABLED:
            return "ENABLED";
          case MpdManifestMetadataSignaling::DISABLED:
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

      } // namespace MpdManifestMetadataSignalingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
