/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265WriteMp4PackagingType.h>
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
      namespace H265WriteMp4PackagingTypeMapper
      {

        static const int HVC1_HASH = HashingUtils::HashString("HVC1");
        static const int HEV1_HASH = HashingUtils::HashString("HEV1");


        H265WriteMp4PackagingType GetH265WriteMp4PackagingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HVC1_HASH)
          {
            return H265WriteMp4PackagingType::HVC1;
          }
          else if (hashCode == HEV1_HASH)
          {
            return H265WriteMp4PackagingType::HEV1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265WriteMp4PackagingType>(hashCode);
          }

          return H265WriteMp4PackagingType::NOT_SET;
        }

        Aws::String GetNameForH265WriteMp4PackagingType(H265WriteMp4PackagingType enumValue)
        {
          switch(enumValue)
          {
          case H265WriteMp4PackagingType::HVC1:
            return "HVC1";
          case H265WriteMp4PackagingType::HEV1:
            return "HEV1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265WriteMp4PackagingTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
