/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafManifestCompression.h>
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
      namespace CmafManifestCompressionMapper
      {

        static const int GZIP_HASH = HashingUtils::HashString("GZIP");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        CmafManifestCompression GetCmafManifestCompressionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GZIP_HASH)
          {
            return CmafManifestCompression::GZIP;
          }
          else if (hashCode == NONE_HASH)
          {
            return CmafManifestCompression::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafManifestCompression>(hashCode);
          }

          return CmafManifestCompression::NOT_SET;
        }

        Aws::String GetNameForCmafManifestCompression(CmafManifestCompression enumValue)
        {
          switch(enumValue)
          {
          case CmafManifestCompression::GZIP:
            return "GZIP";
          case CmafManifestCompression::NONE:
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

      } // namespace CmafManifestCompressionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
