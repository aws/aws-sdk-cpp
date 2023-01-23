/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsH265PackagingType.h>
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
      namespace HlsH265PackagingTypeMapper
      {

        static const int HEV1_HASH = HashingUtils::HashString("HEV1");
        static const int HVC1_HASH = HashingUtils::HashString("HVC1");


        HlsH265PackagingType GetHlsH265PackagingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEV1_HASH)
          {
            return HlsH265PackagingType::HEV1;
          }
          else if (hashCode == HVC1_HASH)
          {
            return HlsH265PackagingType::HVC1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsH265PackagingType>(hashCode);
          }

          return HlsH265PackagingType::NOT_SET;
        }

        Aws::String GetNameForHlsH265PackagingType(HlsH265PackagingType enumValue)
        {
          switch(enumValue)
          {
          case HlsH265PackagingType::HEV1:
            return "HEV1";
          case HlsH265PackagingType::HVC1:
            return "HVC1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsH265PackagingTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
