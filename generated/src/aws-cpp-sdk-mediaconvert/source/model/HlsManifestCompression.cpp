/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsManifestCompression.h>
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
      namespace HlsManifestCompressionMapper
      {

        static constexpr uint32_t GZIP_HASH = ConstExprHashingUtils::HashString("GZIP");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        HlsManifestCompression GetHlsManifestCompressionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GZIP_HASH)
          {
            return HlsManifestCompression::GZIP;
          }
          else if (hashCode == NONE_HASH)
          {
            return HlsManifestCompression::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsManifestCompression>(hashCode);
          }

          return HlsManifestCompression::NOT_SET;
        }

        Aws::String GetNameForHlsManifestCompression(HlsManifestCompression enumValue)
        {
          switch(enumValue)
          {
          case HlsManifestCompression::NOT_SET:
            return {};
          case HlsManifestCompression::GZIP:
            return "GZIP";
          case HlsManifestCompression::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsManifestCompressionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
