/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmfcIFrameOnlyManifest.h>
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
      namespace CmfcIFrameOnlyManifestMapper
      {

        static constexpr uint32_t INCLUDE_HASH = ConstExprHashingUtils::HashString("INCLUDE");
        static constexpr uint32_t EXCLUDE_HASH = ConstExprHashingUtils::HashString("EXCLUDE");


        CmfcIFrameOnlyManifest GetCmfcIFrameOnlyManifestForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return CmfcIFrameOnlyManifest::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return CmfcIFrameOnlyManifest::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmfcIFrameOnlyManifest>(hashCode);
          }

          return CmfcIFrameOnlyManifest::NOT_SET;
        }

        Aws::String GetNameForCmfcIFrameOnlyManifest(CmfcIFrameOnlyManifest enumValue)
        {
          switch(enumValue)
          {
          case CmfcIFrameOnlyManifest::NOT_SET:
            return {};
          case CmfcIFrameOnlyManifest::INCLUDE:
            return "INCLUDE";
          case CmfcIFrameOnlyManifest::EXCLUDE:
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

      } // namespace CmfcIFrameOnlyManifestMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
