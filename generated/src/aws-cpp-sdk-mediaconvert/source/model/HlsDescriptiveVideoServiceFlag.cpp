/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsDescriptiveVideoServiceFlag.h>
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
      namespace HlsDescriptiveVideoServiceFlagMapper
      {

        static const int DONT_FLAG_HASH = HashingUtils::HashString("DONT_FLAG");
        static const int FLAG_HASH = HashingUtils::HashString("FLAG");


        HlsDescriptiveVideoServiceFlag GetHlsDescriptiveVideoServiceFlagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DONT_FLAG_HASH)
          {
            return HlsDescriptiveVideoServiceFlag::DONT_FLAG;
          }
          else if (hashCode == FLAG_HASH)
          {
            return HlsDescriptiveVideoServiceFlag::FLAG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsDescriptiveVideoServiceFlag>(hashCode);
          }

          return HlsDescriptiveVideoServiceFlag::NOT_SET;
        }

        Aws::String GetNameForHlsDescriptiveVideoServiceFlag(HlsDescriptiveVideoServiceFlag enumValue)
        {
          switch(enumValue)
          {
          case HlsDescriptiveVideoServiceFlag::NOT_SET:
            return {};
          case HlsDescriptiveVideoServiceFlag::DONT_FLAG:
            return "DONT_FLAG";
          case HlsDescriptiveVideoServiceFlag::FLAG:
            return "FLAG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsDescriptiveVideoServiceFlagMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
