/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Format.h>
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
      namespace FormatMapper
      {

        static const int mp4_HASH = HashingUtils::HashString("mp4");
        static const int quicktime_HASH = HashingUtils::HashString("quicktime");
        static const int matroska_HASH = HashingUtils::HashString("matroska");
        static const int webm_HASH = HashingUtils::HashString("webm");
        static const int mxf_HASH = HashingUtils::HashString("mxf");


        Format GetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == mp4_HASH)
          {
            return Format::mp4;
          }
          else if (hashCode == quicktime_HASH)
          {
            return Format::quicktime;
          }
          else if (hashCode == matroska_HASH)
          {
            return Format::matroska;
          }
          else if (hashCode == webm_HASH)
          {
            return Format::webm;
          }
          else if (hashCode == mxf_HASH)
          {
            return Format::mxf;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Format>(hashCode);
          }

          return Format::NOT_SET;
        }

        Aws::String GetNameForFormat(Format enumValue)
        {
          switch(enumValue)
          {
          case Format::NOT_SET:
            return {};
          case Format::mp4:
            return "mp4";
          case Format::quicktime:
            return "quicktime";
          case Format::matroska:
            return "matroska";
          case Format::webm:
            return "webm";
          case Format::mxf:
            return "mxf";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormatMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
