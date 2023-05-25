/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MpdCaptionContainerType.h>
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
      namespace MpdCaptionContainerTypeMapper
      {

        static const int RAW_HASH = HashingUtils::HashString("RAW");
        static const int FRAGMENTED_MP4_HASH = HashingUtils::HashString("FRAGMENTED_MP4");


        MpdCaptionContainerType GetMpdCaptionContainerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RAW_HASH)
          {
            return MpdCaptionContainerType::RAW;
          }
          else if (hashCode == FRAGMENTED_MP4_HASH)
          {
            return MpdCaptionContainerType::FRAGMENTED_MP4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MpdCaptionContainerType>(hashCode);
          }

          return MpdCaptionContainerType::NOT_SET;
        }

        Aws::String GetNameForMpdCaptionContainerType(MpdCaptionContainerType enumValue)
        {
          switch(enumValue)
          {
          case MpdCaptionContainerType::RAW:
            return "RAW";
          case MpdCaptionContainerType::FRAGMENTED_MP4:
            return "FRAGMENTED_MP4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MpdCaptionContainerTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
