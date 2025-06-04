/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mp4C2paManifest.h>
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
      namespace Mp4C2paManifestMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        Mp4C2paManifest GetMp4C2paManifestForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return Mp4C2paManifest::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return Mp4C2paManifest::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mp4C2paManifest>(hashCode);
          }

          return Mp4C2paManifest::NOT_SET;
        }

        Aws::String GetNameForMp4C2paManifest(Mp4C2paManifest enumValue)
        {
          switch(enumValue)
          {
          case Mp4C2paManifest::NOT_SET:
            return {};
          case Mp4C2paManifest::INCLUDE:
            return "INCLUDE";
          case Mp4C2paManifest::EXCLUDE:
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

      } // namespace Mp4C2paManifestMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
