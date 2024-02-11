/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/EncodingName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace EncodingNameMapper
      {

        static const int jxsv_HASH = HashingUtils::HashString("jxsv");
        static const int raw_HASH = HashingUtils::HashString("raw");
        static const int smpte291_HASH = HashingUtils::HashString("smpte291");
        static const int pcm_HASH = HashingUtils::HashString("pcm");


        EncodingName GetEncodingNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == jxsv_HASH)
          {
            return EncodingName::jxsv;
          }
          else if (hashCode == raw_HASH)
          {
            return EncodingName::raw;
          }
          else if (hashCode == smpte291_HASH)
          {
            return EncodingName::smpte291;
          }
          else if (hashCode == pcm_HASH)
          {
            return EncodingName::pcm;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncodingName>(hashCode);
          }

          return EncodingName::NOT_SET;
        }

        Aws::String GetNameForEncodingName(EncodingName enumValue)
        {
          switch(enumValue)
          {
          case EncodingName::NOT_SET:
            return {};
          case EncodingName::jxsv:
            return "jxsv";
          case EncodingName::raw:
            return "raw";
          case EncodingName::smpte291:
            return "smpte291";
          case EncodingName::pcm:
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

      } // namespace EncodingNameMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
