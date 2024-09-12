/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264SaliencyAwareEncoding.h>
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
      namespace H264SaliencyAwareEncodingMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int PREFERRED_HASH = HashingUtils::HashString("PREFERRED");


        H264SaliencyAwareEncoding GetH264SaliencyAwareEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H264SaliencyAwareEncoding::DISABLED;
          }
          else if (hashCode == PREFERRED_HASH)
          {
            return H264SaliencyAwareEncoding::PREFERRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264SaliencyAwareEncoding>(hashCode);
          }

          return H264SaliencyAwareEncoding::NOT_SET;
        }

        Aws::String GetNameForH264SaliencyAwareEncoding(H264SaliencyAwareEncoding enumValue)
        {
          switch(enumValue)
          {
          case H264SaliencyAwareEncoding::NOT_SET:
            return {};
          case H264SaliencyAwareEncoding::DISABLED:
            return "DISABLED";
          case H264SaliencyAwareEncoding::PREFERRED:
            return "PREFERRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264SaliencyAwareEncodingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
