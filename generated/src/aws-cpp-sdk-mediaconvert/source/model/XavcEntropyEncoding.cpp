/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcEntropyEncoding.h>
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
      namespace XavcEntropyEncodingMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int CABAC_HASH = HashingUtils::HashString("CABAC");
        static const int CAVLC_HASH = HashingUtils::HashString("CAVLC");


        XavcEntropyEncoding GetXavcEntropyEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return XavcEntropyEncoding::AUTO;
          }
          else if (hashCode == CABAC_HASH)
          {
            return XavcEntropyEncoding::CABAC;
          }
          else if (hashCode == CAVLC_HASH)
          {
            return XavcEntropyEncoding::CAVLC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcEntropyEncoding>(hashCode);
          }

          return XavcEntropyEncoding::NOT_SET;
        }

        Aws::String GetNameForXavcEntropyEncoding(XavcEntropyEncoding enumValue)
        {
          switch(enumValue)
          {
          case XavcEntropyEncoding::NOT_SET:
            return {};
          case XavcEntropyEncoding::AUTO:
            return "AUTO";
          case XavcEntropyEncoding::CABAC:
            return "CABAC";
          case XavcEntropyEncoding::CAVLC:
            return "CAVLC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XavcEntropyEncodingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
