/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DolbyVisionMapping.h>
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
      namespace DolbyVisionMappingMapper
      {

        static const int HDR10_NOMAP_HASH = HashingUtils::HashString("HDR10_NOMAP");
        static const int HDR10_1000_HASH = HashingUtils::HashString("HDR10_1000");


        DolbyVisionMapping GetDolbyVisionMappingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HDR10_NOMAP_HASH)
          {
            return DolbyVisionMapping::HDR10_NOMAP;
          }
          else if (hashCode == HDR10_1000_HASH)
          {
            return DolbyVisionMapping::HDR10_1000;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DolbyVisionMapping>(hashCode);
          }

          return DolbyVisionMapping::NOT_SET;
        }

        Aws::String GetNameForDolbyVisionMapping(DolbyVisionMapping enumValue)
        {
          switch(enumValue)
          {
          case DolbyVisionMapping::NOT_SET:
            return {};
          case DolbyVisionMapping::HDR10_NOMAP:
            return "HDR10_NOMAP";
          case DolbyVisionMapping::HDR10_1000:
            return "HDR10_1000";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DolbyVisionMappingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
