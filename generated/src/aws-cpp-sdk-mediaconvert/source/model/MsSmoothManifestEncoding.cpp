/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MsSmoothManifestEncoding.h>
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
      namespace MsSmoothManifestEncodingMapper
      {

        static constexpr uint32_t UTF8_HASH = ConstExprHashingUtils::HashString("UTF8");
        static constexpr uint32_t UTF16_HASH = ConstExprHashingUtils::HashString("UTF16");


        MsSmoothManifestEncoding GetMsSmoothManifestEncodingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UTF8_HASH)
          {
            return MsSmoothManifestEncoding::UTF8;
          }
          else if (hashCode == UTF16_HASH)
          {
            return MsSmoothManifestEncoding::UTF16;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MsSmoothManifestEncoding>(hashCode);
          }

          return MsSmoothManifestEncoding::NOT_SET;
        }

        Aws::String GetNameForMsSmoothManifestEncoding(MsSmoothManifestEncoding enumValue)
        {
          switch(enumValue)
          {
          case MsSmoothManifestEncoding::NOT_SET:
            return {};
          case MsSmoothManifestEncoding::UTF8:
            return "UTF8";
          case MsSmoothManifestEncoding::UTF16:
            return "UTF16";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MsSmoothManifestEncodingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
