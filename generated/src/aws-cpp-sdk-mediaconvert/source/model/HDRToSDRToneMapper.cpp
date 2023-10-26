/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HDRToSDRToneMapper.h>
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
      namespace HDRToSDRToneMapperMapper
      {

        static const int PRESERVE_DETAILS_HASH = HashingUtils::HashString("PRESERVE_DETAILS");
        static const int VIBRANT_HASH = HashingUtils::HashString("VIBRANT");


        HDRToSDRToneMapper GetHDRToSDRToneMapperForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRESERVE_DETAILS_HASH)
          {
            return HDRToSDRToneMapper::PRESERVE_DETAILS;
          }
          else if (hashCode == VIBRANT_HASH)
          {
            return HDRToSDRToneMapper::VIBRANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HDRToSDRToneMapper>(hashCode);
          }

          return HDRToSDRToneMapper::NOT_SET;
        }

        Aws::String GetNameForHDRToSDRToneMapper(HDRToSDRToneMapper enumValue)
        {
          switch(enumValue)
          {
          case HDRToSDRToneMapper::NOT_SET:
            return {};
          case HDRToSDRToneMapper::PRESERVE_DETAILS:
            return "PRESERVE_DETAILS";
          case HDRToSDRToneMapper::VIBRANT:
            return "VIBRANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HDRToSDRToneMapperMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
