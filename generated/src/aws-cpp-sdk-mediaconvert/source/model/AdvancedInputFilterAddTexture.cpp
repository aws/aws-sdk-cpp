/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AdvancedInputFilterAddTexture.h>
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
      namespace AdvancedInputFilterAddTextureMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AdvancedInputFilterAddTexture GetAdvancedInputFilterAddTextureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AdvancedInputFilterAddTexture::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AdvancedInputFilterAddTexture::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdvancedInputFilterAddTexture>(hashCode);
          }

          return AdvancedInputFilterAddTexture::NOT_SET;
        }

        Aws::String GetNameForAdvancedInputFilterAddTexture(AdvancedInputFilterAddTexture enumValue)
        {
          switch(enumValue)
          {
          case AdvancedInputFilterAddTexture::NOT_SET:
            return {};
          case AdvancedInputFilterAddTexture::ENABLED:
            return "ENABLED";
          case AdvancedInputFilterAddTexture::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdvancedInputFilterAddTextureMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
