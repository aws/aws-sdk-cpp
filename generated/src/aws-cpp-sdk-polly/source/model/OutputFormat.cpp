/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/OutputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace OutputFormatMapper
      {

        static constexpr uint32_t json_HASH = ConstExprHashingUtils::HashString("json");
        static constexpr uint32_t mp3_HASH = ConstExprHashingUtils::HashString("mp3");
        static constexpr uint32_t ogg_vorbis_HASH = ConstExprHashingUtils::HashString("ogg_vorbis");
        static constexpr uint32_t pcm_HASH = ConstExprHashingUtils::HashString("pcm");


        OutputFormat GetOutputFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == json_HASH)
          {
            return OutputFormat::json;
          }
          else if (hashCode == mp3_HASH)
          {
            return OutputFormat::mp3;
          }
          else if (hashCode == ogg_vorbis_HASH)
          {
            return OutputFormat::ogg_vorbis;
          }
          else if (hashCode == pcm_HASH)
          {
            return OutputFormat::pcm;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputFormat>(hashCode);
          }

          return OutputFormat::NOT_SET;
        }

        Aws::String GetNameForOutputFormat(OutputFormat enumValue)
        {
          switch(enumValue)
          {
          case OutputFormat::NOT_SET:
            return {};
          case OutputFormat::json:
            return "json";
          case OutputFormat::mp3:
            return "mp3";
          case OutputFormat::ogg_vorbis:
            return "ogg_vorbis";
          case OutputFormat::pcm:
            return "pcm";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputFormatMapper
    } // namespace Model
  } // namespace Polly
} // namespace Aws
