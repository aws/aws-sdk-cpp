/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/ScteMarkersSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackageVod
  {
    namespace Model
    {
      namespace ScteMarkersSourceMapper
      {

        static const int SEGMENTS_HASH = HashingUtils::HashString("SEGMENTS");
        static const int MANIFEST_HASH = HashingUtils::HashString("MANIFEST");


        ScteMarkersSource GetScteMarkersSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEGMENTS_HASH)
          {
            return ScteMarkersSource::SEGMENTS;
          }
          else if (hashCode == MANIFEST_HASH)
          {
            return ScteMarkersSource::MANIFEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScteMarkersSource>(hashCode);
          }

          return ScteMarkersSource::NOT_SET;
        }

        Aws::String GetNameForScteMarkersSource(ScteMarkersSource enumValue)
        {
          switch(enumValue)
          {
          case ScteMarkersSource::NOT_SET:
            return {};
          case ScteMarkersSource::SEGMENTS:
            return "SEGMENTS";
          case ScteMarkersSource::MANIFEST:
            return "MANIFEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScteMarkersSourceMapper
    } // namespace Model
  } // namespace MediaPackageVod
} // namespace Aws
