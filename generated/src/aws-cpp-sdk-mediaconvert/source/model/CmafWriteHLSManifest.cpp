/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafWriteHLSManifest.h>
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
      namespace CmafWriteHLSManifestMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");


        CmafWriteHLSManifest GetCmafWriteHLSManifestForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return CmafWriteHLSManifest::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return CmafWriteHLSManifest::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafWriteHLSManifest>(hashCode);
          }

          return CmafWriteHLSManifest::NOT_SET;
        }

        Aws::String GetNameForCmafWriteHLSManifest(CmafWriteHLSManifest enumValue)
        {
          switch(enumValue)
          {
          case CmafWriteHLSManifest::NOT_SET:
            return {};
          case CmafWriteHLSManifest::DISABLED:
            return "DISABLED";
          case CmafWriteHLSManifest::ENABLED:
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

      } // namespace CmafWriteHLSManifestMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
