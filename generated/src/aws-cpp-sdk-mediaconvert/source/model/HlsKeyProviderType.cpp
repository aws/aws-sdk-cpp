/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsKeyProviderType.h>
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
      namespace HlsKeyProviderTypeMapper
      {

        static const int SPEKE_HASH = HashingUtils::HashString("SPEKE");
        static const int STATIC_KEY_HASH = HashingUtils::HashString("STATIC_KEY");


        HlsKeyProviderType GetHlsKeyProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPEKE_HASH)
          {
            return HlsKeyProviderType::SPEKE;
          }
          else if (hashCode == STATIC_KEY_HASH)
          {
            return HlsKeyProviderType::STATIC_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsKeyProviderType>(hashCode);
          }

          return HlsKeyProviderType::NOT_SET;
        }

        Aws::String GetNameForHlsKeyProviderType(HlsKeyProviderType enumValue)
        {
          switch(enumValue)
          {
          case HlsKeyProviderType::SPEKE:
            return "SPEKE";
          case HlsKeyProviderType::STATIC_KEY:
            return "STATIC_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsKeyProviderTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
