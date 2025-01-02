/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264WriteMp4PackagingType.h>
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
      namespace H264WriteMp4PackagingTypeMapper
      {

        static const int AVC1_HASH = HashingUtils::HashString("AVC1");
        static const int AVC3_HASH = HashingUtils::HashString("AVC3");


        H264WriteMp4PackagingType GetH264WriteMp4PackagingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVC1_HASH)
          {
            return H264WriteMp4PackagingType::AVC1;
          }
          else if (hashCode == AVC3_HASH)
          {
            return H264WriteMp4PackagingType::AVC3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264WriteMp4PackagingType>(hashCode);
          }

          return H264WriteMp4PackagingType::NOT_SET;
        }

        Aws::String GetNameForH264WriteMp4PackagingType(H264WriteMp4PackagingType enumValue)
        {
          switch(enumValue)
          {
          case H264WriteMp4PackagingType::NOT_SET:
            return {};
          case H264WriteMp4PackagingType::AVC1:
            return "AVC1";
          case H264WriteMp4PackagingType::AVC3:
            return "AVC3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264WriteMp4PackagingTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
