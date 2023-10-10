/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsScte35SourceType.h>
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
      namespace HlsScte35SourceTypeMapper
      {

        static const int MANIFEST_HASH = HashingUtils::HashString("MANIFEST");
        static const int SEGMENTS_HASH = HashingUtils::HashString("SEGMENTS");


        HlsScte35SourceType GetHlsScte35SourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANIFEST_HASH)
          {
            return HlsScte35SourceType::MANIFEST;
          }
          else if (hashCode == SEGMENTS_HASH)
          {
            return HlsScte35SourceType::SEGMENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsScte35SourceType>(hashCode);
          }

          return HlsScte35SourceType::NOT_SET;
        }

        Aws::String GetNameForHlsScte35SourceType(HlsScte35SourceType enumValue)
        {
          switch(enumValue)
          {
          case HlsScte35SourceType::NOT_SET:
            return {};
          case HlsScte35SourceType::MANIFEST:
            return "MANIFEST";
          case HlsScte35SourceType::SEGMENTS:
            return "SEGMENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsScte35SourceTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
